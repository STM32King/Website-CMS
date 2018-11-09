<li class="menu_head"> {dede:field name=typeid runphp="yes"}
        global $dsql;
        $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
        $row = $dsql->GetOne($sql);      
        @me=is_array($row)?'
        <dl class="ericon">
          <span class="icon1">-</span><span class="icon2">+</span>
        </dl>
        ':'';
        {/dede:field} <a href="{dede:field name='typeurl'/}" class="ce">{dede:field name='typename'/}</a>
        <ul class="menu_body">
          {dede:channel type='son' noself='yes'}
          <li><a href='[field:typeurl/]' class="er">[field:typename/]</a></li>
          {/dede:channel}
        </ul>
      </li>