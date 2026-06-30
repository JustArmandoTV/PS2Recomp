#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003610D0
// Address: 0x3610d0 - 0x361410
void sub_003610D0_0x3610d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003610D0_0x3610d0");
#endif

    switch (ctx->pc) {
        case 0x361108u: goto label_361108;
        case 0x36113cu: goto label_36113c;
        case 0x36115cu: goto label_36115c;
        case 0x361170u: goto label_361170;
        case 0x36123cu: goto label_36123c;
        case 0x361258u: goto label_361258;
        case 0x3612f4u: goto label_3612f4;
        case 0x361314u: goto label_361314;
        case 0x361340u: goto label_361340;
        default: break;
    }

    ctx->pc = 0x3610d0u;

    // 0x3610d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3610d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3610d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3610d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3610d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3610d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3610dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3610dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3610e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3610e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3610e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3610e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3610e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3610ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3610f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3610f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3610f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3610f8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x3610f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3610fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3610fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361100: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361100u;
    {
        const bool branch_taken_0x361100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361100u;
            // 0x361104: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361100) {
            ctx->pc = 0x361128u;
            goto label_361128;
        }
    }
    ctx->pc = 0x361108u;
label_361108:
    // 0x361108: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x361108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36110c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x361110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361114: 0x0  nop
    ctx->pc = 0x361114u;
    // NOP
    // 0x361118: 0x0  nop
    ctx->pc = 0x361118u;
    // NOP
    // 0x36111c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36111Cu;
    {
        const bool branch_taken_0x36111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36111c) {
            ctx->pc = 0x361108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_361108;
        }
    }
    ctx->pc = 0x361124u;
    // 0x361124: 0x0  nop
    ctx->pc = 0x361124u;
    // NOP
label_361128:
    // 0x361128: 0x48882  srl         $s1, $a0, 2
    ctx->pc = 0x361128u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x36112c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x36112cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x361130: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x361130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x361134: 0xc040138  jal         func_1004E0
    ctx->pc = 0x361134u;
    SET_GPR_U32(ctx, 31, 0x36113Cu);
    ctx->pc = 0x361138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361134u;
            // 0x361138: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36113Cu; }
        if (ctx->pc != 0x36113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36113Cu; }
        if (ctx->pc != 0x36113Cu) { return; }
    }
    ctx->pc = 0x36113Cu;
label_36113c:
    // 0x36113c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x36113cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x361140: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x361140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x361144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361148: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x361148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    // 0x36114c: 0x24c63260  addiu       $a2, $a2, 0x3260
    ctx->pc = 0x36114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12896));
    // 0x361150: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x361150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x361154: 0xc040840  jal         func_102100
    ctx->pc = 0x361154u;
    SET_GPR_U32(ctx, 31, 0x36115Cu);
    ctx->pc = 0x361158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361154u;
            // 0x361158: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36115Cu; }
        if (ctx->pc != 0x36115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36115Cu; }
        if (ctx->pc != 0x36115Cu) { return; }
    }
    ctx->pc = 0x36115Cu;
label_36115c:
    // 0x36115c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361160: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x361160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x361164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361168: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x361168u;
    SET_GPR_U32(ctx, 31, 0x361170u);
    ctx->pc = 0x36116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361168u;
            // 0x36116c: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361170u; }
        if (ctx->pc != 0x361170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361170u; }
        if (ctx->pc != 0x361170u) { return; }
    }
    ctx->pc = 0x361170u;
label_361170:
    // 0x361170: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361174: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361178: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x361178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36117c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x361180: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361184: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361184u;
    {
        const bool branch_taken_0x361184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361184) {
            ctx->pc = 0x361188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361184u;
            // 0x361188: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361198u;
            goto label_361198;
        }
    }
    ctx->pc = 0x36118Cu;
    // 0x36118c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36118cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361190: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x361190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x361194: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361198:
    // 0x361198: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36119c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3611a0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3611a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3611a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3611a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3611a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3611A8u;
    {
        const bool branch_taken_0x3611a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3611a8) {
            ctx->pc = 0x3611ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3611A8u;
            // 0x3611ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3611BCu;
            goto label_3611bc;
        }
    }
    ctx->pc = 0x3611B0u;
    // 0x3611b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3611b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3611b4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3611b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3611b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3611b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3611bc:
    // 0x3611bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3611bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3611c0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3611c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3611c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3611c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3611c8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3611c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3611cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3611CCu;
    {
        const bool branch_taken_0x3611cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3611cc) {
            ctx->pc = 0x3611D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3611CCu;
            // 0x3611d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3611E0u;
            goto label_3611e0;
        }
    }
    ctx->pc = 0x3611D4u;
    // 0x3611d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3611d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3611d8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3611d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3611dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3611dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3611e0:
    // 0x3611e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3611e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3611e4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3611e8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3611e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3611ec: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x3611ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3611f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3611f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3611f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3611F4u;
    {
        const bool branch_taken_0x3611f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3611f4) {
            ctx->pc = 0x3611F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3611F4u;
            // 0x3611f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361208u;
            goto label_361208;
        }
    }
    ctx->pc = 0x3611FCu;
    // 0x3611fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3611fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361200: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361204: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361208:
    // 0x361208: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36120c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361210: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361214: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361218: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36121c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36121Cu;
    {
        const bool branch_taken_0x36121c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36121c) {
            ctx->pc = 0x361220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36121Cu;
            // 0x361220: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361230u;
            goto label_361230;
        }
    }
    ctx->pc = 0x361224u;
    // 0x361224: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361228: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36122c: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x36122cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_361230:
    // 0x361230: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x361230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x361234: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x361234u;
    {
        const bool branch_taken_0x361234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x361234) {
            ctx->pc = 0x3613B0u;
            goto label_3613b0;
        }
    }
    ctx->pc = 0x36123Cu;
label_36123c:
    // 0x36123c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x36123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361244: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36124c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361250: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x361250u;
    SET_GPR_U32(ctx, 31, 0x361258u);
    ctx->pc = 0x361254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361250u;
            // 0x361254: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361258u; }
        if (ctx->pc != 0x361258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361258u; }
        if (ctx->pc != 0x361258u) { return; }
    }
    ctx->pc = 0x361258u;
label_361258:
    // 0x361258: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36125c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361260: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x361260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x361264: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x361264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x361268: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36126c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36126Cu;
    {
        const bool branch_taken_0x36126c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36126c) {
            ctx->pc = 0x361280u;
            goto label_361280;
        }
    }
    ctx->pc = 0x361274u;
    // 0x361274: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361278: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x361278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x36127c: 0x0  nop
    ctx->pc = 0x36127cu;
    // NOP
label_361280:
    // 0x361280: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361288: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x361288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x36128c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361290: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x361294: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361294u;
    {
        const bool branch_taken_0x361294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361294) {
            ctx->pc = 0x3612A8u;
            goto label_3612a8;
        }
    }
    ctx->pc = 0x36129Cu;
    // 0x36129c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3612a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3612a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x3612a4: 0x0  nop
    ctx->pc = 0x3612a4u;
    // NOP
label_3612a8:
    // 0x3612a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3612a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3612ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3612b0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3612b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x3612b4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3612b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3612b8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3612b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3612bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3612BCu;
    {
        const bool branch_taken_0x3612bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3612bc) {
            ctx->pc = 0x3612D0u;
            goto label_3612d0;
        }
    }
    ctx->pc = 0x3612C4u;
    // 0x3612c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3612c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3612c8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3612c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x3612cc: 0x0  nop
    ctx->pc = 0x3612ccu;
    // NOP
label_3612d0:
    // 0x3612d0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3612d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3612d4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3612d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3612d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3612d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612dc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3612dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3612e0: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x3612e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x3612e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3612e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3612e8: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3612ec: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x3612ECu;
    SET_GPR_U32(ctx, 31, 0x3612F4u);
    ctx->pc = 0x3612F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3612ECu;
            // 0x3612f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3612F4u; }
        if (ctx->pc != 0x3612F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3612F4u; }
        if (ctx->pc != 0x3612F4u) { return; }
    }
    ctx->pc = 0x3612F4u;
label_3612f4:
    // 0x3612f4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3612f8: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x3612f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3612fc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361300: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x361300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361304: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361308: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36130c: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x36130Cu;
    SET_GPR_U32(ctx, 31, 0x361314u);
    ctx->pc = 0x361310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36130Cu;
            // 0x361310: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361314u; }
        if (ctx->pc != 0x361314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361314u; }
        if (ctx->pc != 0x361314u) { return; }
    }
    ctx->pc = 0x361314u;
label_361314:
    // 0x361314: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36131c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x36131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x361320: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x361320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x361324: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x361324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x361328: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x361328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36132c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x36132cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361334: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361338: 0xc075188  jal         func_1D4620
    ctx->pc = 0x361338u;
    SET_GPR_U32(ctx, 31, 0x361340u);
    ctx->pc = 0x36133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361338u;
            // 0x36133c: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361340u; }
        if (ctx->pc != 0x361340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361340u; }
        if (ctx->pc != 0x361340u) { return; }
    }
    ctx->pc = 0x361340u;
label_361340:
    // 0x361340: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x361340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361344: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361348: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x361348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36134c: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x36134cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x361350: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361354: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361358: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36135c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x36135cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361360: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361360u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361364: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361364u;
    {
        const bool branch_taken_0x361364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361364) {
            ctx->pc = 0x361378u;
            goto label_361378;
        }
    }
    ctx->pc = 0x36136Cu;
    // 0x36136c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361370: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361374: 0x0  nop
    ctx->pc = 0x361374u;
    // NOP
label_361378:
    // 0x361378: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36137c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36137cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361380: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361384: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361388: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36138c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36138cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361390: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361390u;
    {
        const bool branch_taken_0x361390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361390) {
            ctx->pc = 0x3613A0u;
            goto label_3613a0;
        }
    }
    ctx->pc = 0x361398u;
    // 0x361398: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36139c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3613a0:
    // 0x3613a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3613a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3613a4: 0x1600ffa5  bnez        $s0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3613A4u;
    {
        const bool branch_taken_0x3613a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3613A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3613A4u;
            // 0x3613a8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3613a4) {
            ctx->pc = 0x36123Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36123c;
        }
    }
    ctx->pc = 0x3613ACu;
    // 0x3613ac: 0x0  nop
    ctx->pc = 0x3613acu;
    // NOP
label_3613b0:
    // 0x3613b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3613b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3613b4: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3613b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x3613b8: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x3613b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3613bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3613BCu;
    {
        const bool branch_taken_0x3613bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613bc) {
            ctx->pc = 0x3613CCu;
            goto label_3613cc;
        }
    }
    ctx->pc = 0x3613C4u;
    // 0x3613c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3613c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3613c8: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x3613c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_3613cc:
    // 0x3613cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3613d0: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3613d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x3613d4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x3613d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3613d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3613D8u;
    {
        const bool branch_taken_0x3613d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613d8) {
            ctx->pc = 0x3613DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3613D8u;
            // 0x3613dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3613ECu;
            goto label_3613ec;
        }
    }
    ctx->pc = 0x3613E0u;
    // 0x3613e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3613e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3613e4: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x3613e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
    // 0x3613e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3613e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3613ec:
    // 0x3613ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3613ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3613f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3613f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3613f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3613f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3613f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3613f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3613fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3613fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361400: 0x3e00008  jr          $ra
    ctx->pc = 0x361400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361400u;
            // 0x361404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361408u;
    // 0x361408: 0x0  nop
    ctx->pc = 0x361408u;
    // NOP
    // 0x36140c: 0x0  nop
    ctx->pc = 0x36140cu;
    // NOP
}
