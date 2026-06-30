#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D20C0
// Address: 0x2d20c0 - 0x2d22f0
void sub_002D20C0_0x2d20c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D20C0_0x2d20c0");
#endif

    switch (ctx->pc) {
        case 0x2d2108u: goto label_2d2108;
        case 0x2d211cu: goto label_2d211c;
        case 0x2d2128u: goto label_2d2128;
        case 0x2d2134u: goto label_2d2134;
        case 0x2d213cu: goto label_2d213c;
        case 0x2d214cu: goto label_2d214c;
        case 0x2d216cu: goto label_2d216c;
        case 0x2d2180u: goto label_2d2180;
        case 0x2d218cu: goto label_2d218c;
        case 0x2d2198u: goto label_2d2198;
        case 0x2d21a0u: goto label_2d21a0;
        case 0x2d21b0u: goto label_2d21b0;
        case 0x2d21bcu: goto label_2d21bc;
        case 0x2d21c4u: goto label_2d21c4;
        case 0x2d21ccu: goto label_2d21cc;
        case 0x2d21f8u: goto label_2d21f8;
        case 0x2d220cu: goto label_2d220c;
        case 0x2d2218u: goto label_2d2218;
        case 0x2d2224u: goto label_2d2224;
        case 0x2d222cu: goto label_2d222c;
        case 0x2d223cu: goto label_2d223c;
        case 0x2d225cu: goto label_2d225c;
        case 0x2d2270u: goto label_2d2270;
        case 0x2d227cu: goto label_2d227c;
        case 0x2d2288u: goto label_2d2288;
        case 0x2d2290u: goto label_2d2290;
        case 0x2d22a0u: goto label_2d22a0;
        case 0x2d22acu: goto label_2d22ac;
        case 0x2d22b4u: goto label_2d22b4;
        case 0x2d22bcu: goto label_2d22bc;
        case 0x2d22c8u: goto label_2d22c8;
        default: break;
    }

    ctx->pc = 0x2d20c0u;

label_2d20c0:
    // 0x2d20c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d20c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d20c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d20c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d20c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d20c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d20cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d20ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d20d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d20d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d20d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d20d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d20d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d20d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20dc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2d20dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d20e0: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D20E0u;
    {
        const bool branch_taken_0x2d20e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20E0u;
            // 0x2d20e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20e0) {
            ctx->pc = 0x2D21CCu;
            goto label_2d21cc;
        }
    }
    ctx->pc = 0x2D20E8u;
    // 0x2d20e8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d20e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d20ec: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D20ECu;
    {
        const bool branch_taken_0x2d20ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20ec) {
            ctx->pc = 0x2D20F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20ECu;
            // 0x2d20f0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2150u;
            goto label_2d2150;
        }
    }
    ctx->pc = 0x2D20F4u;
    // 0x2d20f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d20f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d20f8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D20F8u;
    {
        const bool branch_taken_0x2d20f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20f8) {
            ctx->pc = 0x2D20FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20F8u;
            // 0x2d20fc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D210Cu;
            goto label_2d210c;
        }
    }
    ctx->pc = 0x2D2100u;
    // 0x2d2100: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2100u;
    SET_GPR_U32(ctx, 31, 0x2D2108u);
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D2108u;
label_2d2108:
    // 0x2d2108: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d2108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d210c:
    // 0x2d210c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D210Cu;
    {
        const bool branch_taken_0x2d210c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d210c) {
            ctx->pc = 0x2D2110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D210Cu;
            // 0x2d2110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2120u;
            goto label_2d2120;
        }
    }
    ctx->pc = 0x2D2114u;
    // 0x2d2114: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2114u;
    SET_GPR_U32(ctx, 31, 0x2D211Cu);
    ctx->pc = 0x2D2118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2114u;
            // 0x2d2118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D211Cu;
label_2d211c:
    // 0x2d211c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2120:
    // 0x2d2120: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D2120u;
    SET_GPR_U32(ctx, 31, 0x2D2128u);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2128u; }
        if (ctx->pc != 0x2D2128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2128u; }
        if (ctx->pc != 0x2D2128u) { return; }
    }
    ctx->pc = 0x2D2128u;
label_2d2128:
    // 0x2d2128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d212c: 0xc0b48c4  jal         func_2D2310
    ctx->pc = 0x2D212Cu;
    SET_GPR_U32(ctx, 31, 0x2D2134u);
    ctx->pc = 0x2D2130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D212Cu;
            // 0x2d2130: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    if (runtime->hasFunction(0x2D2310u)) {
        auto targetFn = runtime->lookupFunction(0x2D2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2134u; }
        if (ctx->pc != 0x2D2134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2310_0x2d2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2134u; }
        if (ctx->pc != 0x2D2134u) { return; }
    }
    ctx->pc = 0x2D2134u;
label_2d2134:
    // 0x2d2134: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D2134u;
    SET_GPR_U32(ctx, 31, 0x2D213Cu);
    ctx->pc = 0x2D2138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2134u;
            // 0x2d2138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D213Cu; }
        if (ctx->pc != 0x2D213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D213Cu; }
        if (ctx->pc != 0x2D213Cu) { return; }
    }
    ctx->pc = 0x2D213Cu;
label_2d213c:
    // 0x2d213c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2144: 0xc0b48bc  jal         func_2D22F0
    ctx->pc = 0x2D2144u;
    SET_GPR_U32(ctx, 31, 0x2D214Cu);
    ctx->pc = 0x2D2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2144u;
            // 0x2d2148: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D22F0u;
    if (runtime->hasFunction(0x2D22F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D214Cu; }
        if (ctx->pc != 0x2D214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D22F0_0x2d22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D214Cu; }
        if (ctx->pc != 0x2D214Cu) { return; }
    }
    ctx->pc = 0x2D214Cu;
label_2d214c:
    // 0x2d214c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d2150:
    // 0x2d2150: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2150u;
    {
        const bool branch_taken_0x2d2150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2150) {
            ctx->pc = 0x2D2154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2150u;
            // 0x2d2154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D21B4u;
            goto label_2d21b4;
        }
    }
    ctx->pc = 0x2D2158u;
    // 0x2d2158: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d2158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d215c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D215Cu;
    {
        const bool branch_taken_0x2d215c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d215c) {
            ctx->pc = 0x2D2160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D215Cu;
            // 0x2d2160: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2170u;
            goto label_2d2170;
        }
    }
    ctx->pc = 0x2D2164u;
    // 0x2d2164: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2164u;
    SET_GPR_U32(ctx, 31, 0x2D216Cu);
    ctx->pc = 0x2D2168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2164u;
            // 0x2d2168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D216Cu;
label_2d216c:
    // 0x2d216c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d2170:
    // 0x2d2170: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2170u;
    {
        const bool branch_taken_0x2d2170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2170) {
            ctx->pc = 0x2D2174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2170u;
            // 0x2d2174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2184u;
            goto label_2d2184;
        }
    }
    ctx->pc = 0x2D2178u;
    // 0x2d2178: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2178u;
    SET_GPR_U32(ctx, 31, 0x2D2180u);
    ctx->pc = 0x2D217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2178u;
            // 0x2d217c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D2180u;
label_2d2180:
    // 0x2d2180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2184:
    // 0x2d2184: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D2184u;
    SET_GPR_U32(ctx, 31, 0x2D218Cu);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D218Cu; }
        if (ctx->pc != 0x2D218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D218Cu; }
        if (ctx->pc != 0x2D218Cu) { return; }
    }
    ctx->pc = 0x2D218Cu;
label_2d218c:
    // 0x2d218c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2190: 0xc0b48c4  jal         func_2D2310
    ctx->pc = 0x2D2190u;
    SET_GPR_U32(ctx, 31, 0x2D2198u);
    ctx->pc = 0x2D2194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2190u;
            // 0x2d2194: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    if (runtime->hasFunction(0x2D2310u)) {
        auto targetFn = runtime->lookupFunction(0x2D2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2198u; }
        if (ctx->pc != 0x2D2198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2310_0x2d2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2198u; }
        if (ctx->pc != 0x2D2198u) { return; }
    }
    ctx->pc = 0x2D2198u;
label_2d2198:
    // 0x2d2198: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D2198u;
    SET_GPR_U32(ctx, 31, 0x2D21A0u);
    ctx->pc = 0x2D219Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2198u;
            // 0x2d219c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21A0u; }
        if (ctx->pc != 0x2D21A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21A0u; }
        if (ctx->pc != 0x2D21A0u) { return; }
    }
    ctx->pc = 0x2D21A0u;
label_2d21a0:
    // 0x2d21a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d21a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d21a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21a8: 0xc0b48bc  jal         func_2D22F0
    ctx->pc = 0x2D21A8u;
    SET_GPR_U32(ctx, 31, 0x2D21B0u);
    ctx->pc = 0x2D21ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21A8u;
            // 0x2d21ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D22F0u;
    if (runtime->hasFunction(0x2D22F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21B0u; }
        if (ctx->pc != 0x2D21B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D22F0_0x2d22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21B0u; }
        if (ctx->pc != 0x2D21B0u) { return; }
    }
    ctx->pc = 0x2D21B0u;
label_2d21b0:
    // 0x2d21b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d21b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d21b4:
    // 0x2d21b4: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D21B4u;
    SET_GPR_U32(ctx, 31, 0x2D21BCu);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21BCu; }
        if (ctx->pc != 0x2D21BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21BCu; }
        if (ctx->pc != 0x2D21BCu) { return; }
    }
    ctx->pc = 0x2D21BCu;
label_2d21bc:
    // 0x2d21bc: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D21BCu;
    SET_GPR_U32(ctx, 31, 0x2D21C4u);
    ctx->pc = 0x2D21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21BCu;
            // 0x2d21c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21C4u; }
        if (ctx->pc != 0x2D21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21C4u; }
        if (ctx->pc != 0x2D21C4u) { return; }
    }
    ctx->pc = 0x2D21C4u;
label_2d21c4:
    // 0x2d21c4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D21C4u;
    SET_GPR_U32(ctx, 31, 0x2D21CCu);
    ctx->pc = 0x2D21C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21C4u;
            // 0x2d21c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21CCu; }
        if (ctx->pc != 0x2D21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21CCu; }
        if (ctx->pc != 0x2D21CCu) { return; }
    }
    ctx->pc = 0x2D21CCu;
label_2d21cc:
    // 0x2d21cc: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x2d21ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d21d0: 0x5260003b  beql        $s3, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D21D0u;
    {
        const bool branch_taken_0x2d21d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21d0) {
            ctx->pc = 0x2D21D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21D0u;
            // 0x2d21d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D22C0u;
            goto label_2d22c0;
        }
    }
    ctx->pc = 0x2D21D8u;
    // 0x2d21d8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d21d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d21dc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D21DCu;
    {
        const bool branch_taken_0x2d21dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21dc) {
            ctx->pc = 0x2D21E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21DCu;
            // 0x2d21e0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2240u;
            goto label_2d2240;
        }
    }
    ctx->pc = 0x2D21E4u;
    // 0x2d21e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d21e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d21e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D21ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21E8u;
            // 0x2d21ec: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D21FCu;
            goto label_2d21fc;
        }
    }
    ctx->pc = 0x2D21F0u;
    // 0x2d21f0: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D21F0u;
    SET_GPR_U32(ctx, 31, 0x2D21F8u);
    ctx->pc = 0x2D21F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21F0u;
            // 0x2d21f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D21F8u;
label_2d21f8:
    // 0x2d21f8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d21fc:
    // 0x2d21fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D21FCu;
    {
        const bool branch_taken_0x2d21fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21fc) {
            ctx->pc = 0x2D2200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21FCu;
            // 0x2d2200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2210u;
            goto label_2d2210;
        }
    }
    ctx->pc = 0x2D2204u;
    // 0x2d2204: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2204u;
    SET_GPR_U32(ctx, 31, 0x2D220Cu);
    ctx->pc = 0x2D2208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2204u;
            // 0x2d2208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D220Cu;
label_2d220c:
    // 0x2d220c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2210:
    // 0x2d2210: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D2210u;
    SET_GPR_U32(ctx, 31, 0x2D2218u);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2218u; }
        if (ctx->pc != 0x2D2218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2218u; }
        if (ctx->pc != 0x2D2218u) { return; }
    }
    ctx->pc = 0x2D2218u;
label_2d2218:
    // 0x2d2218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d221c: 0xc0b48c4  jal         func_2D2310
    ctx->pc = 0x2D221Cu;
    SET_GPR_U32(ctx, 31, 0x2D2224u);
    ctx->pc = 0x2D2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D221Cu;
            // 0x2d2220: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    if (runtime->hasFunction(0x2D2310u)) {
        auto targetFn = runtime->lookupFunction(0x2D2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2224u; }
        if (ctx->pc != 0x2D2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2310_0x2d2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2224u; }
        if (ctx->pc != 0x2D2224u) { return; }
    }
    ctx->pc = 0x2D2224u;
label_2d2224:
    // 0x2d2224: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D2224u;
    SET_GPR_U32(ctx, 31, 0x2D222Cu);
    ctx->pc = 0x2D2228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2224u;
            // 0x2d2228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D222Cu; }
        if (ctx->pc != 0x2D222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D222Cu; }
        if (ctx->pc != 0x2D222Cu) { return; }
    }
    ctx->pc = 0x2D222Cu;
label_2d222c:
    // 0x2d222c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2234: 0xc0b48bc  jal         func_2D22F0
    ctx->pc = 0x2D2234u;
    SET_GPR_U32(ctx, 31, 0x2D223Cu);
    ctx->pc = 0x2D2238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2234u;
            // 0x2d2238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D22F0u;
    if (runtime->hasFunction(0x2D22F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D223Cu; }
        if (ctx->pc != 0x2D223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D22F0_0x2d22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D223Cu; }
        if (ctx->pc != 0x2D223Cu) { return; }
    }
    ctx->pc = 0x2D223Cu;
label_2d223c:
    // 0x2d223c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d223cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d2240:
    // 0x2d2240: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2240u;
    {
        const bool branch_taken_0x2d2240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2240) {
            ctx->pc = 0x2D2244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2240u;
            // 0x2d2244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D22A4u;
            goto label_2d22a4;
        }
    }
    ctx->pc = 0x2D2248u;
    // 0x2d2248: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d2248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d224c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D224Cu;
    {
        const bool branch_taken_0x2d224c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d224c) {
            ctx->pc = 0x2D2250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D224Cu;
            // 0x2d2250: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2260u;
            goto label_2d2260;
        }
    }
    ctx->pc = 0x2D2254u;
    // 0x2d2254: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2254u;
    SET_GPR_U32(ctx, 31, 0x2D225Cu);
    ctx->pc = 0x2D2258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2254u;
            // 0x2d2258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D225Cu;
label_2d225c:
    // 0x2d225c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d2260:
    // 0x2d2260: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2260u;
    {
        const bool branch_taken_0x2d2260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2260) {
            ctx->pc = 0x2D2264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2260u;
            // 0x2d2264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2274u;
            goto label_2d2274;
        }
    }
    ctx->pc = 0x2D2268u;
    // 0x2d2268: 0xc0b4830  jal         func_2D20C0
    ctx->pc = 0x2D2268u;
    SET_GPR_U32(ctx, 31, 0x2D2270u);
    ctx->pc = 0x2D226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2268u;
            // 0x2d226c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20C0u;
    goto label_2d20c0;
    ctx->pc = 0x2D2270u;
label_2d2270:
    // 0x2d2270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2274:
    // 0x2d2274: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D2274u;
    SET_GPR_U32(ctx, 31, 0x2D227Cu);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D227Cu; }
        if (ctx->pc != 0x2D227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D227Cu; }
        if (ctx->pc != 0x2D227Cu) { return; }
    }
    ctx->pc = 0x2D227Cu;
label_2d227c:
    // 0x2d227c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2280: 0xc0b48c4  jal         func_2D2310
    ctx->pc = 0x2D2280u;
    SET_GPR_U32(ctx, 31, 0x2D2288u);
    ctx->pc = 0x2D2284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2280u;
            // 0x2d2284: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2310u;
    if (runtime->hasFunction(0x2D2310u)) {
        auto targetFn = runtime->lookupFunction(0x2D2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2288u; }
        if (ctx->pc != 0x2D2288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2310_0x2d2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2288u; }
        if (ctx->pc != 0x2D2288u) { return; }
    }
    ctx->pc = 0x2D2288u;
label_2d2288:
    // 0x2d2288: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D2288u;
    SET_GPR_U32(ctx, 31, 0x2D2290u);
    ctx->pc = 0x2D228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2288u;
            // 0x2d228c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2290u; }
        if (ctx->pc != 0x2D2290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2290u; }
        if (ctx->pc != 0x2D2290u) { return; }
    }
    ctx->pc = 0x2D2290u;
label_2d2290:
    // 0x2d2290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2298: 0xc0b48bc  jal         func_2D22F0
    ctx->pc = 0x2D2298u;
    SET_GPR_U32(ctx, 31, 0x2D22A0u);
    ctx->pc = 0x2D229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2298u;
            // 0x2d229c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D22F0u;
    if (runtime->hasFunction(0x2D22F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22A0u; }
        if (ctx->pc != 0x2D22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D22F0_0x2d22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22A0u; }
        if (ctx->pc != 0x2D22A0u) { return; }
    }
    ctx->pc = 0x2D22A0u;
label_2d22a0:
    // 0x2d22a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d22a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d22a4:
    // 0x2d22a4: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D22A4u;
    SET_GPR_U32(ctx, 31, 0x2D22ACu);
    ctx->pc = 0x2D2320u;
    if (runtime->hasFunction(0x2D2320u)) {
        auto targetFn = runtime->lookupFunction(0x2D2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22ACu; }
        if (ctx->pc != 0x2D22ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2320_0x2d2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22ACu; }
        if (ctx->pc != 0x2D22ACu) { return; }
    }
    ctx->pc = 0x2D22ACu;
label_2d22ac:
    // 0x2d22ac: 0xc0b48c0  jal         func_2D2300
    ctx->pc = 0x2D22ACu;
    SET_GPR_U32(ctx, 31, 0x2D22B4u);
    ctx->pc = 0x2D22B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D22ACu;
            // 0x2d22b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2300u;
    if (runtime->hasFunction(0x2D2300u)) {
        auto targetFn = runtime->lookupFunction(0x2D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22B4u; }
        if (ctx->pc != 0x2D22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2300_0x2d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22B4u; }
        if (ctx->pc != 0x2D22B4u) { return; }
    }
    ctx->pc = 0x2D22B4u;
label_2d22b4:
    // 0x2d22b4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D22B4u;
    SET_GPR_U32(ctx, 31, 0x2D22BCu);
    ctx->pc = 0x2D22B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D22B4u;
            // 0x2d22b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22BCu; }
        if (ctx->pc != 0x2D22BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22BCu; }
        if (ctx->pc != 0x2D22BCu) { return; }
    }
    ctx->pc = 0x2D22BCu;
label_2d22bc:
    // 0x2d22bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d22bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d22c0:
    // 0x2d22c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D22C0u;
    SET_GPR_U32(ctx, 31, 0x2D22C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22C8u; }
        if (ctx->pc != 0x2D22C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D22C8u; }
        if (ctx->pc != 0x2D22C8u) { return; }
    }
    ctx->pc = 0x2D22C8u;
label_2d22c8:
    // 0x2d22c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d22c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d22cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d22ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d22d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d22d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d22d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d22d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d22d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d22dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D22DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D22E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D22DCu;
            // 0x2d22e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D22E4u;
    // 0x2d22e4: 0x0  nop
    ctx->pc = 0x2d22e4u;
    // NOP
    // 0x2d22e8: 0x0  nop
    ctx->pc = 0x2d22e8u;
    // NOP
    // 0x2d22ec: 0x0  nop
    ctx->pc = 0x2d22ecu;
    // NOP
}
