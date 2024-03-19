# 제목 1
## 제목 2
### 제목 3
#### 제목 4
##### 제목 5
###### 제목 6
- 하나의 마크다운 파일에서는 하나의 <h1\> (대제목)만 사용해야 한다.

이텔릭체는 *별 기호(Asterisks)* 혹은 _언더바 기호_ 를 사용하세요.<br>
두껍게는 **별 기호(asterisks)** 혹은 __언더바 기호(underscore)__ 를 두번씩 사용하세요.


취소선은 ~~물결 기호(tilde)~~ 를 사용하세요.<br>
<u>밑줄</u>은 마크다운에서 지원하지 않기에, 직접 `<u></u>` 태그를 사용하세요.

'-'로 시작하는 순서가 없는 목록으로 구분합니다.
```markdown
1. 순서가 있는 항목
2. 순서가 있는 항목
  1. 순서가 없는 항목
  2. 순서가 없는 항목
1. 순서가 있는 항목
2. 순서가 있는 항목

- 순서가 없는 항목
- 순서가 없는 항목
  - 순서가 없는 항목
  - 순서가 없는 항목
```

[GOOGLE](http://google.com)

[NAVER](https://naver.com "링크 설명(title)을 작성하세요.")

[상대적 참조](../users/login)

[Dribble][Dribble Link]

[GitHub][1]

문서 안에서 [참조링크]를 그대로 사용할 수도 있습니다.<br>
다음과 같이 문서 내 일반 URL이나 꺽쇠 괄호(`< >`, Angle Brackets)안의 URL은 자동으로 링크를 사용합니다.

구글 홈페이지: https://google.com <br>
네이버 홈페이지 <https://naver.com>

[Dribble Link]: https://dribble.com
[1]: https:github.com
[참조 링크]: https://naver.com "네이버로 이동합니다!"

![대체 텍스트(Alternative Text)](https://picsum.photos/1000/400 "링크 설명(Title)")
![이미지입니다!][Image]

[Image]: https://picsum.photos/500/300 "이미지입니다!"

```html
<a href="https://www.google.co.kr/" target="_blank">GOOGLE</a>
```

```css
.list > li {
  position: absolute;
  top: 40px;
}
```

```javascript
function add(a, b = 1) {
  console.log(a, b)
  return a + b
}
```

```bash
$ npm run dev
```
 
```python
s = "Python syntax highlighting"
print s
```
 
```plaintext
No language indicated, so no syntax highlighting. 
But let's throw in a <b>tag</b>.
```

| 값 | 의미 | 기본값 |
|---|:---:|---:|
| `static` | 유형(기준) 없음 / 배치 불가능 | `static` |
| `relative` | 요소 자신을 기준으로 배치 |  |
| `absolute` | 위치 상 부모(조상)요소를 기준으로 배치 |  |
| `fixed` | 브라우저 창을 기준으로 배치 |  |
| `sticky` | 스크롤 영역 기준으로 배치 |  |

값 | 의미 | 기본값
---|:---:|---:
`static` | 유형(기준) 없음 / 배치 불가능 | `static`
`relative` | 요소 자신을 기준으로 배치 |
`absolute` | 위치 상 부모_(조상)요소를 기준으로 배치 |
`fixed` | 브라우저 창을 기준으로 배치 |
`sticky` | 스크롤 영역 기준으로 배치 |

| 값 | 의미 |
|---|---|
| 버티컬바 출력 | \| |
| 인라인 코드 강조 | `\|` |

> 인용문 - 남의 말이나 글에서 직접 또는 간접으로 따온 문장.
> _(네이버 국어 사전)_

BREAK!

> 인용문을 작성하세요!
>> 중첩된 인용문(nested blockquote)을 만들 수 있습니다.
>>> 중중첩 인용문 1  
>>> 중중첩 인용문 2  
>>> 중중첩 인용문 3  

$$
f(x) = \int_{-\infty}^{\infty}
    \hat f(\xi)\,e^{2\pi i \xi x}
    \,d\xi
$$
