#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A1C0
// Address: 0x15a1c0 - 0x15a350
void sub_0015A1C0_0x15a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A1C0_0x15a1c0");
#endif

    switch (ctx->pc) {
        case 0x15a200u: goto label_15a200;
        case 0x15a244u: goto label_15a244;
        case 0x15a260u: goto label_15a260;
        case 0x15a27cu: goto label_15a27c;
        case 0x15a284u: goto label_15a284;
        case 0x15a298u: goto label_15a298;
        case 0x15a2a8u: goto label_15a2a8;
        case 0x15a2c0u: goto label_15a2c0;
        case 0x15a2dcu: goto label_15a2dc;
        case 0x15a2fcu: goto label_15a2fc;
        case 0x15a314u: goto label_15a314;
        case 0x15a31cu: goto label_15a31c;
        case 0x15a324u: goto label_15a324;
        default: break;
    }

    ctx->pc = 0x15a1c0u;

    // 0x15a1c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15a1c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15a1c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15a1cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a1d0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x15a1d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a1d8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15a1d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a1e0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15a1e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15a1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15a1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1f8: 0xc056420  jal         func_159080
    ctx->pc = 0x15A1F8u;
    SET_GPR_U32(ctx, 31, 0x15A200u);
    ctx->pc = 0x15A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1F8u;
            // 0x15a1fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159080u;
    if (runtime->hasFunction(0x159080u)) {
        auto targetFn = runtime->lookupFunction(0x159080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A200u; }
        if (ctx->pc != 0x15A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159080_0x159080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A200u; }
        if (ctx->pc != 0x15A200u) { return; }
    }
    ctx->pc = 0x15A200u;
label_15a200:
    // 0x15a200: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a204: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A204u;
    {
        const bool branch_taken_0x15a204 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a204) {
            ctx->pc = 0x15A210u;
            goto label_15a210;
        }
    }
    ctx->pc = 0x15A20Cu;
    // 0x15a20c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x15a20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a210:
    // 0x15a210: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15A210u;
    {
        const bool branch_taken_0x15a210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a210) {
            ctx->pc = 0x15A214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A210u;
            // 0x15a214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A23Cu;
            goto label_15a23c;
        }
    }
    ctx->pc = 0x15A218u;
    // 0x15a218: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x15a218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a21c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x15a21cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a220: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x15a220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15a224: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x15a224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a228: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x15a228u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x15a22c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x15a22cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a230: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x15a230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x15a234: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x15a234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a23c:
    // 0x15a23c: 0xc056900  jal         func_15A400
    ctx->pc = 0x15A23Cu;
    SET_GPR_U32(ctx, 31, 0x15A244u);
    ctx->pc = 0x15A400u;
    if (runtime->hasFunction(0x15A400u)) {
        auto targetFn = runtime->lookupFunction(0x15A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A244u; }
        if (ctx->pc != 0x15A244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A400_0x15a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A244u; }
        if (ctx->pc != 0x15A244u) { return; }
    }
    ctx->pc = 0x15A244u;
label_15a244:
    // 0x15a244: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a248: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15a248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a24c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15a250: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a254: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15a258: 0xc04a1c2  jal         func_128708
    ctx->pc = 0x15A258u;
    SET_GPR_U32(ctx, 31, 0x15A260u);
    ctx->pc = 0x15A25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A258u;
            // 0x15a25c: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128708u;
    if (runtime->hasFunction(0x128708u)) {
        auto targetFn = runtime->lookupFunction(0x128708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A260u; }
        if (ctx->pc != 0x15A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128708_0x128708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A260u; }
        if (ctx->pc != 0x15A260u) { return; }
    }
    ctx->pc = 0x15A260u;
label_15a260:
    // 0x15a260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15a260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a264: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A264u;
    {
        const bool branch_taken_0x15a264 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A264u;
            // 0x15a268: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a264) {
            ctx->pc = 0x15A274u;
            goto label_15a274;
        }
    }
    ctx->pc = 0x15A26Cu;
    // 0x15a26c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15A26Cu;
    {
        const bool branch_taken_0x15a26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A26Cu;
            // 0x15a270: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a26c) {
            ctx->pc = 0x15A328u;
            goto label_15a328;
        }
    }
    ctx->pc = 0x15A274u;
label_15a274:
    // 0x15a274: 0xc0569f8  jal         func_15A7E0
    ctx->pc = 0x15A274u;
    SET_GPR_U32(ctx, 31, 0x15A27Cu);
    ctx->pc = 0x15A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A274u;
            // 0x15a278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A7E0u;
    if (runtime->hasFunction(0x15A7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15A7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A27Cu; }
        if (ctx->pc != 0x15A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A7E0_0x15a7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A27Cu; }
        if (ctx->pc != 0x15A27Cu) { return; }
    }
    ctx->pc = 0x15A27Cu;
label_15a27c:
    // 0x15a27c: 0xc0562e0  jal         func_158B80
    ctx->pc = 0x15A27Cu;
    SET_GPR_U32(ctx, 31, 0x15A284u);
    ctx->pc = 0x15A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A27Cu;
            // 0x15a280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B80u;
    if (runtime->hasFunction(0x158B80u)) {
        auto targetFn = runtime->lookupFunction(0x158B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A284u; }
        if (ctx->pc != 0x15A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158B80_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A284u; }
        if (ctx->pc != 0x15A284u) { return; }
    }
    ctx->pc = 0x15A284u;
label_15a284:
    // 0x15a284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a288: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A288u;
    {
        const bool branch_taken_0x15a288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a288) {
            ctx->pc = 0x15A28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A288u;
            // 0x15a28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A2A0u;
            goto label_15a2a0;
        }
    }
    ctx->pc = 0x15A290u;
    // 0x15a290: 0xc04a246  jal         func_128918
    ctx->pc = 0x15A290u;
    SET_GPR_U32(ctx, 31, 0x15A298u);
    ctx->pc = 0x15A294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A290u;
            // 0x15a294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A298u; }
        if (ctx->pc != 0x15A298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A298u; }
        if (ctx->pc != 0x15A298u) { return; }
    }
    ctx->pc = 0x15A298u;
label_15a298:
    // 0x15a298: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15A298u;
    {
        const bool branch_taken_0x15a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A298u;
            // 0x15a29c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a298) {
            ctx->pc = 0x15A328u;
            goto label_15a328;
        }
    }
    ctx->pc = 0x15A2A0u;
label_15a2a0:
    // 0x15a2a0: 0xc056964  jal         func_15A590
    ctx->pc = 0x15A2A0u;
    SET_GPR_U32(ctx, 31, 0x15A2A8u);
    ctx->pc = 0x15A590u;
    if (runtime->hasFunction(0x15A590u)) {
        auto targetFn = runtime->lookupFunction(0x15A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2A8u; }
        if (ctx->pc != 0x15A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A590_0x15a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2A8u; }
        if (ctx->pc != 0x15A2A8u) { return; }
    }
    ctx->pc = 0x15A2A8u;
label_15a2a8:
    // 0x15a2a8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15A2A8u;
    {
        const bool branch_taken_0x15a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a2a8) {
            ctx->pc = 0x15A2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2A8u;
            // 0x15a2ac: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A2E4u;
            goto label_15a2e4;
        }
    }
    ctx->pc = 0x15A2B0u;
    // 0x15a2b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15a2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15a2b8: 0xc056978  jal         func_15A5E0
    ctx->pc = 0x15A2B8u;
    SET_GPR_U32(ctx, 31, 0x15A2C0u);
    ctx->pc = 0x15A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2B8u;
            // 0x15a2bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A5E0u;
    if (runtime->hasFunction(0x15A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x15A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2C0u; }
        if (ctx->pc != 0x15A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A5E0_0x15a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2C0u; }
        if (ctx->pc != 0x15A2C0u) { return; }
    }
    ctx->pc = 0x15A2C0u;
label_15a2c0:
    // 0x15a2c0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a2c4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x15a2c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2c8: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15a2cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15a2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2d4: 0xc0569f4  jal         func_15A7D0
    ctx->pc = 0x15A2D4u;
    SET_GPR_U32(ctx, 31, 0x15A2DCu);
    ctx->pc = 0x15A2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2D4u;
            // 0x15a2d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A7D0u;
    if (runtime->hasFunction(0x15A7D0u)) {
        auto targetFn = runtime->lookupFunction(0x15A7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2DCu; }
        if (ctx->pc != 0x15A2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A7D0_0x15a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2DCu; }
        if (ctx->pc != 0x15A2DCu) { return; }
    }
    ctx->pc = 0x15A2DCu;
label_15a2dc:
    // 0x15a2dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A2DCu;
    {
        const bool branch_taken_0x15a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2DCu;
            // 0x15a2e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2dc) {
            ctx->pc = 0x15A300u;
            goto label_15a300;
        }
    }
    ctx->pc = 0x15A2E4u;
label_15a2e4:
    // 0x15a2e4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15a2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2f4: 0xc0569f4  jal         func_15A7D0
    ctx->pc = 0x15A2F4u;
    SET_GPR_U32(ctx, 31, 0x15A2FCu);
    ctx->pc = 0x15A2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2F4u;
            // 0x15a2f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A7D0u;
    if (runtime->hasFunction(0x15A7D0u)) {
        auto targetFn = runtime->lookupFunction(0x15A7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2FCu; }
        if (ctx->pc != 0x15A2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A7D0_0x15a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2FCu; }
        if (ctx->pc != 0x15A2FCu) { return; }
    }
    ctx->pc = 0x15A2FCu;
label_15a2fc:
    // 0x15a2fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15a2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a300:
    // 0x15a300: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15a300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a304: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15a304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a30c: 0xc056758  jal         func_159D60
    ctx->pc = 0x15A30Cu;
    SET_GPR_U32(ctx, 31, 0x15A314u);
    ctx->pc = 0x15A310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A30Cu;
            // 0x15a310: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159D60u;
    if (runtime->hasFunction(0x159D60u)) {
        auto targetFn = runtime->lookupFunction(0x159D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A314u; }
        if (ctx->pc != 0x15A314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159D60_0x159d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A314u; }
        if (ctx->pc != 0x15A314u) { return; }
    }
    ctx->pc = 0x15A314u;
label_15a314:
    // 0x15a314: 0xc0570ac  jal         func_15C2B0
    ctx->pc = 0x15A314u;
    SET_GPR_U32(ctx, 31, 0x15A31Cu);
    ctx->pc = 0x15A318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A314u;
            // 0x15a318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C2B0u;
    if (runtime->hasFunction(0x15C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A31Cu; }
        if (ctx->pc != 0x15A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2B0_0x15c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A31Cu; }
        if (ctx->pc != 0x15A31Cu) { return; }
    }
    ctx->pc = 0x15A31Cu;
label_15a31c:
    // 0x15a31c: 0xc04a246  jal         func_128918
    ctx->pc = 0x15A31Cu;
    SET_GPR_U32(ctx, 31, 0x15A324u);
    ctx->pc = 0x15A320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A31Cu;
            // 0x15a320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A324u; }
        if (ctx->pc != 0x15A324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A324u; }
        if (ctx->pc != 0x15A324u) { return; }
    }
    ctx->pc = 0x15A324u;
label_15a324:
    // 0x15a324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a328:
    // 0x15a328: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a32c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15a32cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a33c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a348: 0x3e00008  jr          $ra
    ctx->pc = 0x15A348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A348u;
            // 0x15a34c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A350u;
}
