#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9940
// Address: 0x2e9940 - 0x2e9aa0
void sub_002E9940_0x2e9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9940_0x2e9940");
#endif

    switch (ctx->pc) {
        case 0x2e99acu: goto label_2e99ac;
        case 0x2e99f4u: goto label_2e99f4;
        case 0x2e9a28u: goto label_2e9a28;
        case 0x2e9a70u: goto label_2e9a70;
        default: break;
    }

    ctx->pc = 0x2e9940u;

    // 0x2e9940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9944: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e994c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e9950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9958: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2e9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2e995c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9960: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x2e9960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2e9964: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E9964u;
    {
        const bool branch_taken_0x2e9964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9964) {
            ctx->pc = 0x2E9968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9964u;
            // 0x2e9968: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E99FCu;
            goto label_2e99fc;
        }
    }
    ctx->pc = 0x2E996Cu;
    // 0x2e996c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9970: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9970u;
    {
        const bool branch_taken_0x2e9970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9970) {
            ctx->pc = 0x2E9974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9970u;
            // 0x2e9974: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9980u;
            goto label_2e9980;
        }
    }
    ctx->pc = 0x2E9978u;
    // 0x2e9978: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2E9978u;
    {
        const bool branch_taken_0x2e9978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9978u;
            // 0x2e997c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9978) {
            ctx->pc = 0x2E9A78u;
            goto label_2e9a78;
        }
    }
    ctx->pc = 0x2E9980u;
label_2e9980:
    // 0x2e9980: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2e9980u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e9984: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9984u;
    {
        const bool branch_taken_0x2e9984 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9984u;
            // 0x2e9988: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9984) {
            ctx->pc = 0x2E999Cu;
            goto label_2e999c;
        }
    }
    ctx->pc = 0x2E998Cu;
    // 0x2e998c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e998cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9990: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9990u;
    {
        const bool branch_taken_0x2e9990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9990) {
            ctx->pc = 0x2E999Cu;
            goto label_2e999c;
        }
    }
    ctx->pc = 0x2E9998u;
    // 0x2e9998: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2e9998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e999c:
    // 0x2e999c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E999Cu;
    {
        const bool branch_taken_0x2e999c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e999c) {
            ctx->pc = 0x2E99B8u;
            goto label_2e99b8;
        }
    }
    ctx->pc = 0x2E99A4u;
    // 0x2e99a4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E99A4u;
    SET_GPR_U32(ctx, 31, 0x2E99ACu);
    ctx->pc = 0x2E99A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99A4u;
            // 0x2e99a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99ACu; }
        if (ctx->pc != 0x2E99ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99ACu; }
        if (ctx->pc != 0x2E99ACu) { return; }
    }
    ctx->pc = 0x2E99ACu;
label_2e99ac:
    // 0x2e99ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E99ACu;
    {
        const bool branch_taken_0x2e99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e99ac) {
            ctx->pc = 0x2E99B8u;
            goto label_2e99b8;
        }
    }
    ctx->pc = 0x2E99B4u;
    // 0x2e99b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e99b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e99b8:
    // 0x2e99b8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E99B8u;
    {
        const bool branch_taken_0x2e99b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e99b8) {
            ctx->pc = 0x2E99D0u;
            goto label_2e99d0;
        }
    }
    ctx->pc = 0x2E99C0u;
    // 0x2e99c0: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x2e99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x2e99c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e99c8: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E99C8u;
    {
        const bool branch_taken_0x2e99c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e99c8) {
            ctx->pc = 0x2E99CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99C8u;
            // 0x2e99cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9A84u;
            goto label_2e9a84;
        }
    }
    ctx->pc = 0x2E99D0u;
label_2e99d0:
    // 0x2e99d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e99d4: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x2e99d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x2e99d8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e99dc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e99e0: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x2e99e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2e99e4: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2e99e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e99e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99ec: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E99ECu;
    SET_GPR_U32(ctx, 31, 0x2E99F4u);
    ctx->pc = 0x2E99F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99ECu;
            // 0x2e99f0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99F4u; }
        if (ctx->pc != 0x2E99F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99F4u; }
        if (ctx->pc != 0x2E99F4u) { return; }
    }
    ctx->pc = 0x2E99F4u;
label_2e99f4:
    // 0x2e99f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E99F4u;
    {
        const bool branch_taken_0x2e99f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e99f4) {
            ctx->pc = 0x2E9A80u;
            goto label_2e9a80;
        }
    }
    ctx->pc = 0x2E99FCu;
label_2e99fc:
    // 0x2e99fc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2e99fcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e9a00: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A00u;
    {
        const bool branch_taken_0x2e9a00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A00u;
            // 0x2e9a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a00) {
            ctx->pc = 0x2E9A18u;
            goto label_2e9a18;
        }
    }
    ctx->pc = 0x2E9A08u;
    // 0x2e9a08: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9a0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9A0Cu;
    {
        const bool branch_taken_0x2e9a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a0c) {
            ctx->pc = 0x2E9A18u;
            goto label_2e9a18;
        }
    }
    ctx->pc = 0x2E9A14u;
    // 0x2e9a14: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2e9a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9a18:
    // 0x2e9a18: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9A18u;
    {
        const bool branch_taken_0x2e9a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a18) {
            ctx->pc = 0x2E9A34u;
            goto label_2e9a34;
        }
    }
    ctx->pc = 0x2E9A20u;
    // 0x2e9a20: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9A20u;
    SET_GPR_U32(ctx, 31, 0x2E9A28u);
    ctx->pc = 0x2E9A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A20u;
            // 0x2e9a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A28u; }
        if (ctx->pc != 0x2E9A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A28u; }
        if (ctx->pc != 0x2E9A28u) { return; }
    }
    ctx->pc = 0x2E9A28u;
label_2e9a28:
    // 0x2e9a28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9A28u;
    {
        const bool branch_taken_0x2e9a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a28) {
            ctx->pc = 0x2E9A34u;
            goto label_2e9a34;
        }
    }
    ctx->pc = 0x2E9A30u;
    // 0x2e9a30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9a34:
    // 0x2e9a34: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A34u;
    {
        const bool branch_taken_0x2e9a34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a34) {
            ctx->pc = 0x2E9A4Cu;
            goto label_2e9a4c;
        }
    }
    ctx->pc = 0x2E9A3Cu;
    // 0x2e9a3c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x2e9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x2e9a40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9a44: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E9A44u;
    {
        const bool branch_taken_0x2e9a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9a44) {
            ctx->pc = 0x2E9A80u;
            goto label_2e9a80;
        }
    }
    ctx->pc = 0x2E9A4Cu;
label_2e9a4c:
    // 0x2e9a4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9a50: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x2e9a50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x2e9a54: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9a58: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2e9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e9a5c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x2e9a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2e9a60: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x2e9a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2e9a64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a68: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9A68u;
    SET_GPR_U32(ctx, 31, 0x2E9A70u);
    ctx->pc = 0x2E9A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A68u;
            // 0x2e9a6c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A70u; }
        if (ctx->pc != 0x2E9A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A70u; }
        if (ctx->pc != 0x2E9A70u) { return; }
    }
    ctx->pc = 0x2E9A70u;
label_2e9a70:
    // 0x2e9a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A70u;
    {
        const bool branch_taken_0x2e9a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a70) {
            ctx->pc = 0x2E9A80u;
            goto label_2e9a80;
        }
    }
    ctx->pc = 0x2E9A78u;
label_2e9a78:
    // 0x2e9a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A78u;
    {
        const bool branch_taken_0x2e9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A78u;
            // 0x2e9a7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a78) {
            ctx->pc = 0x2E9A88u;
            goto label_2e9a88;
        }
    }
    ctx->pc = 0x2E9A80u;
label_2e9a80:
    // 0x2e9a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9a84:
    // 0x2e9a84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9a88:
    // 0x2e9a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A90u;
            // 0x2e9a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9A98u;
    // 0x2e9a98: 0x0  nop
    ctx->pc = 0x2e9a98u;
    // NOP
    // 0x2e9a9c: 0x0  nop
    ctx->pc = 0x2e9a9cu;
    // NOP
}
