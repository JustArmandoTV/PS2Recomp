#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003292C0
// Address: 0x3292c0 - 0x329740
void sub_003292C0_0x3292c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003292C0_0x3292c0");
#endif

    switch (ctx->pc) {
        case 0x3292c0u: goto label_3292c0;
        case 0x3292c4u: goto label_3292c4;
        case 0x3292c8u: goto label_3292c8;
        case 0x3292ccu: goto label_3292cc;
        case 0x3292d0u: goto label_3292d0;
        case 0x3292d4u: goto label_3292d4;
        case 0x3292d8u: goto label_3292d8;
        case 0x3292dcu: goto label_3292dc;
        case 0x3292e0u: goto label_3292e0;
        case 0x3292e4u: goto label_3292e4;
        case 0x3292e8u: goto label_3292e8;
        case 0x3292ecu: goto label_3292ec;
        case 0x3292f0u: goto label_3292f0;
        case 0x3292f4u: goto label_3292f4;
        case 0x3292f8u: goto label_3292f8;
        case 0x3292fcu: goto label_3292fc;
        case 0x329300u: goto label_329300;
        case 0x329304u: goto label_329304;
        case 0x329308u: goto label_329308;
        case 0x32930cu: goto label_32930c;
        case 0x329310u: goto label_329310;
        case 0x329314u: goto label_329314;
        case 0x329318u: goto label_329318;
        case 0x32931cu: goto label_32931c;
        case 0x329320u: goto label_329320;
        case 0x329324u: goto label_329324;
        case 0x329328u: goto label_329328;
        case 0x32932cu: goto label_32932c;
        case 0x329330u: goto label_329330;
        case 0x329334u: goto label_329334;
        case 0x329338u: goto label_329338;
        case 0x32933cu: goto label_32933c;
        case 0x329340u: goto label_329340;
        case 0x329344u: goto label_329344;
        case 0x329348u: goto label_329348;
        case 0x32934cu: goto label_32934c;
        case 0x329350u: goto label_329350;
        case 0x329354u: goto label_329354;
        case 0x329358u: goto label_329358;
        case 0x32935cu: goto label_32935c;
        case 0x329360u: goto label_329360;
        case 0x329364u: goto label_329364;
        case 0x329368u: goto label_329368;
        case 0x32936cu: goto label_32936c;
        case 0x329370u: goto label_329370;
        case 0x329374u: goto label_329374;
        case 0x329378u: goto label_329378;
        case 0x32937cu: goto label_32937c;
        case 0x329380u: goto label_329380;
        case 0x329384u: goto label_329384;
        case 0x329388u: goto label_329388;
        case 0x32938cu: goto label_32938c;
        case 0x329390u: goto label_329390;
        case 0x329394u: goto label_329394;
        case 0x329398u: goto label_329398;
        case 0x32939cu: goto label_32939c;
        case 0x3293a0u: goto label_3293a0;
        case 0x3293a4u: goto label_3293a4;
        case 0x3293a8u: goto label_3293a8;
        case 0x3293acu: goto label_3293ac;
        case 0x3293b0u: goto label_3293b0;
        case 0x3293b4u: goto label_3293b4;
        case 0x3293b8u: goto label_3293b8;
        case 0x3293bcu: goto label_3293bc;
        case 0x3293c0u: goto label_3293c0;
        case 0x3293c4u: goto label_3293c4;
        case 0x3293c8u: goto label_3293c8;
        case 0x3293ccu: goto label_3293cc;
        case 0x3293d0u: goto label_3293d0;
        case 0x3293d4u: goto label_3293d4;
        case 0x3293d8u: goto label_3293d8;
        case 0x3293dcu: goto label_3293dc;
        case 0x3293e0u: goto label_3293e0;
        case 0x3293e4u: goto label_3293e4;
        case 0x3293e8u: goto label_3293e8;
        case 0x3293ecu: goto label_3293ec;
        case 0x3293f0u: goto label_3293f0;
        case 0x3293f4u: goto label_3293f4;
        case 0x3293f8u: goto label_3293f8;
        case 0x3293fcu: goto label_3293fc;
        case 0x329400u: goto label_329400;
        case 0x329404u: goto label_329404;
        case 0x329408u: goto label_329408;
        case 0x32940cu: goto label_32940c;
        case 0x329410u: goto label_329410;
        case 0x329414u: goto label_329414;
        case 0x329418u: goto label_329418;
        case 0x32941cu: goto label_32941c;
        case 0x329420u: goto label_329420;
        case 0x329424u: goto label_329424;
        case 0x329428u: goto label_329428;
        case 0x32942cu: goto label_32942c;
        case 0x329430u: goto label_329430;
        case 0x329434u: goto label_329434;
        case 0x329438u: goto label_329438;
        case 0x32943cu: goto label_32943c;
        case 0x329440u: goto label_329440;
        case 0x329444u: goto label_329444;
        case 0x329448u: goto label_329448;
        case 0x32944cu: goto label_32944c;
        case 0x329450u: goto label_329450;
        case 0x329454u: goto label_329454;
        case 0x329458u: goto label_329458;
        case 0x32945cu: goto label_32945c;
        case 0x329460u: goto label_329460;
        case 0x329464u: goto label_329464;
        case 0x329468u: goto label_329468;
        case 0x32946cu: goto label_32946c;
        case 0x329470u: goto label_329470;
        case 0x329474u: goto label_329474;
        case 0x329478u: goto label_329478;
        case 0x32947cu: goto label_32947c;
        case 0x329480u: goto label_329480;
        case 0x329484u: goto label_329484;
        case 0x329488u: goto label_329488;
        case 0x32948cu: goto label_32948c;
        case 0x329490u: goto label_329490;
        case 0x329494u: goto label_329494;
        case 0x329498u: goto label_329498;
        case 0x32949cu: goto label_32949c;
        case 0x3294a0u: goto label_3294a0;
        case 0x3294a4u: goto label_3294a4;
        case 0x3294a8u: goto label_3294a8;
        case 0x3294acu: goto label_3294ac;
        case 0x3294b0u: goto label_3294b0;
        case 0x3294b4u: goto label_3294b4;
        case 0x3294b8u: goto label_3294b8;
        case 0x3294bcu: goto label_3294bc;
        case 0x3294c0u: goto label_3294c0;
        case 0x3294c4u: goto label_3294c4;
        case 0x3294c8u: goto label_3294c8;
        case 0x3294ccu: goto label_3294cc;
        case 0x3294d0u: goto label_3294d0;
        case 0x3294d4u: goto label_3294d4;
        case 0x3294d8u: goto label_3294d8;
        case 0x3294dcu: goto label_3294dc;
        case 0x3294e0u: goto label_3294e0;
        case 0x3294e4u: goto label_3294e4;
        case 0x3294e8u: goto label_3294e8;
        case 0x3294ecu: goto label_3294ec;
        case 0x3294f0u: goto label_3294f0;
        case 0x3294f4u: goto label_3294f4;
        case 0x3294f8u: goto label_3294f8;
        case 0x3294fcu: goto label_3294fc;
        case 0x329500u: goto label_329500;
        case 0x329504u: goto label_329504;
        case 0x329508u: goto label_329508;
        case 0x32950cu: goto label_32950c;
        case 0x329510u: goto label_329510;
        case 0x329514u: goto label_329514;
        case 0x329518u: goto label_329518;
        case 0x32951cu: goto label_32951c;
        case 0x329520u: goto label_329520;
        case 0x329524u: goto label_329524;
        case 0x329528u: goto label_329528;
        case 0x32952cu: goto label_32952c;
        case 0x329530u: goto label_329530;
        case 0x329534u: goto label_329534;
        case 0x329538u: goto label_329538;
        case 0x32953cu: goto label_32953c;
        case 0x329540u: goto label_329540;
        case 0x329544u: goto label_329544;
        case 0x329548u: goto label_329548;
        case 0x32954cu: goto label_32954c;
        case 0x329550u: goto label_329550;
        case 0x329554u: goto label_329554;
        case 0x329558u: goto label_329558;
        case 0x32955cu: goto label_32955c;
        case 0x329560u: goto label_329560;
        case 0x329564u: goto label_329564;
        case 0x329568u: goto label_329568;
        case 0x32956cu: goto label_32956c;
        case 0x329570u: goto label_329570;
        case 0x329574u: goto label_329574;
        case 0x329578u: goto label_329578;
        case 0x32957cu: goto label_32957c;
        case 0x329580u: goto label_329580;
        case 0x329584u: goto label_329584;
        case 0x329588u: goto label_329588;
        case 0x32958cu: goto label_32958c;
        case 0x329590u: goto label_329590;
        case 0x329594u: goto label_329594;
        case 0x329598u: goto label_329598;
        case 0x32959cu: goto label_32959c;
        case 0x3295a0u: goto label_3295a0;
        case 0x3295a4u: goto label_3295a4;
        case 0x3295a8u: goto label_3295a8;
        case 0x3295acu: goto label_3295ac;
        case 0x3295b0u: goto label_3295b0;
        case 0x3295b4u: goto label_3295b4;
        case 0x3295b8u: goto label_3295b8;
        case 0x3295bcu: goto label_3295bc;
        case 0x3295c0u: goto label_3295c0;
        case 0x3295c4u: goto label_3295c4;
        case 0x3295c8u: goto label_3295c8;
        case 0x3295ccu: goto label_3295cc;
        case 0x3295d0u: goto label_3295d0;
        case 0x3295d4u: goto label_3295d4;
        case 0x3295d8u: goto label_3295d8;
        case 0x3295dcu: goto label_3295dc;
        case 0x3295e0u: goto label_3295e0;
        case 0x3295e4u: goto label_3295e4;
        case 0x3295e8u: goto label_3295e8;
        case 0x3295ecu: goto label_3295ec;
        case 0x3295f0u: goto label_3295f0;
        case 0x3295f4u: goto label_3295f4;
        case 0x3295f8u: goto label_3295f8;
        case 0x3295fcu: goto label_3295fc;
        case 0x329600u: goto label_329600;
        case 0x329604u: goto label_329604;
        case 0x329608u: goto label_329608;
        case 0x32960cu: goto label_32960c;
        case 0x329610u: goto label_329610;
        case 0x329614u: goto label_329614;
        case 0x329618u: goto label_329618;
        case 0x32961cu: goto label_32961c;
        case 0x329620u: goto label_329620;
        case 0x329624u: goto label_329624;
        case 0x329628u: goto label_329628;
        case 0x32962cu: goto label_32962c;
        case 0x329630u: goto label_329630;
        case 0x329634u: goto label_329634;
        case 0x329638u: goto label_329638;
        case 0x32963cu: goto label_32963c;
        case 0x329640u: goto label_329640;
        case 0x329644u: goto label_329644;
        case 0x329648u: goto label_329648;
        case 0x32964cu: goto label_32964c;
        case 0x329650u: goto label_329650;
        case 0x329654u: goto label_329654;
        case 0x329658u: goto label_329658;
        case 0x32965cu: goto label_32965c;
        case 0x329660u: goto label_329660;
        case 0x329664u: goto label_329664;
        case 0x329668u: goto label_329668;
        case 0x32966cu: goto label_32966c;
        case 0x329670u: goto label_329670;
        case 0x329674u: goto label_329674;
        case 0x329678u: goto label_329678;
        case 0x32967cu: goto label_32967c;
        case 0x329680u: goto label_329680;
        case 0x329684u: goto label_329684;
        case 0x329688u: goto label_329688;
        case 0x32968cu: goto label_32968c;
        case 0x329690u: goto label_329690;
        case 0x329694u: goto label_329694;
        case 0x329698u: goto label_329698;
        case 0x32969cu: goto label_32969c;
        case 0x3296a0u: goto label_3296a0;
        case 0x3296a4u: goto label_3296a4;
        case 0x3296a8u: goto label_3296a8;
        case 0x3296acu: goto label_3296ac;
        case 0x3296b0u: goto label_3296b0;
        case 0x3296b4u: goto label_3296b4;
        case 0x3296b8u: goto label_3296b8;
        case 0x3296bcu: goto label_3296bc;
        case 0x3296c0u: goto label_3296c0;
        case 0x3296c4u: goto label_3296c4;
        case 0x3296c8u: goto label_3296c8;
        case 0x3296ccu: goto label_3296cc;
        case 0x3296d0u: goto label_3296d0;
        case 0x3296d4u: goto label_3296d4;
        case 0x3296d8u: goto label_3296d8;
        case 0x3296dcu: goto label_3296dc;
        case 0x3296e0u: goto label_3296e0;
        case 0x3296e4u: goto label_3296e4;
        case 0x3296e8u: goto label_3296e8;
        case 0x3296ecu: goto label_3296ec;
        case 0x3296f0u: goto label_3296f0;
        case 0x3296f4u: goto label_3296f4;
        case 0x3296f8u: goto label_3296f8;
        case 0x3296fcu: goto label_3296fc;
        case 0x329700u: goto label_329700;
        case 0x329704u: goto label_329704;
        case 0x329708u: goto label_329708;
        case 0x32970cu: goto label_32970c;
        case 0x329710u: goto label_329710;
        case 0x329714u: goto label_329714;
        case 0x329718u: goto label_329718;
        case 0x32971cu: goto label_32971c;
        case 0x329720u: goto label_329720;
        case 0x329724u: goto label_329724;
        case 0x329728u: goto label_329728;
        case 0x32972cu: goto label_32972c;
        case 0x329730u: goto label_329730;
        case 0x329734u: goto label_329734;
        case 0x329738u: goto label_329738;
        case 0x32973cu: goto label_32973c;
        default: break;
    }

    ctx->pc = 0x3292c0u;

label_3292c0:
    // 0x3292c0: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x3292c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_3292c4:
    // 0x3292c4: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x3292c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3292c8:
    // 0x3292c8: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x3292c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_3292cc:
    // 0x3292cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3292ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3292d0:
    // 0x3292d0: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3292d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_3292d4:
    // 0x3292d4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_3292d8:
    if (ctx->pc == 0x3292D8u) {
        ctx->pc = 0x3292D8u;
            // 0x3292d8: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3292DCu;
        goto label_3292dc;
    }
    ctx->pc = 0x3292D4u;
    {
        const bool branch_taken_0x3292d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3292D4u;
            // 0x3292d8: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292d4) {
            ctx->pc = 0x3292F8u;
            goto label_3292f8;
        }
    }
    ctx->pc = 0x3292DCu;
label_3292dc:
    // 0x3292dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3292dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3292e0:
    // 0x3292e0: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x3292e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3292e4:
    // 0x3292e4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3292e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3292e8:
    // 0x3292e8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3292e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3292ec:
    // 0x3292ec: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3292ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3292f0:
    // 0x3292f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3292f4:
    if (ctx->pc == 0x3292F4u) {
        ctx->pc = 0x3292F4u;
            // 0x3292f4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3292F8u;
        goto label_3292f8;
    }
    ctx->pc = 0x3292F0u;
    {
        const bool branch_taken_0x3292f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3292F0u;
            // 0x3292f4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292f0) {
            ctx->pc = 0x32931Cu;
            goto label_32931c;
        }
    }
    ctx->pc = 0x3292F8u;
label_3292f8:
    // 0x3292f8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3292f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_3292fc:
    // 0x3292fc: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x3292fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_329300:
    // 0x329300: 0x603027  not         $a2, $v1
    ctx->pc = 0x329300u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_329304:
    // 0x329304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329308:
    // 0x329308: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x329308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_32930c:
    // 0x32930c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x32930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_329310:
    // 0x329310: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x329310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_329314:
    // 0x329314: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x329314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_329318:
    // 0x329318: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x329318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_32931c:
    // 0x32931c: 0x3e00008  jr          $ra
label_329320:
    if (ctx->pc == 0x329320u) {
        ctx->pc = 0x329324u;
        goto label_329324;
    }
    ctx->pc = 0x32931Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329324u;
label_329324:
    // 0x329324: 0x0  nop
    ctx->pc = 0x329324u;
    // NOP
label_329328:
    // 0x329328: 0x0  nop
    ctx->pc = 0x329328u;
    // NOP
label_32932c:
    // 0x32932c: 0x0  nop
    ctx->pc = 0x32932cu;
    // NOP
label_329330:
    // 0x329330: 0x80ca26c  j           func_3289B0
label_329334:
    if (ctx->pc == 0x329334u) {
        ctx->pc = 0x329334u;
            // 0x329334: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x329338u;
        goto label_329338;
    }
    ctx->pc = 0x329330u;
    ctx->pc = 0x329334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329330u;
            // 0x329334: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3289B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3289B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x329338u;
label_329338:
    // 0x329338: 0x0  nop
    ctx->pc = 0x329338u;
    // NOP
label_32933c:
    // 0x32933c: 0x0  nop
    ctx->pc = 0x32933cu;
    // NOP
label_329340:
    // 0x329340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329344:
    // 0x329344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329348:
    // 0x329348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32934c:
    // 0x32934c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329350:
    // 0x329350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329354:
    // 0x329354: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_329358:
    if (ctx->pc == 0x329358u) {
        ctx->pc = 0x329358u;
            // 0x329358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32935Cu;
        goto label_32935c;
    }
    ctx->pc = 0x329354u;
    {
        const bool branch_taken_0x329354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329354u;
            // 0x329358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329354) {
            ctx->pc = 0x329398u;
            goto label_329398;
        }
    }
    ctx->pc = 0x32935Cu;
label_32935c:
    // 0x32935c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_329360:
    // 0x329360: 0x24424660  addiu       $v0, $v0, 0x4660
    ctx->pc = 0x329360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
label_329364:
    // 0x329364: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_329368:
    if (ctx->pc == 0x329368u) {
        ctx->pc = 0x329368u;
            // 0x329368: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x32936Cu;
        goto label_32936c;
    }
    ctx->pc = 0x329364u;
    {
        const bool branch_taken_0x329364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329364u;
            // 0x329368: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329364) {
            ctx->pc = 0x329380u;
            goto label_329380;
        }
    }
    ctx->pc = 0x32936Cu;
label_32936c:
    // 0x32936c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_329370:
    // 0x329370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329374:
    // 0x329374: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x329374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_329378:
    // 0x329378: 0xc075bf8  jal         func_1D6FE0
label_32937c:
    if (ctx->pc == 0x32937Cu) {
        ctx->pc = 0x32937Cu;
            // 0x32937c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x329380u;
        goto label_329380;
    }
    ctx->pc = 0x329378u;
    SET_GPR_U32(ctx, 31, 0x329380u);
    ctx->pc = 0x32937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329378u;
            // 0x32937c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329380u; }
        if (ctx->pc != 0x329380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329380u; }
        if (ctx->pc != 0x329380u) { return; }
    }
    ctx->pc = 0x329380u;
label_329380:
    // 0x329380: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x329380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_329384:
    // 0x329384: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x329384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_329388:
    // 0x329388: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32938c:
    if (ctx->pc == 0x32938Cu) {
        ctx->pc = 0x32938Cu;
            // 0x32938c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329390u;
        goto label_329390;
    }
    ctx->pc = 0x329388u;
    {
        const bool branch_taken_0x329388 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x329388) {
            ctx->pc = 0x32938Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329388u;
            // 0x32938c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32939Cu;
            goto label_32939c;
        }
    }
    ctx->pc = 0x329390u;
label_329390:
    // 0x329390: 0xc0400a8  jal         func_1002A0
label_329394:
    if (ctx->pc == 0x329394u) {
        ctx->pc = 0x329394u;
            // 0x329394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329398u;
        goto label_329398;
    }
    ctx->pc = 0x329390u;
    SET_GPR_U32(ctx, 31, 0x329398u);
    ctx->pc = 0x329394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329390u;
            // 0x329394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329398u; }
        if (ctx->pc != 0x329398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329398u; }
        if (ctx->pc != 0x329398u) { return; }
    }
    ctx->pc = 0x329398u;
label_329398:
    // 0x329398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x329398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32939c:
    // 0x32939c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3293a0:
    // 0x3293a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3293a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3293a4:
    // 0x3293a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3293a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3293a8:
    // 0x3293a8: 0x3e00008  jr          $ra
label_3293ac:
    if (ctx->pc == 0x3293ACu) {
        ctx->pc = 0x3293ACu;
            // 0x3293ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3293B0u;
        goto label_3293b0;
    }
    ctx->pc = 0x3293A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3293A8u;
            // 0x3293ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3293B0u;
label_3293b0:
    // 0x3293b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3293b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3293b4:
    // 0x3293b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3293b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3293b8:
    // 0x3293b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3293b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3293bc:
    // 0x3293bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3293bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3293c0:
    // 0x3293c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3293c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3293c4:
    // 0x3293c4: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_3293c8:
    if (ctx->pc == 0x3293C8u) {
        ctx->pc = 0x3293C8u;
            // 0x3293c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3293CCu;
        goto label_3293cc;
    }
    ctx->pc = 0x3293C4u;
    {
        const bool branch_taken_0x3293c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3293C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3293C4u;
            // 0x3293c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293c4) {
            ctx->pc = 0x3293ECu;
            goto label_3293ec;
        }
    }
    ctx->pc = 0x3293CCu;
label_3293cc:
    // 0x3293cc: 0xc0b9250  jal         func_2E4940
label_3293d0:
    if (ctx->pc == 0x3293D0u) {
        ctx->pc = 0x3293D4u;
        goto label_3293d4;
    }
    ctx->pc = 0x3293CCu;
    SET_GPR_U32(ctx, 31, 0x3293D4u);
    ctx->pc = 0x2E4940u;
    if (runtime->hasFunction(0x2E4940u)) {
        auto targetFn = runtime->lookupFunction(0x2E4940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293D4u; }
        if (ctx->pc != 0x3293D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4940_0x2e4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293D4u; }
        if (ctx->pc != 0x3293D4u) { return; }
    }
    ctx->pc = 0x3293D4u;
label_3293d4:
    // 0x3293d4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3293d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3293d8:
    // 0x3293d8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x3293d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_3293dc:
    // 0x3293dc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3293dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3293e0:
    // 0x3293e0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x3293e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_3293e4:
    // 0x3293e4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3293e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3293e8:
    // 0x3293e8: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x3293e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_3293ec:
    // 0x3293ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3293ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3293f0:
    // 0x3293f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3293f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3293f4:
    // 0x3293f4: 0x3e00008  jr          $ra
label_3293f8:
    if (ctx->pc == 0x3293F8u) {
        ctx->pc = 0x3293F8u;
            // 0x3293f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3293FCu;
        goto label_3293fc;
    }
    ctx->pc = 0x3293F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3293F4u;
            // 0x3293f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3293FCu;
label_3293fc:
    // 0x3293fc: 0x0  nop
    ctx->pc = 0x3293fcu;
    // NOP
label_329400:
    // 0x329400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_329404:
    // 0x329404: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x329404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_329408:
    // 0x329408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x329408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32940c:
    // 0x32940c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_329410:
    // 0x329410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_329414:
    // 0x329414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329418:
    // 0x329418: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x329418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_32941c:
    // 0x32941c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x32941cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_329420:
    // 0x329420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329424:
    // 0x329424: 0x10a300ba  beq         $a1, $v1, . + 4 + (0xBA << 2)
label_329428:
    if (ctx->pc == 0x329428u) {
        ctx->pc = 0x329428u;
            // 0x329428: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32942Cu;
        goto label_32942c;
    }
    ctx->pc = 0x329424u;
    {
        const bool branch_taken_0x329424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x329428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329424u;
            // 0x329428: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329424) {
            ctx->pc = 0x329710u;
            goto label_329710;
        }
    }
    ctx->pc = 0x32942Cu;
label_32942c:
    // 0x32942c: 0x50a000aa  beql        $a1, $zero, . + 4 + (0xAA << 2)
label_329430:
    if (ctx->pc == 0x329430u) {
        ctx->pc = 0x329430u;
            // 0x329430: 0xc6020018  lwc1        $f2, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x329434u;
        goto label_329434;
    }
    ctx->pc = 0x32942Cu;
    {
        const bool branch_taken_0x32942c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32942c) {
            ctx->pc = 0x329430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32942Cu;
            // 0x329430: 0xc6020018  lwc1        $f2, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3296D8u;
            goto label_3296d8;
        }
    }
    ctx->pc = 0x329434u;
label_329434:
    // 0x329434: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_329438:
    // 0x329438: 0x50a30054  beql        $a1, $v1, . + 4 + (0x54 << 2)
label_32943c:
    if (ctx->pc == 0x32943Cu) {
        ctx->pc = 0x32943Cu;
            // 0x32943c: 0xc62100a8  lwc1        $f1, 0xA8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x329440u;
        goto label_329440;
    }
    ctx->pc = 0x329438u;
    {
        const bool branch_taken_0x329438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329438) {
            ctx->pc = 0x32943Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329438u;
            // 0x32943c: 0xc62100a8  lwc1        $f1, 0xA8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x32958Cu;
            goto label_32958c;
        }
    }
    ctx->pc = 0x329440u;
label_329440:
    // 0x329440: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x329440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_329444:
    // 0x329444: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_329448:
    if (ctx->pc == 0x329448u) {
        ctx->pc = 0x329448u;
            // 0x329448: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x32944Cu;
        goto label_32944c;
    }
    ctx->pc = 0x329444u;
    {
        const bool branch_taken_0x329444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329444) {
            ctx->pc = 0x329448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329444u;
            // 0x329448: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329470u;
            goto label_329470;
        }
    }
    ctx->pc = 0x32944Cu;
label_32944c:
    // 0x32944c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_329450:
    // 0x329450: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_329454:
    if (ctx->pc == 0x329454u) {
        ctx->pc = 0x329454u;
            // 0x329454: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x329458u;
        goto label_329458;
    }
    ctx->pc = 0x329450u;
    {
        const bool branch_taken_0x329450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329450) {
            ctx->pc = 0x329454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329450u;
            // 0x329454: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329460u;
            goto label_329460;
        }
    }
    ctx->pc = 0x329458u;
label_329458:
    // 0x329458: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_32945c:
    if (ctx->pc == 0x32945Cu) {
        ctx->pc = 0x32945Cu;
            // 0x32945c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x329460u;
        goto label_329460;
    }
    ctx->pc = 0x329458u;
    {
        const bool branch_taken_0x329458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329458u;
            // 0x32945c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329458) {
            ctx->pc = 0x329728u;
            goto label_329728;
        }
    }
    ctx->pc = 0x329460u;
label_329460:
    // 0x329460: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x329460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_329464:
    // 0x329464: 0x320f809  jalr        $t9
label_329468:
    if (ctx->pc == 0x329468u) {
        ctx->pc = 0x32946Cu;
        goto label_32946c;
    }
    ctx->pc = 0x329464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32946Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32946Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32946Cu; }
            if (ctx->pc != 0x32946Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32946Cu;
label_32946c:
    // 0x32946c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x32946cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_329470:
    // 0x329470: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x329470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_329474:
    // 0x329474: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x329474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_329478:
    // 0x329478: 0x3443b426  ori         $v1, $v0, 0xB426
    ctx->pc = 0x329478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_32947c:
    // 0x32947c: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x32947cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_329480:
    // 0x329480: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x329480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_329484:
    // 0x329484: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_329488:
    // 0x329488: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x329488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_32948c:
    // 0x32948c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x32948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_329490:
    // 0x329490: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x329490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_329494:
    // 0x329494: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x329494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_329498:
    // 0x329498: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32949c:
    // 0x32949c: 0xc4404a14  lwc1        $f0, 0x4A14($v0)
    ctx->pc = 0x32949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3294a0:
    // 0x3294a0: 0x8c620d70  lw          $v0, 0xD70($v1)
    ctx->pc = 0x3294a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_3294a4:
    // 0x3294a4: 0xc44200ac  lwc1        $f2, 0xAC($v0)
    ctx->pc = 0x3294a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3294a8:
    // 0x3294a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3294a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3294ac:
    // 0x3294ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3294acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3294b0:
    // 0x3294b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3294b4:
    if (ctx->pc == 0x3294B4u) {
        ctx->pc = 0x3294B4u;
            // 0x3294b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3294B8u;
        goto label_3294b8;
    }
    ctx->pc = 0x3294B0u;
    {
        const bool branch_taken_0x3294b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3294B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3294B0u;
            // 0x3294b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294b0) {
            ctx->pc = 0x3294C0u;
            goto label_3294c0;
        }
    }
    ctx->pc = 0x3294B8u;
label_3294b8:
    // 0x3294b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_3294bc:
    if (ctx->pc == 0x3294BCu) {
        ctx->pc = 0x3294BCu;
            // 0x3294bc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x3294C0u;
        goto label_3294c0;
    }
    ctx->pc = 0x3294B8u;
    {
        const bool branch_taken_0x3294b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3294B8u;
            // 0x3294bc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294b8) {
            ctx->pc = 0x3294F4u;
            goto label_3294f4;
        }
    }
    ctx->pc = 0x3294C0u;
label_3294c0:
    // 0x3294c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3294c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3294c4:
    // 0x3294c4: 0xc44049b4  lwc1        $f0, 0x49B4($v0)
    ctx->pc = 0x3294c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3294c8:
    // 0x3294c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3294c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3294cc:
    // 0x3294cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3294d0:
    if (ctx->pc == 0x3294D0u) {
        ctx->pc = 0x3294D4u;
        goto label_3294d4;
    }
    ctx->pc = 0x3294CCu;
    {
        const bool branch_taken_0x3294cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3294cc) {
            ctx->pc = 0x3294DCu;
            goto label_3294dc;
        }
    }
    ctx->pc = 0x3294D4u;
label_3294d4:
    // 0x3294d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3294d8:
    if (ctx->pc == 0x3294D8u) {
        ctx->pc = 0x3294D8u;
            // 0x3294d8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x3294DCu;
        goto label_3294dc;
    }
    ctx->pc = 0x3294D4u;
    {
        const bool branch_taken_0x3294d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3294D4u;
            // 0x3294d8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294d4) {
            ctx->pc = 0x3294F4u;
            goto label_3294f4;
        }
    }
    ctx->pc = 0x3294DCu;
label_3294dc:
    // 0x3294dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3294e0:
    // 0x3294e0: 0xc4404954  lwc1        $f0, 0x4954($v0)
    ctx->pc = 0x3294e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3294e4:
    // 0x3294e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3294e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3294e8:
    // 0x3294e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3294ec:
    if (ctx->pc == 0x3294ECu) {
        ctx->pc = 0x3294F0u;
        goto label_3294f0;
    }
    ctx->pc = 0x3294E8u;
    {
        const bool branch_taken_0x3294e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3294e8) {
            ctx->pc = 0x3294F4u;
            goto label_3294f4;
        }
    }
    ctx->pc = 0x3294F0u;
label_3294f0:
    // 0x3294f0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3294f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3294f4:
    // 0x3294f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3294f8:
    // 0x3294f8: 0x922400c0  lbu         $a0, 0xC0($s1)
    ctx->pc = 0x3294f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
label_3294fc:
    // 0x3294fc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3294fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_329500:
    // 0x329500: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x329500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_329504:
    // 0x329504: 0x262700d0  addiu       $a3, $s1, 0xD0
    ctx->pc = 0x329504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_329508:
    // 0x329508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x329508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32950c:
    // 0x32950c: 0xc0bb404  jal         func_2ED010
label_329510:
    if (ctx->pc == 0x329510u) {
        ctx->pc = 0x329510u;
            // 0x329510: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329514u;
        goto label_329514;
    }
    ctx->pc = 0x32950Cu;
    SET_GPR_U32(ctx, 31, 0x329514u);
    ctx->pc = 0x329510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32950Cu;
            // 0x329510: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329514u; }
        if (ctx->pc != 0x329514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329514u; }
        if (ctx->pc != 0x329514u) { return; }
    }
    ctx->pc = 0x329514u;
label_329514:
    // 0x329514: 0xc04ab66  jal         func_12AD98
label_329518:
    if (ctx->pc == 0x329518u) {
        ctx->pc = 0x32951Cu;
        goto label_32951c;
    }
    ctx->pc = 0x329514u;
    SET_GPR_U32(ctx, 31, 0x32951Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32951Cu; }
        if (ctx->pc != 0x32951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32951Cu; }
        if (ctx->pc != 0x32951Cu) { return; }
    }
    ctx->pc = 0x32951Cu;
label_32951c:
    // 0x32951c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_329520:
    // 0x329520: 0xc04ab66  jal         func_12AD98
label_329524:
    if (ctx->pc == 0x329524u) {
        ctx->pc = 0x329524u;
            // 0x329524: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x329528u;
        goto label_329528;
    }
    ctx->pc = 0x329520u;
    SET_GPR_U32(ctx, 31, 0x329528u);
    ctx->pc = 0x329524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329520u;
            // 0x329524: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329528u; }
        if (ctx->pc != 0x329528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329528u; }
        if (ctx->pc != 0x329528u) { return; }
    }
    ctx->pc = 0x329528u;
label_329528:
    // 0x329528: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x329528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_32952c:
    // 0x32952c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_329530:
    // 0x329530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x329530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_329534:
    // 0x329534: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_329538:
    if (ctx->pc == 0x329538u) {
        ctx->pc = 0x329538u;
            // 0x329538: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x32953Cu;
        goto label_32953c;
    }
    ctx->pc = 0x329534u;
    {
        const bool branch_taken_0x329534 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x329534) {
            ctx->pc = 0x329538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329534u;
            // 0x329538: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329548u;
            goto label_329548;
        }
    }
    ctx->pc = 0x32953Cu;
label_32953c:
    // 0x32953c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32953cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329540:
    // 0x329540: 0x10000007  b           . + 4 + (0x7 << 2)
label_329544:
    if (ctx->pc == 0x329544u) {
        ctx->pc = 0x329544u;
            // 0x329544: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x329548u;
        goto label_329548;
    }
    ctx->pc = 0x329540u;
    {
        const bool branch_taken_0x329540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329540u;
            // 0x329544: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329540) {
            ctx->pc = 0x329560u;
            goto label_329560;
        }
    }
    ctx->pc = 0x329548u;
label_329548:
    // 0x329548: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x329548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_32954c:
    // 0x32954c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_329550:
    // 0x329550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329554:
    // 0x329554: 0x0  nop
    ctx->pc = 0x329554u;
    // NOP
label_329558:
    // 0x329558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32955c:
    // 0x32955c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32955cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_329560:
    // 0x329560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x329560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_329564:
    // 0x329564: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_329568:
    // 0x329568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32956c:
    // 0x32956c: 0x0  nop
    ctx->pc = 0x32956cu;
    // NOP
label_329570:
    // 0x329570: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x329570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_329574:
    // 0x329574: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x329574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_329578:
    // 0x329578: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x329578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32957c:
    // 0x32957c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32957cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_329580:
    // 0x329580: 0x320f809  jalr        $t9
label_329584:
    if (ctx->pc == 0x329584u) {
        ctx->pc = 0x329584u;
            // 0x329584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329588u;
        goto label_329588;
    }
    ctx->pc = 0x329580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x329588u);
        ctx->pc = 0x329584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329580u;
            // 0x329584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x329588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x329588u; }
            if (ctx->pc != 0x329588u) { return; }
        }
        }
    }
    ctx->pc = 0x329588u;
label_329588:
    // 0x329588: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x329588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32958c:
    // 0x32958c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32958cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329590:
    // 0x329590: 0x0  nop
    ctx->pc = 0x329590u;
    // NOP
label_329594:
    // 0x329594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x329594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329598:
    // 0x329598: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_32959c:
    if (ctx->pc == 0x32959Cu) {
        ctx->pc = 0x32959Cu;
            // 0x32959c: 0xc6020018  lwc1        $f2, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3295A0u;
        goto label_3295a0;
    }
    ctx->pc = 0x329598u;
    {
        const bool branch_taken_0x329598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329598u;
            // 0x32959c: 0xc6020018  lwc1        $f2, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329598) {
            ctx->pc = 0x3295B0u;
            goto label_3295b0;
        }
    }
    ctx->pc = 0x3295A0u;
label_3295a0:
    // 0x3295a0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3295a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3295a4:
    // 0x3295a4: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3295a4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3295a8:
    // 0x3295a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3295ac:
    if (ctx->pc == 0x3295ACu) {
        ctx->pc = 0x3295ACu;
            // 0x3295ac: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->pc = 0x3295B0u;
        goto label_3295b0;
    }
    ctx->pc = 0x3295A8u;
    {
        const bool branch_taken_0x3295a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3295A8u;
            // 0x3295ac: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295a8) {
            ctx->pc = 0x3295B4u;
            goto label_3295b4;
        }
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3295b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3295b4:
    // 0x3295b4: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
label_3295b8:
    if (ctx->pc == 0x3295B8u) {
        ctx->pc = 0x3295BCu;
        goto label_3295bc;
    }
    ctx->pc = 0x3295B4u;
    {
        const bool branch_taken_0x3295b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3295b4) {
            ctx->pc = 0x329724u;
            goto label_329724;
        }
    }
    ctx->pc = 0x3295BCu;
label_3295bc:
    // 0x3295bc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3295bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3295c0:
    // 0x3295c0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3295c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3295c4:
    // 0x3295c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3295c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3295c8:
    // 0x3295c8: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x3295c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3295cc:
    // 0x3295cc: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3295ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3295d0:
    // 0x3295d0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x3295d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3295d4:
    // 0x3295d4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_3295d8:
    if (ctx->pc == 0x3295D8u) {
        ctx->pc = 0x3295D8u;
            // 0x3295d8: 0x460100dc  madd.s      $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->pc = 0x3295DCu;
        goto label_3295dc;
    }
    ctx->pc = 0x3295D4u;
    {
        const bool branch_taken_0x3295d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3295D4u;
            // 0x3295d8: 0x460100dc  madd.s      $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295d4) {
            ctx->pc = 0x329630u;
            goto label_329630;
        }
    }
    ctx->pc = 0x3295DCu;
label_3295dc:
    // 0x3295dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3295dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3295e0:
    // 0x3295e0: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x3295e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3295e4:
    // 0x3295e4: 0x8c64fa28  lw          $a0, -0x5D8($v1)
    ctx->pc = 0x3295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965800)));
label_3295e8:
    // 0x3295e8: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x3295e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3295ec:
    // 0x3295ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3295ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3295f0:
    // 0x3295f0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3295f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3295f4:
    // 0x3295f4: 0x8c63fa30  lw          $v1, -0x5D0($v1)
    ctx->pc = 0x3295f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965808)));
label_3295f8:
    // 0x3295f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3295f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3295fc:
    // 0x3295fc: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x3295fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_329600:
    // 0x329600: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x329600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_329604:
    // 0x329604: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x329604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329608:
    // 0x329608: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x329608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32960c:
    // 0x32960c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_329610:
    if (ctx->pc == 0x329610u) {
        ctx->pc = 0x329610u;
            // 0x329610: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->pc = 0x329614u;
        goto label_329614;
    }
    ctx->pc = 0x32960Cu;
    {
        const bool branch_taken_0x32960c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x329610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32960Cu;
            // 0x329610: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32960c) {
            ctx->pc = 0x329630u;
            goto label_329630;
        }
    }
    ctx->pc = 0x329614u;
label_329614:
    // 0x329614: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_329618:
    if (ctx->pc == 0x329618u) {
        ctx->pc = 0x32961Cu;
        goto label_32961c;
    }
    ctx->pc = 0x329614u;
    {
        const bool branch_taken_0x329614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329614) {
            ctx->pc = 0x329624u;
            goto label_329624;
        }
    }
    ctx->pc = 0x32961Cu;
label_32961c:
    // 0x32961c: 0x10000004  b           . + 4 + (0x4 << 2)
label_329620:
    if (ctx->pc == 0x329620u) {
        ctx->pc = 0x329620u;
            // 0x329620: 0xe62200a0  swc1        $f2, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->pc = 0x329624u;
        goto label_329624;
    }
    ctx->pc = 0x32961Cu;
    {
        const bool branch_taken_0x32961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32961Cu;
            // 0x329620: 0xe62200a0  swc1        $f2, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32961c) {
            ctx->pc = 0x329630u;
            goto label_329630;
        }
    }
    ctx->pc = 0x329624u;
label_329624:
    // 0x329624: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_329628:
    if (ctx->pc == 0x329628u) {
        ctx->pc = 0x329628u;
            // 0x329628: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->pc = 0x32962Cu;
        goto label_32962c;
    }
    ctx->pc = 0x329624u;
    {
        const bool branch_taken_0x329624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329624) {
            ctx->pc = 0x329628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329624u;
            // 0x329628: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329634u;
            goto label_329634;
        }
    }
    ctx->pc = 0x32962Cu;
label_32962c:
    // 0x32962c: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x32962cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_329630:
    // 0x329630: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x329630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_329634:
    // 0x329634: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x329634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_329638:
    // 0x329638: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
label_32963c:
    if (ctx->pc == 0x32963Cu) {
        ctx->pc = 0x32963Cu;
            // 0x32963c: 0xc62000a0  lwc1        $f0, 0xA0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x329640u;
        goto label_329640;
    }
    ctx->pc = 0x329638u;
    {
        const bool branch_taken_0x329638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x329638) {
            ctx->pc = 0x32963Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329638u;
            // 0x32963c: 0xc62000a0  lwc1        $f0, 0xA0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x329698u;
            goto label_329698;
        }
    }
    ctx->pc = 0x329640u;
label_329640:
    // 0x329640: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x329640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_329644:
    // 0x329644: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x329644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_329648:
    // 0x329648: 0x8c64fa38  lw          $a0, -0x5C8($v1)
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965816)));
label_32964c:
    // 0x32964c: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x32964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329650:
    // 0x329650: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_329654:
    // 0x329654: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x329654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_329658:
    // 0x329658: 0x8c63fa40  lw          $v1, -0x5C0($v1)
    ctx->pc = 0x329658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965824)));
label_32965c:
    // 0x32965c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x32965cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_329660:
    // 0x329660: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x329660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_329664:
    // 0x329664: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x329664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_329668:
    // 0x329668: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x329668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32966c:
    // 0x32966c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x32966cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329670:
    // 0x329670: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_329674:
    if (ctx->pc == 0x329674u) {
        ctx->pc = 0x329674u;
            // 0x329674: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->pc = 0x329678u;
        goto label_329678;
    }
    ctx->pc = 0x329670u;
    {
        const bool branch_taken_0x329670 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x329674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329670u;
            // 0x329674: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329670) {
            ctx->pc = 0x329694u;
            goto label_329694;
        }
    }
    ctx->pc = 0x329678u;
label_329678:
    // 0x329678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32967c:
    if (ctx->pc == 0x32967Cu) {
        ctx->pc = 0x329680u;
        goto label_329680;
    }
    ctx->pc = 0x329678u;
    {
        const bool branch_taken_0x329678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329678) {
            ctx->pc = 0x329688u;
            goto label_329688;
        }
    }
    ctx->pc = 0x329680u;
label_329680:
    // 0x329680: 0x10000004  b           . + 4 + (0x4 << 2)
label_329684:
    if (ctx->pc == 0x329684u) {
        ctx->pc = 0x329684u;
            // 0x329684: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x329688u;
        goto label_329688;
    }
    ctx->pc = 0x329680u;
    {
        const bool branch_taken_0x329680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329680u;
            // 0x329684: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329680) {
            ctx->pc = 0x329694u;
            goto label_329694;
        }
    }
    ctx->pc = 0x329688u;
label_329688:
    // 0x329688: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_32968c:
    if (ctx->pc == 0x32968Cu) {
        ctx->pc = 0x329690u;
        goto label_329690;
    }
    ctx->pc = 0x329688u;
    {
        const bool branch_taken_0x329688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329688) {
            ctx->pc = 0x329694u;
            goto label_329694;
        }
    }
    ctx->pc = 0x329690u;
label_329690:
    // 0x329690: 0xe62100a4  swc1        $f1, 0xA4($s1)
    ctx->pc = 0x329690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_329694:
    // 0x329694: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x329694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329698:
    // 0x329698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x329698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32969c:
    // 0x32969c: 0x0  nop
    ctx->pc = 0x32969cu;
    // NOP
label_3296a0:
    // 0x3296a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3296a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3296a4:
    // 0x3296a4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3296a8:
    if (ctx->pc == 0x3296A8u) {
        ctx->pc = 0x3296A8u;
            // 0x3296a8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3296ACu;
        goto label_3296ac;
    }
    ctx->pc = 0x3296A4u;
    {
        const bool branch_taken_0x3296a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3296a4) {
            ctx->pc = 0x3296A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3296A4u;
            // 0x3296a8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3296C0u;
            goto label_3296c0;
        }
    }
    ctx->pc = 0x3296ACu;
label_3296ac:
    // 0x3296ac: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x3296acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3296b0:
    // 0x3296b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3296b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3296b4:
    // 0x3296b4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_3296b8:
    if (ctx->pc == 0x3296B8u) {
        ctx->pc = 0x3296BCu;
        goto label_3296bc;
    }
    ctx->pc = 0x3296B4u;
    {
        const bool branch_taken_0x3296b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3296b4) {
            ctx->pc = 0x329724u;
            goto label_329724;
        }
    }
    ctx->pc = 0x3296BCu;
label_3296bc:
    // 0x3296bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3296bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3296c0:
    // 0x3296c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3296c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3296c4:
    // 0x3296c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3296c8:
    // 0x3296c8: 0x320f809  jalr        $t9
label_3296cc:
    if (ctx->pc == 0x3296CCu) {
        ctx->pc = 0x3296CCu;
            // 0x3296cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3296D0u;
        goto label_3296d0;
    }
    ctx->pc = 0x3296C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3296D0u);
        ctx->pc = 0x3296CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3296C8u;
            // 0x3296cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3296D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3296D0u; }
            if (ctx->pc != 0x3296D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3296D0u;
label_3296d0:
    // 0x3296d0: 0x10000014  b           . + 4 + (0x14 << 2)
label_3296d4:
    if (ctx->pc == 0x3296D4u) {
        ctx->pc = 0x3296D8u;
        goto label_3296d8;
    }
    ctx->pc = 0x3296D0u;
    {
        const bool branch_taken_0x3296d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296d0) {
            ctx->pc = 0x329724u;
            goto label_329724;
        }
    }
    ctx->pc = 0x3296D8u;
label_3296d8:
    // 0x3296d8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3296d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3296dc:
    // 0x3296dc: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x3296dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3296e0:
    // 0x3296e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3296e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3296e4:
    // 0x3296e4: 0x0  nop
    ctx->pc = 0x3296e4u;
    // NOP
label_3296e8:
    // 0x3296e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3296e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3296ec:
    // 0x3296ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3296ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3296f0:
    // 0x3296f0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_3296f4:
    if (ctx->pc == 0x3296F4u) {
        ctx->pc = 0x3296F4u;
            // 0x3296f4: 0xe62100e4  swc1        $f1, 0xE4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
        ctx->pc = 0x3296F8u;
        goto label_3296f8;
    }
    ctx->pc = 0x3296F0u;
    {
        const bool branch_taken_0x3296f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3296F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3296F0u;
            // 0x3296f4: 0xe62100e4  swc1        $f1, 0xE4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296f0) {
            ctx->pc = 0x329724u;
            goto label_329724;
        }
    }
    ctx->pc = 0x3296F8u;
label_3296f8:
    // 0x3296f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3296f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3296fc:
    // 0x3296fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3296fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_329700:
    // 0x329700: 0x320f809  jalr        $t9
label_329704:
    if (ctx->pc == 0x329704u) {
        ctx->pc = 0x329708u;
        goto label_329708;
    }
    ctx->pc = 0x329700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x329708u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x329708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x329708u; }
            if (ctx->pc != 0x329708u) { return; }
        }
        }
    }
    ctx->pc = 0x329708u;
label_329708:
    // 0x329708: 0x10000006  b           . + 4 + (0x6 << 2)
label_32970c:
    if (ctx->pc == 0x32970Cu) {
        ctx->pc = 0x329710u;
        goto label_329710;
    }
    ctx->pc = 0x329708u;
    {
        const bool branch_taken_0x329708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329708) {
            ctx->pc = 0x329724u;
            goto label_329724;
        }
    }
    ctx->pc = 0x329710u;
label_329710:
    // 0x329710: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x329710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_329714:
    // 0x329714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329718:
    // 0x329718: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x329718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32971c:
    // 0x32971c: 0xc057b7c  jal         func_15EDF0
label_329720:
    if (ctx->pc == 0x329720u) {
        ctx->pc = 0x329720u;
            // 0x329720: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x329724u;
        goto label_329724;
    }
    ctx->pc = 0x32971Cu;
    SET_GPR_U32(ctx, 31, 0x329724u);
    ctx->pc = 0x329720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32971Cu;
            // 0x329720: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329724u; }
        if (ctx->pc != 0x329724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329724u; }
        if (ctx->pc != 0x329724u) { return; }
    }
    ctx->pc = 0x329724u;
label_329724:
    // 0x329724: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x329724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_329728:
    // 0x329728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32972c:
    // 0x32972c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329730:
    // 0x329730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_329734:
    // 0x329734: 0x3e00008  jr          $ra
label_329738:
    if (ctx->pc == 0x329738u) {
        ctx->pc = 0x329738u;
            // 0x329738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x32973Cu;
        goto label_32973c;
    }
    ctx->pc = 0x329734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329734u;
            // 0x329738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32973Cu;
label_32973c:
    // 0x32973c: 0x0  nop
    ctx->pc = 0x32973cu;
    // NOP
}
