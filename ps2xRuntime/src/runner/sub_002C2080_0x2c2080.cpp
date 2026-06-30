#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2080
// Address: 0x2c2080 - 0x2c2320
void sub_002C2080_0x2c2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2080_0x2c2080");
#endif

    switch (ctx->pc) {
        case 0x2c2080u: goto label_2c2080;
        case 0x2c2084u: goto label_2c2084;
        case 0x2c2088u: goto label_2c2088;
        case 0x2c208cu: goto label_2c208c;
        case 0x2c2090u: goto label_2c2090;
        case 0x2c2094u: goto label_2c2094;
        case 0x2c2098u: goto label_2c2098;
        case 0x2c209cu: goto label_2c209c;
        case 0x2c20a0u: goto label_2c20a0;
        case 0x2c20a4u: goto label_2c20a4;
        case 0x2c20a8u: goto label_2c20a8;
        case 0x2c20acu: goto label_2c20ac;
        case 0x2c20b0u: goto label_2c20b0;
        case 0x2c20b4u: goto label_2c20b4;
        case 0x2c20b8u: goto label_2c20b8;
        case 0x2c20bcu: goto label_2c20bc;
        case 0x2c20c0u: goto label_2c20c0;
        case 0x2c20c4u: goto label_2c20c4;
        case 0x2c20c8u: goto label_2c20c8;
        case 0x2c20ccu: goto label_2c20cc;
        case 0x2c20d0u: goto label_2c20d0;
        case 0x2c20d4u: goto label_2c20d4;
        case 0x2c20d8u: goto label_2c20d8;
        case 0x2c20dcu: goto label_2c20dc;
        case 0x2c20e0u: goto label_2c20e0;
        case 0x2c20e4u: goto label_2c20e4;
        case 0x2c20e8u: goto label_2c20e8;
        case 0x2c20ecu: goto label_2c20ec;
        case 0x2c20f0u: goto label_2c20f0;
        case 0x2c20f4u: goto label_2c20f4;
        case 0x2c20f8u: goto label_2c20f8;
        case 0x2c20fcu: goto label_2c20fc;
        case 0x2c2100u: goto label_2c2100;
        case 0x2c2104u: goto label_2c2104;
        case 0x2c2108u: goto label_2c2108;
        case 0x2c210cu: goto label_2c210c;
        case 0x2c2110u: goto label_2c2110;
        case 0x2c2114u: goto label_2c2114;
        case 0x2c2118u: goto label_2c2118;
        case 0x2c211cu: goto label_2c211c;
        case 0x2c2120u: goto label_2c2120;
        case 0x2c2124u: goto label_2c2124;
        case 0x2c2128u: goto label_2c2128;
        case 0x2c212cu: goto label_2c212c;
        case 0x2c2130u: goto label_2c2130;
        case 0x2c2134u: goto label_2c2134;
        case 0x2c2138u: goto label_2c2138;
        case 0x2c213cu: goto label_2c213c;
        case 0x2c2140u: goto label_2c2140;
        case 0x2c2144u: goto label_2c2144;
        case 0x2c2148u: goto label_2c2148;
        case 0x2c214cu: goto label_2c214c;
        case 0x2c2150u: goto label_2c2150;
        case 0x2c2154u: goto label_2c2154;
        case 0x2c2158u: goto label_2c2158;
        case 0x2c215cu: goto label_2c215c;
        case 0x2c2160u: goto label_2c2160;
        case 0x2c2164u: goto label_2c2164;
        case 0x2c2168u: goto label_2c2168;
        case 0x2c216cu: goto label_2c216c;
        case 0x2c2170u: goto label_2c2170;
        case 0x2c2174u: goto label_2c2174;
        case 0x2c2178u: goto label_2c2178;
        case 0x2c217cu: goto label_2c217c;
        case 0x2c2180u: goto label_2c2180;
        case 0x2c2184u: goto label_2c2184;
        case 0x2c2188u: goto label_2c2188;
        case 0x2c218cu: goto label_2c218c;
        case 0x2c2190u: goto label_2c2190;
        case 0x2c2194u: goto label_2c2194;
        case 0x2c2198u: goto label_2c2198;
        case 0x2c219cu: goto label_2c219c;
        case 0x2c21a0u: goto label_2c21a0;
        case 0x2c21a4u: goto label_2c21a4;
        case 0x2c21a8u: goto label_2c21a8;
        case 0x2c21acu: goto label_2c21ac;
        case 0x2c21b0u: goto label_2c21b0;
        case 0x2c21b4u: goto label_2c21b4;
        case 0x2c21b8u: goto label_2c21b8;
        case 0x2c21bcu: goto label_2c21bc;
        case 0x2c21c0u: goto label_2c21c0;
        case 0x2c21c4u: goto label_2c21c4;
        case 0x2c21c8u: goto label_2c21c8;
        case 0x2c21ccu: goto label_2c21cc;
        case 0x2c21d0u: goto label_2c21d0;
        case 0x2c21d4u: goto label_2c21d4;
        case 0x2c21d8u: goto label_2c21d8;
        case 0x2c21dcu: goto label_2c21dc;
        case 0x2c21e0u: goto label_2c21e0;
        case 0x2c21e4u: goto label_2c21e4;
        case 0x2c21e8u: goto label_2c21e8;
        case 0x2c21ecu: goto label_2c21ec;
        case 0x2c21f0u: goto label_2c21f0;
        case 0x2c21f4u: goto label_2c21f4;
        case 0x2c21f8u: goto label_2c21f8;
        case 0x2c21fcu: goto label_2c21fc;
        case 0x2c2200u: goto label_2c2200;
        case 0x2c2204u: goto label_2c2204;
        case 0x2c2208u: goto label_2c2208;
        case 0x2c220cu: goto label_2c220c;
        case 0x2c2210u: goto label_2c2210;
        case 0x2c2214u: goto label_2c2214;
        case 0x2c2218u: goto label_2c2218;
        case 0x2c221cu: goto label_2c221c;
        case 0x2c2220u: goto label_2c2220;
        case 0x2c2224u: goto label_2c2224;
        case 0x2c2228u: goto label_2c2228;
        case 0x2c222cu: goto label_2c222c;
        case 0x2c2230u: goto label_2c2230;
        case 0x2c2234u: goto label_2c2234;
        case 0x2c2238u: goto label_2c2238;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c2240u: goto label_2c2240;
        case 0x2c2244u: goto label_2c2244;
        case 0x2c2248u: goto label_2c2248;
        case 0x2c224cu: goto label_2c224c;
        case 0x2c2250u: goto label_2c2250;
        case 0x2c2254u: goto label_2c2254;
        case 0x2c2258u: goto label_2c2258;
        case 0x2c225cu: goto label_2c225c;
        case 0x2c2260u: goto label_2c2260;
        case 0x2c2264u: goto label_2c2264;
        case 0x2c2268u: goto label_2c2268;
        case 0x2c226cu: goto label_2c226c;
        case 0x2c2270u: goto label_2c2270;
        case 0x2c2274u: goto label_2c2274;
        case 0x2c2278u: goto label_2c2278;
        case 0x2c227cu: goto label_2c227c;
        case 0x2c2280u: goto label_2c2280;
        case 0x2c2284u: goto label_2c2284;
        case 0x2c2288u: goto label_2c2288;
        case 0x2c228cu: goto label_2c228c;
        case 0x2c2290u: goto label_2c2290;
        case 0x2c2294u: goto label_2c2294;
        case 0x2c2298u: goto label_2c2298;
        case 0x2c229cu: goto label_2c229c;
        case 0x2c22a0u: goto label_2c22a0;
        case 0x2c22a4u: goto label_2c22a4;
        case 0x2c22a8u: goto label_2c22a8;
        case 0x2c22acu: goto label_2c22ac;
        case 0x2c22b0u: goto label_2c22b0;
        case 0x2c22b4u: goto label_2c22b4;
        case 0x2c22b8u: goto label_2c22b8;
        case 0x2c22bcu: goto label_2c22bc;
        case 0x2c22c0u: goto label_2c22c0;
        case 0x2c22c4u: goto label_2c22c4;
        case 0x2c22c8u: goto label_2c22c8;
        case 0x2c22ccu: goto label_2c22cc;
        case 0x2c22d0u: goto label_2c22d0;
        case 0x2c22d4u: goto label_2c22d4;
        case 0x2c22d8u: goto label_2c22d8;
        case 0x2c22dcu: goto label_2c22dc;
        case 0x2c22e0u: goto label_2c22e0;
        case 0x2c22e4u: goto label_2c22e4;
        case 0x2c22e8u: goto label_2c22e8;
        case 0x2c22ecu: goto label_2c22ec;
        case 0x2c22f0u: goto label_2c22f0;
        case 0x2c22f4u: goto label_2c22f4;
        case 0x2c22f8u: goto label_2c22f8;
        case 0x2c22fcu: goto label_2c22fc;
        case 0x2c2300u: goto label_2c2300;
        case 0x2c2304u: goto label_2c2304;
        case 0x2c2308u: goto label_2c2308;
        case 0x2c230cu: goto label_2c230c;
        case 0x2c2310u: goto label_2c2310;
        case 0x2c2314u: goto label_2c2314;
        case 0x2c2318u: goto label_2c2318;
        case 0x2c231cu: goto label_2c231c;
        default: break;
    }

    ctx->pc = 0x2c2080u;

label_2c2080:
    // 0x2c2080: 0x80788fc  j           func_1E23F0
label_2c2084:
    if (ctx->pc == 0x2C2084u) {
        ctx->pc = 0x2C2088u;
        goto label_2c2088;
    }
    ctx->pc = 0x2C2080u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C2088u;
label_2c2088:
    // 0x2c2088: 0x0  nop
    ctx->pc = 0x2c2088u;
    // NOP
label_2c208c:
    // 0x2c208c: 0x0  nop
    ctx->pc = 0x2c208cu;
    // NOP
label_2c2090:
    // 0x2c2090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2094:
    // 0x2c2094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2098:
    // 0x2c2098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c209c:
    // 0x2c209c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c20a0:
    // 0x2c20a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c20a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c20a4:
    // 0x2c20a4: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2c20a8:
    if (ctx->pc == 0x2C20A8u) {
        ctx->pc = 0x2C20A8u;
            // 0x2c20a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C20ACu;
        goto label_2c20ac;
    }
    ctx->pc = 0x2C20A4u;
    {
        const bool branch_taken_0x2c20a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C20A4u;
            // 0x2c20a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20a4) {
            ctx->pc = 0x2C2164u;
            goto label_2c2164;
        }
    }
    ctx->pc = 0x2C20ACu;
label_2c20ac:
    // 0x2c20ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c20b0:
    // 0x2c20b0: 0x24421570  addiu       $v0, $v0, 0x1570
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5488));
label_2c20b4:
    // 0x2c20b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c20b8:
    // 0x2c20b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c20b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c20bc:
    // 0x2c20bc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c20bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c20c0:
    // 0x2c20c0: 0x320f809  jalr        $t9
label_2c20c4:
    if (ctx->pc == 0x2C20C4u) {
        ctx->pc = 0x2C20C8u;
        goto label_2c20c8;
    }
    ctx->pc = 0x2C20C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C20C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C20C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C20C8u; }
            if (ctx->pc != 0x2C20C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C20C8u;
label_2c20c8:
    // 0x2c20c8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c20cc:
    // 0x2c20cc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_2c20d0:
    if (ctx->pc == 0x2C20D0u) {
        ctx->pc = 0x2C20D4u;
        goto label_2c20d4;
    }
    ctx->pc = 0x2C20CCu;
    {
        const bool branch_taken_0x2c20cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20cc) {
            ctx->pc = 0x2C2128u;
            goto label_2c2128;
        }
    }
    ctx->pc = 0x2C20D4u;
label_2c20d4:
    // 0x2c20d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c20d8:
    // 0x2c20d8: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
label_2c20dc:
    // 0x2c20dc: 0xc0d37dc  jal         func_34DF70
label_2c20e0:
    if (ctx->pc == 0x2C20E0u) {
        ctx->pc = 0x2C20E0u;
            // 0x2c20e0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C20E4u;
        goto label_2c20e4;
    }
    ctx->pc = 0x2C20DCu;
    SET_GPR_U32(ctx, 31, 0x2C20E4u);
    ctx->pc = 0x2C20E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C20DCu;
            // 0x2c20e0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20E4u; }
        if (ctx->pc != 0x2C20E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20E4u; }
        if (ctx->pc != 0x2C20E4u) { return; }
    }
    ctx->pc = 0x2C20E4u;
label_2c20e4:
    // 0x2c20e4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2c20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c20e8:
    // 0x2c20e8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c20ec:
    if (ctx->pc == 0x2C20ECu) {
        ctx->pc = 0x2C20F0u;
        goto label_2c20f0;
    }
    ctx->pc = 0x2C20E8u;
    {
        const bool branch_taken_0x2c20e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20e8) {
            ctx->pc = 0x2C2128u;
            goto label_2c2128;
        }
    }
    ctx->pc = 0x2C20F0u;
label_2c20f0:
    // 0x2c20f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c20f4:
    // 0x2c20f4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c20f8:
    // 0x2c20f8: 0xc0d37dc  jal         func_34DF70
label_2c20fc:
    if (ctx->pc == 0x2C20FCu) {
        ctx->pc = 0x2C20FCu;
            // 0x2c20fc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2100u;
        goto label_2c2100;
    }
    ctx->pc = 0x2C20F8u;
    SET_GPR_U32(ctx, 31, 0x2C2100u);
    ctx->pc = 0x2C20FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C20F8u;
            // 0x2c20fc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2100u; }
        if (ctx->pc != 0x2C2100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2100u; }
        if (ctx->pc != 0x2C2100u) { return; }
    }
    ctx->pc = 0x2C2100u;
label_2c2100:
    // 0x2c2100: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c2104:
    // 0x2c2104: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c2108:
    if (ctx->pc == 0x2C2108u) {
        ctx->pc = 0x2C210Cu;
        goto label_2c210c;
    }
    ctx->pc = 0x2C2104u;
    {
        const bool branch_taken_0x2c2104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2104) {
            ctx->pc = 0x2C2128u;
            goto label_2c2128;
        }
    }
    ctx->pc = 0x2C210Cu;
label_2c210c:
    // 0x2c210c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2110:
    // 0x2c2110: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c2114:
    // 0x2c2114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c2118:
    if (ctx->pc == 0x2C2118u) {
        ctx->pc = 0x2C2118u;
            // 0x2c2118: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C211Cu;
        goto label_2c211c;
    }
    ctx->pc = 0x2C2114u;
    {
        const bool branch_taken_0x2c2114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2114u;
            // 0x2c2118: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2114) {
            ctx->pc = 0x2C2128u;
            goto label_2c2128;
        }
    }
    ctx->pc = 0x2C211Cu;
label_2c211c:
    // 0x2c211c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2120:
    // 0x2c2120: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c2124:
    // 0x2c2124: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2c2124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2c2128:
    // 0x2c2128: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c212c:
    if (ctx->pc == 0x2C212Cu) {
        ctx->pc = 0x2C212Cu;
            // 0x2c212c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C2130u;
        goto label_2c2130;
    }
    ctx->pc = 0x2C2128u;
    {
        const bool branch_taken_0x2c2128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2128) {
            ctx->pc = 0x2C212Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2128u;
            // 0x2c212c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2150u;
            goto label_2c2150;
        }
    }
    ctx->pc = 0x2C2130u;
label_2c2130:
    // 0x2c2130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2134:
    // 0x2c2134: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c2134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c2138:
    // 0x2c2138: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c213c:
    if (ctx->pc == 0x2C213Cu) {
        ctx->pc = 0x2C213Cu;
            // 0x2c213c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2140u;
        goto label_2c2140;
    }
    ctx->pc = 0x2C2138u;
    {
        const bool branch_taken_0x2c2138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2138u;
            // 0x2c213c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2138) {
            ctx->pc = 0x2C214Cu;
            goto label_2c214c;
        }
    }
    ctx->pc = 0x2C2140u;
label_2c2140:
    // 0x2c2140: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2144:
    // 0x2c2144: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c2148:
    // 0x2c2148: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c2148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c214c:
    // 0x2c214c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c2150:
    // 0x2c2150: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c2154:
    // 0x2c2154: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c2158:
    if (ctx->pc == 0x2C2158u) {
        ctx->pc = 0x2C2158u;
            // 0x2c2158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C215Cu;
        goto label_2c215c;
    }
    ctx->pc = 0x2C2154u;
    {
        const bool branch_taken_0x2c2154 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2154) {
            ctx->pc = 0x2C2158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2154u;
            // 0x2c2158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2168u;
            goto label_2c2168;
        }
    }
    ctx->pc = 0x2C215Cu;
label_2c215c:
    // 0x2c215c: 0xc0400a8  jal         func_1002A0
label_2c2160:
    if (ctx->pc == 0x2C2160u) {
        ctx->pc = 0x2C2160u;
            // 0x2c2160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2164u;
        goto label_2c2164;
    }
    ctx->pc = 0x2C215Cu;
    SET_GPR_U32(ctx, 31, 0x2C2164u);
    ctx->pc = 0x2C2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C215Cu;
            // 0x2c2160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2164u; }
        if (ctx->pc != 0x2C2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2164u; }
        if (ctx->pc != 0x2C2164u) { return; }
    }
    ctx->pc = 0x2C2164u;
label_2c2164:
    // 0x2c2164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2168:
    // 0x2c2168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c216c:
    // 0x2c216c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c216cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2170:
    // 0x2c2170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2174:
    // 0x2c2174: 0x3e00008  jr          $ra
label_2c2178:
    if (ctx->pc == 0x2C2178u) {
        ctx->pc = 0x2C2178u;
            // 0x2c2178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C217Cu;
        goto label_2c217c;
    }
    ctx->pc = 0x2C2174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2174u;
            // 0x2c2178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C217Cu;
label_2c217c:
    // 0x2c217c: 0x0  nop
    ctx->pc = 0x2c217cu;
    // NOP
label_2c2180:
    // 0x2c2180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c2184:
    // 0x2c2184: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2188:
    // 0x2c2188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c218c:
    // 0x2c218c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c218cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c2190:
    // 0x2c2190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2194:
    // 0x2c2194: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c2198:
    // 0x2c2198: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c219c:
    // 0x2c219c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c21a0:
    // 0x2c21a0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2c21a4:
    // 0x2c21a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c21a8:
    // 0x2c21a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c21ac:
    // 0x2c21ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c21b0:
    // 0x2c21b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2c21b4:
    // 0x2c21b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c21b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c21b8:
    // 0x2c21b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2c21bc:
    // 0x2c21bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c21bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c21c0:
    // 0x2c21c0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c21c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2c21c4:
    // 0x2c21c4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c21c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2c21c8:
    // 0x2c21c8: 0xc04cbd8  jal         func_132F60
label_2c21cc:
    if (ctx->pc == 0x2C21CCu) {
        ctx->pc = 0x2C21CCu;
            // 0x2c21cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2C21D0u;
        goto label_2c21d0;
    }
    ctx->pc = 0x2C21C8u;
    SET_GPR_U32(ctx, 31, 0x2C21D0u);
    ctx->pc = 0x2C21CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C21C8u;
            // 0x2c21cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C21D0u; }
        if (ctx->pc != 0x2C21D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C21D0u; }
        if (ctx->pc != 0x2C21D0u) { return; }
    }
    ctx->pc = 0x2C21D0u;
label_2c21d0:
    // 0x2c21d0: 0xc04c968  jal         func_1325A0
label_2c21d4:
    if (ctx->pc == 0x2C21D4u) {
        ctx->pc = 0x2C21D4u;
            // 0x2c21d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2C21D8u;
        goto label_2c21d8;
    }
    ctx->pc = 0x2C21D0u;
    SET_GPR_U32(ctx, 31, 0x2C21D8u);
    ctx->pc = 0x2C21D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C21D0u;
            // 0x2c21d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C21D8u; }
        if (ctx->pc != 0x2C21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C21D8u; }
        if (ctx->pc != 0x2C21D8u) { return; }
    }
    ctx->pc = 0x2C21D8u;
label_2c21d8:
    // 0x2c21d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c21dc:
    // 0x2c21dc: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2c21dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_2c21e0:
    // 0x2c21e0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2c21e4:
    // 0x2c21e4: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2c21e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_2c21e8:
    // 0x2c21e8: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2c21ec:
    // 0x2c21ec: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c21ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2c21f0:
    // 0x2c21f0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2c21f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2c21f4:
    // 0x2c21f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2c21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2c21f8:
    // 0x2c21f8: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x2c21f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2c21fc:
    // 0x2c21fc: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x2c21fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_2c2200:
    // 0x2c2200: 0x25291570  addiu       $t1, $t1, 0x1570
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5488));
label_2c2204:
    // 0x2c2204: 0x2508cfe0  addiu       $t0, $t0, -0x3020
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954976));
label_2c2208:
    // 0x2c2208: 0x24e724a0  addiu       $a3, $a3, 0x24A0
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9376));
label_2c220c:
    // 0x2c220c: 0x24c62460  addiu       $a2, $a2, 0x2460
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9312));
label_2c2210:
    // 0x2c2210: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2c2210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2c2214:
    // 0x2c2214: 0x24a55240  addiu       $a1, $a1, 0x5240
    ctx->pc = 0x2c2214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
label_2c2218:
    // 0x2c2218: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x2c2218u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2c221c:
    // 0x2c221c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x2c221cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_2c2220:
    // 0x2c2220: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c2220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2c2224:
    // 0x2c2224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2228:
    // 0x2c2228: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x2c2228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_2c222c:
    // 0x2c222c: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2c222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_2c2230:
    // 0x2c2230: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x2c2230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
label_2c2234:
    // 0x2c2234: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x2c2234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
label_2c2238:
    // 0x2c2238: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x2c2238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
label_2c223c:
    // 0x2c223c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2c223cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2c2240:
    // 0x2c2240: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2c2240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_2c2244:
    // 0x2c2244: 0xae100058  sw          $s0, 0x58($s0)
    ctx->pc = 0x2c2244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 16));
label_2c2248:
    // 0x2c2248: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2c2248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_2c224c:
    // 0x2c224c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c224cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2c2250:
    // 0x2c2250: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2c2250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_2c2254:
    // 0x2c2254: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2c2254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2c2258:
    // 0x2c2258: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2c2258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2c225c:
    // 0x2c225c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2c225cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2c2260:
    // 0x2c2260: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2c2260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_2c2264:
    // 0x2c2264: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2c2264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2c2268:
    // 0x2c2268: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c2268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c226c:
    // 0x2c226c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2c226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2c2270:
    // 0x2c2270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2274:
    // 0x2c2274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2278:
    // 0x2c2278: 0x3e00008  jr          $ra
label_2c227c:
    if (ctx->pc == 0x2C227Cu) {
        ctx->pc = 0x2C227Cu;
            // 0x2c227c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C2280u;
        goto label_2c2280;
    }
    ctx->pc = 0x2C2278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2278u;
            // 0x2c227c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2280u;
label_2c2280:
    // 0x2c2280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2284:
    // 0x2c2284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2288:
    // 0x2c2288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c228c:
    // 0x2c228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2290:
    // 0x2c2290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2294:
    // 0x2c2294: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_2c2298:
    if (ctx->pc == 0x2C2298u) {
        ctx->pc = 0x2C2298u;
            // 0x2c2298: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C229Cu;
        goto label_2c229c;
    }
    ctx->pc = 0x2C2294u;
    {
        const bool branch_taken_0x2c2294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2294u;
            // 0x2c2298: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2294) {
            ctx->pc = 0x2C2304u;
            goto label_2c2304;
        }
    }
    ctx->pc = 0x2C229Cu;
label_2c229c:
    // 0x2c229c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c22a0:
    // 0x2c22a0: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x2c22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
label_2c22a4:
    // 0x2c22a4: 0xc0d37dc  jal         func_34DF70
label_2c22a8:
    if (ctx->pc == 0x2C22A8u) {
        ctx->pc = 0x2C22A8u;
            // 0x2c22a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C22ACu;
        goto label_2c22ac;
    }
    ctx->pc = 0x2C22A4u;
    SET_GPR_U32(ctx, 31, 0x2C22ACu);
    ctx->pc = 0x2C22A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22A4u;
            // 0x2c22a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22ACu; }
        if (ctx->pc != 0x2C22ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22ACu; }
        if (ctx->pc != 0x2C22ACu) { return; }
    }
    ctx->pc = 0x2C22ACu;
label_2c22ac:
    // 0x2c22ac: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2c22b0:
    if (ctx->pc == 0x2C22B0u) {
        ctx->pc = 0x2C22B0u;
            // 0x2c22b0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C22B4u;
        goto label_2c22b4;
    }
    ctx->pc = 0x2C22ACu;
    {
        const bool branch_taken_0x2c22ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c22ac) {
            ctx->pc = 0x2C22B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22ACu;
            // 0x2c22b0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C22F0u;
            goto label_2c22f0;
        }
    }
    ctx->pc = 0x2C22B4u;
label_2c22b4:
    // 0x2c22b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c22b8:
    // 0x2c22b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c22b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c22bc:
    // 0x2c22bc: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c22c0:
    // 0x2c22c0: 0xc0d37dc  jal         func_34DF70
label_2c22c4:
    if (ctx->pc == 0x2C22C4u) {
        ctx->pc = 0x2C22C4u;
            // 0x2c22c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C22C8u;
        goto label_2c22c8;
    }
    ctx->pc = 0x2C22C0u;
    SET_GPR_U32(ctx, 31, 0x2C22C8u);
    ctx->pc = 0x2C22C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22C0u;
            // 0x2c22c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22C8u; }
        if (ctx->pc != 0x2C22C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22C8u; }
        if (ctx->pc != 0x2C22C8u) { return; }
    }
    ctx->pc = 0x2C22C8u;
label_2c22c8:
    // 0x2c22c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c22cc:
    if (ctx->pc == 0x2C22CCu) {
        ctx->pc = 0x2C22D0u;
        goto label_2c22d0;
    }
    ctx->pc = 0x2C22C8u;
    {
        const bool branch_taken_0x2c22c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c22c8) {
            ctx->pc = 0x2C22ECu;
            goto label_2c22ec;
        }
    }
    ctx->pc = 0x2C22D0u;
label_2c22d0:
    // 0x2c22d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c22d4:
    // 0x2c22d4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c22d8:
    // 0x2c22d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c22dc:
    if (ctx->pc == 0x2C22DCu) {
        ctx->pc = 0x2C22DCu;
            // 0x2c22dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C22E0u;
        goto label_2c22e0;
    }
    ctx->pc = 0x2C22D8u;
    {
        const bool branch_taken_0x2c22d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22D8u;
            // 0x2c22dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22d8) {
            ctx->pc = 0x2C22ECu;
            goto label_2c22ec;
        }
    }
    ctx->pc = 0x2C22E0u;
label_2c22e0:
    // 0x2c22e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c22e4:
    // 0x2c22e4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c22e8:
    // 0x2c22e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c22ec:
    // 0x2c22ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c22ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c22f0:
    // 0x2c22f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c22f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c22f4:
    // 0x2c22f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c22f8:
    if (ctx->pc == 0x2C22F8u) {
        ctx->pc = 0x2C22F8u;
            // 0x2c22f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C22FCu;
        goto label_2c22fc;
    }
    ctx->pc = 0x2C22F4u;
    {
        const bool branch_taken_0x2c22f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c22f4) {
            ctx->pc = 0x2C22F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22F4u;
            // 0x2c22f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2308u;
            goto label_2c2308;
        }
    }
    ctx->pc = 0x2C22FCu;
label_2c22fc:
    // 0x2c22fc: 0xc0400a8  jal         func_1002A0
label_2c2300:
    if (ctx->pc == 0x2C2300u) {
        ctx->pc = 0x2C2300u;
            // 0x2c2300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2304u;
        goto label_2c2304;
    }
    ctx->pc = 0x2C22FCu;
    SET_GPR_U32(ctx, 31, 0x2C2304u);
    ctx->pc = 0x2C2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22FCu;
            // 0x2c2300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2304u; }
        if (ctx->pc != 0x2C2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2304u; }
        if (ctx->pc != 0x2C2304u) { return; }
    }
    ctx->pc = 0x2C2304u;
label_2c2304:
    // 0x2c2304: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2308:
    // 0x2c2308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c230c:
    // 0x2c230c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c230cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2310:
    // 0x2c2310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2314:
    // 0x2c2314: 0x3e00008  jr          $ra
label_2c2318:
    if (ctx->pc == 0x2C2318u) {
        ctx->pc = 0x2C2318u;
            // 0x2c2318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C231Cu;
        goto label_2c231c;
    }
    ctx->pc = 0x2C2314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2314u;
            // 0x2c2318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C231Cu;
label_2c231c:
    // 0x2c231c: 0x0  nop
    ctx->pc = 0x2c231cu;
    // NOP
}
