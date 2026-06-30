#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003411F0
// Address: 0x3411f0 - 0x3415c0
void sub_003411F0_0x3411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003411F0_0x3411f0");
#endif

    switch (ctx->pc) {
        case 0x3411f0u: goto label_3411f0;
        case 0x3411f4u: goto label_3411f4;
        case 0x3411f8u: goto label_3411f8;
        case 0x3411fcu: goto label_3411fc;
        case 0x341200u: goto label_341200;
        case 0x341204u: goto label_341204;
        case 0x341208u: goto label_341208;
        case 0x34120cu: goto label_34120c;
        case 0x341210u: goto label_341210;
        case 0x341214u: goto label_341214;
        case 0x341218u: goto label_341218;
        case 0x34121cu: goto label_34121c;
        case 0x341220u: goto label_341220;
        case 0x341224u: goto label_341224;
        case 0x341228u: goto label_341228;
        case 0x34122cu: goto label_34122c;
        case 0x341230u: goto label_341230;
        case 0x341234u: goto label_341234;
        case 0x341238u: goto label_341238;
        case 0x34123cu: goto label_34123c;
        case 0x341240u: goto label_341240;
        case 0x341244u: goto label_341244;
        case 0x341248u: goto label_341248;
        case 0x34124cu: goto label_34124c;
        case 0x341250u: goto label_341250;
        case 0x341254u: goto label_341254;
        case 0x341258u: goto label_341258;
        case 0x34125cu: goto label_34125c;
        case 0x341260u: goto label_341260;
        case 0x341264u: goto label_341264;
        case 0x341268u: goto label_341268;
        case 0x34126cu: goto label_34126c;
        case 0x341270u: goto label_341270;
        case 0x341274u: goto label_341274;
        case 0x341278u: goto label_341278;
        case 0x34127cu: goto label_34127c;
        case 0x341280u: goto label_341280;
        case 0x341284u: goto label_341284;
        case 0x341288u: goto label_341288;
        case 0x34128cu: goto label_34128c;
        case 0x341290u: goto label_341290;
        case 0x341294u: goto label_341294;
        case 0x341298u: goto label_341298;
        case 0x34129cu: goto label_34129c;
        case 0x3412a0u: goto label_3412a0;
        case 0x3412a4u: goto label_3412a4;
        case 0x3412a8u: goto label_3412a8;
        case 0x3412acu: goto label_3412ac;
        case 0x3412b0u: goto label_3412b0;
        case 0x3412b4u: goto label_3412b4;
        case 0x3412b8u: goto label_3412b8;
        case 0x3412bcu: goto label_3412bc;
        case 0x3412c0u: goto label_3412c0;
        case 0x3412c4u: goto label_3412c4;
        case 0x3412c8u: goto label_3412c8;
        case 0x3412ccu: goto label_3412cc;
        case 0x3412d0u: goto label_3412d0;
        case 0x3412d4u: goto label_3412d4;
        case 0x3412d8u: goto label_3412d8;
        case 0x3412dcu: goto label_3412dc;
        case 0x3412e0u: goto label_3412e0;
        case 0x3412e4u: goto label_3412e4;
        case 0x3412e8u: goto label_3412e8;
        case 0x3412ecu: goto label_3412ec;
        case 0x3412f0u: goto label_3412f0;
        case 0x3412f4u: goto label_3412f4;
        case 0x3412f8u: goto label_3412f8;
        case 0x3412fcu: goto label_3412fc;
        case 0x341300u: goto label_341300;
        case 0x341304u: goto label_341304;
        case 0x341308u: goto label_341308;
        case 0x34130cu: goto label_34130c;
        case 0x341310u: goto label_341310;
        case 0x341314u: goto label_341314;
        case 0x341318u: goto label_341318;
        case 0x34131cu: goto label_34131c;
        case 0x341320u: goto label_341320;
        case 0x341324u: goto label_341324;
        case 0x341328u: goto label_341328;
        case 0x34132cu: goto label_34132c;
        case 0x341330u: goto label_341330;
        case 0x341334u: goto label_341334;
        case 0x341338u: goto label_341338;
        case 0x34133cu: goto label_34133c;
        case 0x341340u: goto label_341340;
        case 0x341344u: goto label_341344;
        case 0x341348u: goto label_341348;
        case 0x34134cu: goto label_34134c;
        case 0x341350u: goto label_341350;
        case 0x341354u: goto label_341354;
        case 0x341358u: goto label_341358;
        case 0x34135cu: goto label_34135c;
        case 0x341360u: goto label_341360;
        case 0x341364u: goto label_341364;
        case 0x341368u: goto label_341368;
        case 0x34136cu: goto label_34136c;
        case 0x341370u: goto label_341370;
        case 0x341374u: goto label_341374;
        case 0x341378u: goto label_341378;
        case 0x34137cu: goto label_34137c;
        case 0x341380u: goto label_341380;
        case 0x341384u: goto label_341384;
        case 0x341388u: goto label_341388;
        case 0x34138cu: goto label_34138c;
        case 0x341390u: goto label_341390;
        case 0x341394u: goto label_341394;
        case 0x341398u: goto label_341398;
        case 0x34139cu: goto label_34139c;
        case 0x3413a0u: goto label_3413a0;
        case 0x3413a4u: goto label_3413a4;
        case 0x3413a8u: goto label_3413a8;
        case 0x3413acu: goto label_3413ac;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413b4u: goto label_3413b4;
        case 0x3413b8u: goto label_3413b8;
        case 0x3413bcu: goto label_3413bc;
        case 0x3413c0u: goto label_3413c0;
        case 0x3413c4u: goto label_3413c4;
        case 0x3413c8u: goto label_3413c8;
        case 0x3413ccu: goto label_3413cc;
        case 0x3413d0u: goto label_3413d0;
        case 0x3413d4u: goto label_3413d4;
        case 0x3413d8u: goto label_3413d8;
        case 0x3413dcu: goto label_3413dc;
        case 0x3413e0u: goto label_3413e0;
        case 0x3413e4u: goto label_3413e4;
        case 0x3413e8u: goto label_3413e8;
        case 0x3413ecu: goto label_3413ec;
        case 0x3413f0u: goto label_3413f0;
        case 0x3413f4u: goto label_3413f4;
        case 0x3413f8u: goto label_3413f8;
        case 0x3413fcu: goto label_3413fc;
        case 0x341400u: goto label_341400;
        case 0x341404u: goto label_341404;
        case 0x341408u: goto label_341408;
        case 0x34140cu: goto label_34140c;
        case 0x341410u: goto label_341410;
        case 0x341414u: goto label_341414;
        case 0x341418u: goto label_341418;
        case 0x34141cu: goto label_34141c;
        case 0x341420u: goto label_341420;
        case 0x341424u: goto label_341424;
        case 0x341428u: goto label_341428;
        case 0x34142cu: goto label_34142c;
        case 0x341430u: goto label_341430;
        case 0x341434u: goto label_341434;
        case 0x341438u: goto label_341438;
        case 0x34143cu: goto label_34143c;
        case 0x341440u: goto label_341440;
        case 0x341444u: goto label_341444;
        case 0x341448u: goto label_341448;
        case 0x34144cu: goto label_34144c;
        case 0x341450u: goto label_341450;
        case 0x341454u: goto label_341454;
        case 0x341458u: goto label_341458;
        case 0x34145cu: goto label_34145c;
        case 0x341460u: goto label_341460;
        case 0x341464u: goto label_341464;
        case 0x341468u: goto label_341468;
        case 0x34146cu: goto label_34146c;
        case 0x341470u: goto label_341470;
        case 0x341474u: goto label_341474;
        case 0x341478u: goto label_341478;
        case 0x34147cu: goto label_34147c;
        case 0x341480u: goto label_341480;
        case 0x341484u: goto label_341484;
        case 0x341488u: goto label_341488;
        case 0x34148cu: goto label_34148c;
        case 0x341490u: goto label_341490;
        case 0x341494u: goto label_341494;
        case 0x341498u: goto label_341498;
        case 0x34149cu: goto label_34149c;
        case 0x3414a0u: goto label_3414a0;
        case 0x3414a4u: goto label_3414a4;
        case 0x3414a8u: goto label_3414a8;
        case 0x3414acu: goto label_3414ac;
        case 0x3414b0u: goto label_3414b0;
        case 0x3414b4u: goto label_3414b4;
        case 0x3414b8u: goto label_3414b8;
        case 0x3414bcu: goto label_3414bc;
        case 0x3414c0u: goto label_3414c0;
        case 0x3414c4u: goto label_3414c4;
        case 0x3414c8u: goto label_3414c8;
        case 0x3414ccu: goto label_3414cc;
        case 0x3414d0u: goto label_3414d0;
        case 0x3414d4u: goto label_3414d4;
        case 0x3414d8u: goto label_3414d8;
        case 0x3414dcu: goto label_3414dc;
        case 0x3414e0u: goto label_3414e0;
        case 0x3414e4u: goto label_3414e4;
        case 0x3414e8u: goto label_3414e8;
        case 0x3414ecu: goto label_3414ec;
        case 0x3414f0u: goto label_3414f0;
        case 0x3414f4u: goto label_3414f4;
        case 0x3414f8u: goto label_3414f8;
        case 0x3414fcu: goto label_3414fc;
        case 0x341500u: goto label_341500;
        case 0x341504u: goto label_341504;
        case 0x341508u: goto label_341508;
        case 0x34150cu: goto label_34150c;
        case 0x341510u: goto label_341510;
        case 0x341514u: goto label_341514;
        case 0x341518u: goto label_341518;
        case 0x34151cu: goto label_34151c;
        case 0x341520u: goto label_341520;
        case 0x341524u: goto label_341524;
        case 0x341528u: goto label_341528;
        case 0x34152cu: goto label_34152c;
        case 0x341530u: goto label_341530;
        case 0x341534u: goto label_341534;
        case 0x341538u: goto label_341538;
        case 0x34153cu: goto label_34153c;
        case 0x341540u: goto label_341540;
        case 0x341544u: goto label_341544;
        case 0x341548u: goto label_341548;
        case 0x34154cu: goto label_34154c;
        case 0x341550u: goto label_341550;
        case 0x341554u: goto label_341554;
        case 0x341558u: goto label_341558;
        case 0x34155cu: goto label_34155c;
        case 0x341560u: goto label_341560;
        case 0x341564u: goto label_341564;
        case 0x341568u: goto label_341568;
        case 0x34156cu: goto label_34156c;
        case 0x341570u: goto label_341570;
        case 0x341574u: goto label_341574;
        case 0x341578u: goto label_341578;
        case 0x34157cu: goto label_34157c;
        case 0x341580u: goto label_341580;
        case 0x341584u: goto label_341584;
        case 0x341588u: goto label_341588;
        case 0x34158cu: goto label_34158c;
        case 0x341590u: goto label_341590;
        case 0x341594u: goto label_341594;
        case 0x341598u: goto label_341598;
        case 0x34159cu: goto label_34159c;
        case 0x3415a0u: goto label_3415a0;
        case 0x3415a4u: goto label_3415a4;
        case 0x3415a8u: goto label_3415a8;
        case 0x3415acu: goto label_3415ac;
        case 0x3415b0u: goto label_3415b0;
        case 0x3415b4u: goto label_3415b4;
        case 0x3415b8u: goto label_3415b8;
        case 0x3415bcu: goto label_3415bc;
        default: break;
    }

    ctx->pc = 0x3411f0u;

label_3411f0:
    // 0x3411f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3411f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3411f4:
    // 0x3411f4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3411f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_3411f8:
    // 0x3411f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3411f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3411fc:
    // 0x3411fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341200:
    // 0x341200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_341204:
    // 0x341204: 0x24c60130  addiu       $a2, $a2, 0x130
    ctx->pc = 0x341204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
label_341208:
    // 0x341208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34120c:
    // 0x34120c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_341210:
    // 0x341210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341214:
    // 0x341214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341218:
    // 0x341218: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x341218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34121c:
    // 0x34121c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34121cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341220:
    // 0x341220: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x341220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_341224:
    // 0x341224: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x341224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_341228:
    // 0x341228: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x341228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34122c:
    // 0x34122c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_341230:
    // 0x341230: 0x8c52a348  lw          $s2, -0x5CB8($v0)
    ctx->pc = 0x341230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_341234:
    // 0x341234: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x341234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_341238:
    // 0x341238: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x341238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
label_34123c:
    // 0x34123c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341240:
    // 0x341240: 0x80530000  lb          $s3, 0x0($v0)
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_341244:
    // 0x341244: 0xc043be4  jal         func_10EF90
label_341248:
    if (ctx->pc == 0x341248u) {
        ctx->pc = 0x341248u;
            // 0x341248: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34124Cu;
        goto label_34124c;
    }
    ctx->pc = 0x341244u;
    SET_GPR_U32(ctx, 31, 0x34124Cu);
    ctx->pc = 0x341248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341244u;
            // 0x341248: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34124Cu; }
        if (ctx->pc != 0x34124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34124Cu; }
        if (ctx->pc != 0x34124Cu) { return; }
    }
    ctx->pc = 0x34124Cu;
label_34124c:
    // 0x34124c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x34124cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_341250:
    // 0x341250: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x341250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_341254:
    // 0x341254: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x341254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_341258:
    // 0x341258: 0x24c63e80  addiu       $a2, $a2, 0x3E80
    ctx->pc = 0x341258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16000));
label_34125c:
    // 0x34125c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x34125cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_341260:
    // 0x341260: 0xc0aa5d8  jal         func_2A9760
label_341264:
    if (ctx->pc == 0x341264u) {
        ctx->pc = 0x341264u;
            // 0x341264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341268u;
        goto label_341268;
    }
    ctx->pc = 0x341260u;
    SET_GPR_U32(ctx, 31, 0x341268u);
    ctx->pc = 0x341264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341260u;
            // 0x341264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341268u; }
        if (ctx->pc != 0x341268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341268u; }
        if (ctx->pc != 0x341268u) { return; }
    }
    ctx->pc = 0x341268u;
label_341268:
    // 0x341268: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x341268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_34126c:
    // 0x34126c: 0x16230011  bne         $s1, $v1, . + 4 + (0x11 << 2)
label_341270:
    if (ctx->pc == 0x341270u) {
        ctx->pc = 0x341274u;
        goto label_341274;
    }
    ctx->pc = 0x34126Cu;
    {
        const bool branch_taken_0x34126c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x34126c) {
            ctx->pc = 0x3412B4u;
            goto label_3412b4;
        }
    }
    ctx->pc = 0x341274u;
label_341274:
    // 0x341274: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x341274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_341278:
    // 0x341278: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x341278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34127c:
    // 0x34127c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x34127cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341280:
    // 0x341280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x341280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_341284:
    // 0x341284: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x341284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_341288:
    // 0x341288: 0xc043be4  jal         func_10EF90
label_34128c:
    if (ctx->pc == 0x34128Cu) {
        ctx->pc = 0x34128Cu;
            // 0x34128c: 0x24c60140  addiu       $a2, $a2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
        ctx->pc = 0x341290u;
        goto label_341290;
    }
    ctx->pc = 0x341288u;
    SET_GPR_U32(ctx, 31, 0x341290u);
    ctx->pc = 0x34128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341288u;
            // 0x34128c: 0x24c60140  addiu       $a2, $a2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341290u; }
        if (ctx->pc != 0x341290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341290u; }
        if (ctx->pc != 0x341290u) { return; }
    }
    ctx->pc = 0x341290u;
label_341290:
    // 0x341290: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x341290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_341294:
    // 0x341294: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x341294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_341298:
    // 0x341298: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x341298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34129c:
    // 0x34129c: 0x24c63e88  addiu       $a2, $a2, 0x3E88
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16008));
label_3412a0:
    // 0x3412a0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x3412a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3412a4:
    // 0x3412a4: 0xc0aa5d8  jal         func_2A9760
label_3412a8:
    if (ctx->pc == 0x3412A8u) {
        ctx->pc = 0x3412A8u;
            // 0x3412a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3412ACu;
        goto label_3412ac;
    }
    ctx->pc = 0x3412A4u;
    SET_GPR_U32(ctx, 31, 0x3412ACu);
    ctx->pc = 0x3412A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3412A4u;
            // 0x3412a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3412ACu; }
        if (ctx->pc != 0x3412ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3412ACu; }
        if (ctx->pc != 0x3412ACu) { return; }
    }
    ctx->pc = 0x3412ACu;
label_3412ac:
    // 0x3412ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3412b0:
    if (ctx->pc == 0x3412B0u) {
        ctx->pc = 0x3412B0u;
            // 0x3412b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3412B4u;
        goto label_3412b4;
    }
    ctx->pc = 0x3412ACu;
    {
        const bool branch_taken_0x3412ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3412B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3412ACu;
            // 0x3412b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412ac) {
            ctx->pc = 0x3412C0u;
            goto label_3412c0;
        }
    }
    ctx->pc = 0x3412B4u;
label_3412b4:
    // 0x3412b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3412b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3412b8:
    // 0x3412b8: 0xac603e88  sw          $zero, 0x3E88($v1)
    ctx->pc = 0x3412b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16008), GPR_U32(ctx, 0));
label_3412bc:
    // 0x3412bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3412bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3412c0:
    // 0x3412c0: 0x52230009  beql        $s1, $v1, . + 4 + (0x9 << 2)
label_3412c4:
    if (ctx->pc == 0x3412C4u) {
        ctx->pc = 0x3412C4u;
            // 0x3412c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3412C8u;
        goto label_3412c8;
    }
    ctx->pc = 0x3412C0u;
    {
        const bool branch_taken_0x3412c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3412c0) {
            ctx->pc = 0x3412C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3412C0u;
            // 0x3412c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3412E8u;
            goto label_3412e8;
        }
    }
    ctx->pc = 0x3412C8u;
label_3412c8:
    // 0x3412c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3412cc:
    // 0x3412cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3412d0:
    // 0x3412d0: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3412d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3412d4:
    // 0x3412d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3412d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3412d8:
    // 0x3412d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3412d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3412dc:
    // 0x3412dc: 0xc0fd020  jal         func_3F4080
label_3412e0:
    if (ctx->pc == 0x3412E0u) {
        ctx->pc = 0x3412E0u;
            // 0x3412e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3412E4u;
        goto label_3412e4;
    }
    ctx->pc = 0x3412DCu;
    SET_GPR_U32(ctx, 31, 0x3412E4u);
    ctx->pc = 0x3412E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3412DCu;
            // 0x3412e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3412E4u; }
        if (ctx->pc != 0x3412E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3412E4u; }
        if (ctx->pc != 0x3412E4u) { return; }
    }
    ctx->pc = 0x3412E4u;
label_3412e4:
    // 0x3412e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3412e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3412e8:
    // 0x3412e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3412e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3412ec:
    // 0x3412ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3412ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3412f0:
    // 0x3412f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3412f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3412f4:
    // 0x3412f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3412f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3412f8:
    // 0x3412f8: 0x3e00008  jr          $ra
label_3412fc:
    if (ctx->pc == 0x3412FCu) {
        ctx->pc = 0x3412FCu;
            // 0x3412fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x341300u;
        goto label_341300;
    }
    ctx->pc = 0x3412F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3412FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3412F8u;
            // 0x3412fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341300u;
label_341300:
    // 0x341300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_341304:
    // 0x341304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341308:
    // 0x341308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34130c:
    // 0x34130c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341310:
    // 0x341310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341314:
    // 0x341314: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_341318:
    if (ctx->pc == 0x341318u) {
        ctx->pc = 0x341318u;
            // 0x341318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34131Cu;
        goto label_34131c;
    }
    ctx->pc = 0x341314u;
    {
        const bool branch_taken_0x341314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x341318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341314u;
            // 0x341318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341314) {
            ctx->pc = 0x341358u;
            goto label_341358;
        }
    }
    ctx->pc = 0x34131Cu;
label_34131c:
    // 0x34131c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341320:
    // 0x341320: 0x24425550  addiu       $v0, $v0, 0x5550
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
label_341324:
    // 0x341324: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_341328:
    if (ctx->pc == 0x341328u) {
        ctx->pc = 0x341328u;
            // 0x341328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x34132Cu;
        goto label_34132c;
    }
    ctx->pc = 0x341324u;
    {
        const bool branch_taken_0x341324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x341328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341324u;
            // 0x341328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341324) {
            ctx->pc = 0x341340u;
            goto label_341340;
        }
    }
    ctx->pc = 0x34132Cu;
label_34132c:
    // 0x34132c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341330:
    // 0x341330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x341330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341334:
    // 0x341334: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x341334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_341338:
    // 0x341338: 0xc057a68  jal         func_15E9A0
label_34133c:
    if (ctx->pc == 0x34133Cu) {
        ctx->pc = 0x34133Cu;
            // 0x34133c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x341340u;
        goto label_341340;
    }
    ctx->pc = 0x341338u;
    SET_GPR_U32(ctx, 31, 0x341340u);
    ctx->pc = 0x34133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341338u;
            // 0x34133c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341340u; }
        if (ctx->pc != 0x341340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341340u; }
        if (ctx->pc != 0x341340u) { return; }
    }
    ctx->pc = 0x341340u;
label_341340:
    // 0x341340: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x341340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_341344:
    // 0x341344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x341344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_341348:
    // 0x341348: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34134c:
    if (ctx->pc == 0x34134Cu) {
        ctx->pc = 0x34134Cu;
            // 0x34134c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341350u;
        goto label_341350;
    }
    ctx->pc = 0x341348u;
    {
        const bool branch_taken_0x341348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x341348) {
            ctx->pc = 0x34134Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341348u;
            // 0x34134c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34135Cu;
            goto label_34135c;
        }
    }
    ctx->pc = 0x341350u;
label_341350:
    // 0x341350: 0xc0400a8  jal         func_1002A0
label_341354:
    if (ctx->pc == 0x341354u) {
        ctx->pc = 0x341354u;
            // 0x341354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341358u;
        goto label_341358;
    }
    ctx->pc = 0x341350u;
    SET_GPR_U32(ctx, 31, 0x341358u);
    ctx->pc = 0x341354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341350u;
            // 0x341354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341358u; }
        if (ctx->pc != 0x341358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341358u; }
        if (ctx->pc != 0x341358u) { return; }
    }
    ctx->pc = 0x341358u;
label_341358:
    // 0x341358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x341358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34135c:
    // 0x34135c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_341360:
    // 0x341360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341364:
    // 0x341364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_341368:
    // 0x341368: 0x3e00008  jr          $ra
label_34136c:
    if (ctx->pc == 0x34136Cu) {
        ctx->pc = 0x34136Cu;
            // 0x34136c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x341370u;
        goto label_341370;
    }
    ctx->pc = 0x341368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341368u;
            // 0x34136c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341370u;
label_341370:
    // 0x341370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_341374:
    // 0x341374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341378:
    // 0x341378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34137c:
    // 0x34137c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341380:
    // 0x341380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341384:
    // 0x341384: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_341388:
    if (ctx->pc == 0x341388u) {
        ctx->pc = 0x341388u;
            // 0x341388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34138Cu;
        goto label_34138c;
    }
    ctx->pc = 0x341384u;
    {
        const bool branch_taken_0x341384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x341388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341384u;
            // 0x341388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341384) {
            ctx->pc = 0x3413F0u;
            goto label_3413f0;
        }
    }
    ctx->pc = 0x34138Cu;
label_34138c:
    // 0x34138c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341390:
    // 0x341390: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x341390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_341394:
    // 0x341394: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x341394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_341398:
    // 0x341398: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x341398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
label_34139c:
    // 0x34139c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34139cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3413a0:
    // 0x3413a0: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x3413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3413a4:
    // 0x3413a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3413a8:
    if (ctx->pc == 0x3413A8u) {
        ctx->pc = 0x3413A8u;
            // 0x3413a8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3413ACu;
        goto label_3413ac;
    }
    ctx->pc = 0x3413A4u;
    {
        const bool branch_taken_0x3413a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3413A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3413A4u;
            // 0x3413a8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413a4) {
            ctx->pc = 0x3413B8u;
            goto label_3413b8;
        }
    }
    ctx->pc = 0x3413ACu;
label_3413ac:
    // 0x3413ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3413acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3413b0:
    // 0x3413b0: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x3413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
label_3413b4:
    // 0x3413b4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3413b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3413b8:
    // 0x3413b8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3413bc:
    if (ctx->pc == 0x3413BCu) {
        ctx->pc = 0x3413BCu;
            // 0x3413bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3413C0u;
        goto label_3413c0;
    }
    ctx->pc = 0x3413B8u;
    {
        const bool branch_taken_0x3413b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3413b8) {
            ctx->pc = 0x3413BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3413B8u;
            // 0x3413bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3413DCu;
            goto label_3413dc;
        }
    }
    ctx->pc = 0x3413C0u;
label_3413c0:
    // 0x3413c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3413c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3413c4:
    // 0x3413c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3413c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3413c8:
    // 0x3413c8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3413c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3413cc:
    // 0x3413cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3413ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3413d0:
    // 0x3413d0: 0xc057a68  jal         func_15E9A0
label_3413d4:
    if (ctx->pc == 0x3413D4u) {
        ctx->pc = 0x3413D4u;
            // 0x3413d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3413D8u;
        goto label_3413d8;
    }
    ctx->pc = 0x3413D0u;
    SET_GPR_U32(ctx, 31, 0x3413D8u);
    ctx->pc = 0x3413D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3413D0u;
            // 0x3413d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3413D8u; }
        if (ctx->pc != 0x3413D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3413D8u; }
        if (ctx->pc != 0x3413D8u) { return; }
    }
    ctx->pc = 0x3413D8u;
label_3413d8:
    // 0x3413d8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3413d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3413dc:
    // 0x3413dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3413dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3413e0:
    // 0x3413e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3413e4:
    if (ctx->pc == 0x3413E4u) {
        ctx->pc = 0x3413E4u;
            // 0x3413e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3413E8u;
        goto label_3413e8;
    }
    ctx->pc = 0x3413E0u;
    {
        const bool branch_taken_0x3413e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3413e0) {
            ctx->pc = 0x3413E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3413E0u;
            // 0x3413e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3413F4u;
            goto label_3413f4;
        }
    }
    ctx->pc = 0x3413E8u;
label_3413e8:
    // 0x3413e8: 0xc0400a8  jal         func_1002A0
label_3413ec:
    if (ctx->pc == 0x3413ECu) {
        ctx->pc = 0x3413ECu;
            // 0x3413ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3413F0u;
        goto label_3413f0;
    }
    ctx->pc = 0x3413E8u;
    SET_GPR_U32(ctx, 31, 0x3413F0u);
    ctx->pc = 0x3413ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3413E8u;
            // 0x3413ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3413F0u; }
        if (ctx->pc != 0x3413F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3413F0u; }
        if (ctx->pc != 0x3413F0u) { return; }
    }
    ctx->pc = 0x3413F0u;
label_3413f0:
    // 0x3413f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3413f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3413f4:
    // 0x3413f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3413f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3413f8:
    // 0x3413f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3413f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3413fc:
    // 0x3413fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3413fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_341400:
    // 0x341400: 0x3e00008  jr          $ra
label_341404:
    if (ctx->pc == 0x341404u) {
        ctx->pc = 0x341404u;
            // 0x341404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x341408u;
        goto label_341408;
    }
    ctx->pc = 0x341400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341400u;
            // 0x341404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341408u;
label_341408:
    // 0x341408: 0x0  nop
    ctx->pc = 0x341408u;
    // NOP
label_34140c:
    // 0x34140c: 0x0  nop
    ctx->pc = 0x34140cu;
    // NOP
label_341410:
    // 0x341410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_341414:
    // 0x341414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341418:
    // 0x341418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34141c:
    // 0x34141c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341420:
    // 0x341420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341424:
    // 0x341424: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_341428:
    if (ctx->pc == 0x341428u) {
        ctx->pc = 0x341428u;
            // 0x341428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34142Cu;
        goto label_34142c;
    }
    ctx->pc = 0x341424u;
    {
        const bool branch_taken_0x341424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x341428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341424u;
            // 0x341428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341424) {
            ctx->pc = 0x3414A0u;
            goto label_3414a0;
        }
    }
    ctx->pc = 0x34142Cu;
label_34142c:
    // 0x34142c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_341430:
    // 0x341430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x341430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341434:
    // 0x341434: 0x246355d0  addiu       $v1, $v1, 0x55D0
    ctx->pc = 0x341434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21968));
label_341438:
    // 0x341438: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x341438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_34143c:
    // 0x34143c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34143cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_341440:
    // 0x341440: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x341440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_341444:
    // 0x341444: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x341444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_341448:
    // 0x341448: 0xc1109cc  jal         func_442730
label_34144c:
    if (ctx->pc == 0x34144Cu) {
        ctx->pc = 0x34144Cu;
            // 0x34144c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x341450u;
        goto label_341450;
    }
    ctx->pc = 0x341448u;
    SET_GPR_U32(ctx, 31, 0x341450u);
    ctx->pc = 0x34144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341448u;
            // 0x34144c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341450u; }
        if (ctx->pc != 0x341450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341450u; }
        if (ctx->pc != 0x341450u) { return; }
    }
    ctx->pc = 0x341450u;
label_341450:
    // 0x341450: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x341450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_341454:
    // 0x341454: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_341458:
    if (ctx->pc == 0x341458u) {
        ctx->pc = 0x341458u;
            // 0x341458: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x34145Cu;
        goto label_34145c;
    }
    ctx->pc = 0x341454u;
    {
        const bool branch_taken_0x341454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341454u;
            // 0x341458: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341454) {
            ctx->pc = 0x341468u;
            goto label_341468;
        }
    }
    ctx->pc = 0x34145Cu;
label_34145c:
    // 0x34145c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341460:
    // 0x341460: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x341460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
label_341464:
    // 0x341464: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x341464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_341468:
    // 0x341468: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_34146c:
    if (ctx->pc == 0x34146Cu) {
        ctx->pc = 0x34146Cu;
            // 0x34146c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x341470u;
        goto label_341470;
    }
    ctx->pc = 0x341468u;
    {
        const bool branch_taken_0x341468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x341468) {
            ctx->pc = 0x34146Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341468u;
            // 0x34146c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34148Cu;
            goto label_34148c;
        }
    }
    ctx->pc = 0x341470u;
label_341470:
    // 0x341470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x341470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341474:
    // 0x341474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x341474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341478:
    // 0x341478: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x341478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_34147c:
    // 0x34147c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341480:
    // 0x341480: 0xc057a68  jal         func_15E9A0
label_341484:
    if (ctx->pc == 0x341484u) {
        ctx->pc = 0x341484u;
            // 0x341484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x341488u;
        goto label_341488;
    }
    ctx->pc = 0x341480u;
    SET_GPR_U32(ctx, 31, 0x341488u);
    ctx->pc = 0x341484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341480u;
            // 0x341484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341488u; }
        if (ctx->pc != 0x341488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341488u; }
        if (ctx->pc != 0x341488u) { return; }
    }
    ctx->pc = 0x341488u;
label_341488:
    // 0x341488: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x341488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34148c:
    // 0x34148c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34148cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_341490:
    // 0x341490: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_341494:
    if (ctx->pc == 0x341494u) {
        ctx->pc = 0x341494u;
            // 0x341494: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341498u;
        goto label_341498;
    }
    ctx->pc = 0x341490u;
    {
        const bool branch_taken_0x341490 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x341490) {
            ctx->pc = 0x341494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341490u;
            // 0x341494: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3414A4u;
            goto label_3414a4;
        }
    }
    ctx->pc = 0x341498u;
label_341498:
    // 0x341498: 0xc0400a8  jal         func_1002A0
label_34149c:
    if (ctx->pc == 0x34149Cu) {
        ctx->pc = 0x34149Cu;
            // 0x34149c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3414A0u;
        goto label_3414a0;
    }
    ctx->pc = 0x341498u;
    SET_GPR_U32(ctx, 31, 0x3414A0u);
    ctx->pc = 0x34149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341498u;
            // 0x34149c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3414A0u; }
        if (ctx->pc != 0x3414A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3414A0u; }
        if (ctx->pc != 0x3414A0u) { return; }
    }
    ctx->pc = 0x3414A0u;
label_3414a0:
    // 0x3414a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3414a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3414a4:
    // 0x3414a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3414a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3414a8:
    // 0x3414a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3414a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3414ac:
    // 0x3414ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3414acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3414b0:
    // 0x3414b0: 0x3e00008  jr          $ra
label_3414b4:
    if (ctx->pc == 0x3414B4u) {
        ctx->pc = 0x3414B4u;
            // 0x3414b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3414B8u;
        goto label_3414b8;
    }
    ctx->pc = 0x3414B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3414B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3414B0u;
            // 0x3414b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3414B8u;
label_3414b8:
    // 0x3414b8: 0x0  nop
    ctx->pc = 0x3414b8u;
    // NOP
label_3414bc:
    // 0x3414bc: 0x0  nop
    ctx->pc = 0x3414bcu;
    // NOP
label_3414c0:
    // 0x3414c0: 0x80d0504  j           func_341410
label_3414c4:
    if (ctx->pc == 0x3414C4u) {
        ctx->pc = 0x3414C4u;
            // 0x3414c4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->pc = 0x3414C8u;
        goto label_3414c8;
    }
    ctx->pc = 0x3414C0u;
    ctx->pc = 0x3414C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3414C0u;
            // 0x3414c4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341410u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_341410;
    ctx->pc = 0x3414C8u;
label_3414c8:
    // 0x3414c8: 0x0  nop
    ctx->pc = 0x3414c8u;
    // NOP
label_3414cc:
    // 0x3414cc: 0x0  nop
    ctx->pc = 0x3414ccu;
    // NOP
label_3414d0:
    // 0x3414d0: 0x80d04dc  j           func_341370
label_3414d4:
    if (ctx->pc == 0x3414D4u) {
        ctx->pc = 0x3414D4u;
            // 0x3414d4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->pc = 0x3414D8u;
        goto label_3414d8;
    }
    ctx->pc = 0x3414D0u;
    ctx->pc = 0x3414D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3414D0u;
            // 0x3414d4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341370u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_341370;
    ctx->pc = 0x3414D8u;
label_3414d8:
    // 0x3414d8: 0x0  nop
    ctx->pc = 0x3414d8u;
    // NOP
label_3414dc:
    // 0x3414dc: 0x0  nop
    ctx->pc = 0x3414dcu;
    // NOP
label_3414e0:
    // 0x3414e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3414e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3414e4:
    // 0x3414e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3414e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3414e8:
    // 0x3414e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3414e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3414ec:
    // 0x3414ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3414ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3414f0:
    // 0x3414f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3414f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3414f4:
    // 0x3414f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3414f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3414f8:
    // 0x3414f8: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_3414fc:
    if (ctx->pc == 0x3414FCu) {
        ctx->pc = 0x3414FCu;
            // 0x3414fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341500u;
        goto label_341500;
    }
    ctx->pc = 0x3414F8u;
    {
        const bool branch_taken_0x3414f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3414F8u;
            // 0x3414fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414f8) {
            ctx->pc = 0x3415A0u;
            goto label_3415a0;
        }
    }
    ctx->pc = 0x341500u;
label_341500:
    // 0x341500: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x341500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341504:
    // 0x341504: 0x24425610  addiu       $v0, $v0, 0x5610
    ctx->pc = 0x341504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22032));
label_341508:
    // 0x341508: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_34150c:
    if (ctx->pc == 0x34150Cu) {
        ctx->pc = 0x34150Cu;
            // 0x34150c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x341510u;
        goto label_341510;
    }
    ctx->pc = 0x341508u;
    {
        const bool branch_taken_0x341508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341508u;
            // 0x34150c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341508) {
            ctx->pc = 0x341588u;
            goto label_341588;
        }
    }
    ctx->pc = 0x341510u;
label_341510:
    // 0x341510: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x341510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_341514:
    // 0x341514: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x341514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_341518:
    // 0x341518: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x341518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_34151c:
    // 0x34151c: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x34151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
label_341520:
    // 0x341520: 0xc0ad6c4  jal         func_2B5B10
label_341524:
    if (ctx->pc == 0x341524u) {
        ctx->pc = 0x341524u;
            // 0x341524: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x341528u;
        goto label_341528;
    }
    ctx->pc = 0x341520u;
    SET_GPR_U32(ctx, 31, 0x341528u);
    ctx->pc = 0x341524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341520u;
            // 0x341524: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341528u; }
        if (ctx->pc != 0x341528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341528u; }
        if (ctx->pc != 0x341528u) { return; }
    }
    ctx->pc = 0x341528u;
label_341528:
    // 0x341528: 0xc0c05c4  jal         func_301710
label_34152c:
    if (ctx->pc == 0x34152Cu) {
        ctx->pc = 0x341530u;
        goto label_341530;
    }
    ctx->pc = 0x341528u;
    SET_GPR_U32(ctx, 31, 0x341530u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341530u; }
        if (ctx->pc != 0x341530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341530u; }
        if (ctx->pc != 0x341530u) { return; }
    }
    ctx->pc = 0x341530u;
label_341530:
    // 0x341530: 0xc077318  jal         func_1DCC60
label_341534:
    if (ctx->pc == 0x341534u) {
        ctx->pc = 0x341534u;
            // 0x341534: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341538u;
        goto label_341538;
    }
    ctx->pc = 0x341530u;
    SET_GPR_U32(ctx, 31, 0x341538u);
    ctx->pc = 0x341534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341530u;
            // 0x341534: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341538u; }
        if (ctx->pc != 0x341538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341538u; }
        if (ctx->pc != 0x341538u) { return; }
    }
    ctx->pc = 0x341538u;
label_341538:
    // 0x341538: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x341538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_34153c:
    // 0x34153c: 0xc0c58f4  jal         func_3163D0
label_341540:
    if (ctx->pc == 0x341540u) {
        ctx->pc = 0x341540u;
            // 0x341540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341544u;
        goto label_341544;
    }
    ctx->pc = 0x34153Cu;
    SET_GPR_U32(ctx, 31, 0x341544u);
    ctx->pc = 0x341540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34153Cu;
            // 0x341540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341544u; }
        if (ctx->pc != 0x341544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341544u; }
        if (ctx->pc != 0x341544u) { return; }
    }
    ctx->pc = 0x341544u;
label_341544:
    // 0x341544: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x341544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_341548:
    // 0x341548: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34154c:
    // 0x34154c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341550:
    // 0x341550: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_341554:
    if (ctx->pc == 0x341554u) {
        ctx->pc = 0x341554u;
            // 0x341554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341558u;
        goto label_341558;
    }
    ctx->pc = 0x341550u;
    {
        const bool branch_taken_0x341550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341550) {
            ctx->pc = 0x341554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341550u;
            // 0x341554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341580u;
            goto label_341580;
        }
    }
    ctx->pc = 0x341558u;
label_341558:
    // 0x341558: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x341558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_34155c:
    // 0x34155c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_341560:
    if (ctx->pc == 0x341560u) {
        ctx->pc = 0x341564u;
        goto label_341564;
    }
    ctx->pc = 0x34155Cu;
    {
        const bool branch_taken_0x34155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34155c) {
            ctx->pc = 0x34157Cu;
            goto label_34157c;
        }
    }
    ctx->pc = 0x341564u;
label_341564:
    // 0x341564: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x341564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_341568:
    // 0x341568: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x341568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_34156c:
    // 0x34156c: 0x320f809  jalr        $t9
label_341570:
    if (ctx->pc == 0x341570u) {
        ctx->pc = 0x341570u;
            // 0x341570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341574u;
        goto label_341574;
    }
    ctx->pc = 0x34156Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341574u);
        ctx->pc = 0x341570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34156Cu;
            // 0x341570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341574u; }
            if (ctx->pc != 0x341574u) { return; }
        }
        }
    }
    ctx->pc = 0x341574u;
label_341574:
    // 0x341574: 0xc074708  jal         func_1D1C20
label_341578:
    if (ctx->pc == 0x341578u) {
        ctx->pc = 0x341578u;
            // 0x341578: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x34157Cu;
        goto label_34157c;
    }
    ctx->pc = 0x341574u;
    SET_GPR_U32(ctx, 31, 0x34157Cu);
    ctx->pc = 0x341578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341574u;
            // 0x341578: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34157Cu; }
        if (ctx->pc != 0x34157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34157Cu; }
        if (ctx->pc != 0x34157Cu) { return; }
    }
    ctx->pc = 0x34157Cu;
label_34157c:
    // 0x34157c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341580:
    // 0x341580: 0xc075bf8  jal         func_1D6FE0
label_341584:
    if (ctx->pc == 0x341584u) {
        ctx->pc = 0x341584u;
            // 0x341584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341588u;
        goto label_341588;
    }
    ctx->pc = 0x341580u;
    SET_GPR_U32(ctx, 31, 0x341588u);
    ctx->pc = 0x341584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341580u;
            // 0x341584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341588u; }
        if (ctx->pc != 0x341588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341588u; }
        if (ctx->pc != 0x341588u) { return; }
    }
    ctx->pc = 0x341588u;
label_341588:
    // 0x341588: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x341588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_34158c:
    // 0x34158c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34158cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_341590:
    // 0x341590: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_341594:
    if (ctx->pc == 0x341594u) {
        ctx->pc = 0x341594u;
            // 0x341594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341598u;
        goto label_341598;
    }
    ctx->pc = 0x341590u;
    {
        const bool branch_taken_0x341590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x341590) {
            ctx->pc = 0x341594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341590u;
            // 0x341594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3415A4u;
            goto label_3415a4;
        }
    }
    ctx->pc = 0x341598u;
label_341598:
    // 0x341598: 0xc0400a8  jal         func_1002A0
label_34159c:
    if (ctx->pc == 0x34159Cu) {
        ctx->pc = 0x34159Cu;
            // 0x34159c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3415A0u;
        goto label_3415a0;
    }
    ctx->pc = 0x341598u;
    SET_GPR_U32(ctx, 31, 0x3415A0u);
    ctx->pc = 0x34159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341598u;
            // 0x34159c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3415A0u; }
        if (ctx->pc != 0x3415A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3415A0u; }
        if (ctx->pc != 0x3415A0u) { return; }
    }
    ctx->pc = 0x3415A0u;
label_3415a0:
    // 0x3415a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3415a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3415a4:
    // 0x3415a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3415a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3415a8:
    // 0x3415a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3415a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3415ac:
    // 0x3415ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3415acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3415b0:
    // 0x3415b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3415b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3415b4:
    // 0x3415b4: 0x3e00008  jr          $ra
label_3415b8:
    if (ctx->pc == 0x3415B8u) {
        ctx->pc = 0x3415B8u;
            // 0x3415b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3415BCu;
        goto label_3415bc;
    }
    ctx->pc = 0x3415B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3415B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3415B4u;
            // 0x3415b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3415BCu;
label_3415bc:
    // 0x3415bc: 0x0  nop
    ctx->pc = 0x3415bcu;
    // NOP
}
