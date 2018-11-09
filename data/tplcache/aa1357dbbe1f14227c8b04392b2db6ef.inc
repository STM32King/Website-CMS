<li>
                <div class="nimg col-md-3 col-sm-3 hidden-xs"><a href="[field:arcurl/]"><img src="[field:picname/]"></a></div>
                <div class="newdec col-md-9 col-sm-9 col-xs-12">
                  <div class="time tc col-md-2 col-sm-2 col-xs-3"><span>[field:pubdate function="MyDate('d',@me)"/]</span><br>
                    [field:pubdate function="MyDate('Y-m',@me)"/]</div>
                  <div class="descript col-md-10 col-sm-10 col-xs-9">
                    <dd><a href="[field:arcurl/]">[field:title/]</a></dd>
                    <dt>[field:description function="cn_substr(@me,300)"/]...</dt>
                  </div>
                </div>
              </li>