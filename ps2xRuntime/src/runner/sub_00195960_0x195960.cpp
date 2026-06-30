#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195960
// Address: 0x195960 - 0x195b28
void sub_00195960_0x195960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195960_0x195960");
#endif

    switch (ctx->pc) {
        case 0x1959b0u: goto label_1959b0;
        case 0x1959c4u: goto label_1959c4;
        case 0x1959d4u: goto label_1959d4;
        case 0x1959f0u: goto label_1959f0;
        case 0x195a00u: goto label_195a00;
        case 0x195a0cu: goto label_195a0c;
        case 0x195a18u: goto label_195a18;
        case 0x195a24u: goto label_195a24;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ae0u: goto label_195ae0;
        default: break;
    }

    ctx->pc = 0x195960u;

    // 0x195960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x195964: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195968: 0x24d3fffc  addiu       $s3, $a2, -0x4
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x19596c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x195978: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x195978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19597c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19597cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x195980: 0x24b40004  addiu       $s4, $a1, 0x4
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x195984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195988: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x195988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19598c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x19598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x195990: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x195990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x195994: 0x1a600027  blez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x195994u;
    {
        const bool branch_taken_0x195994 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x195998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195994u;
            // 0x195998: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195994) {
            ctx->pc = 0x195A34u;
            goto label_195a34;
        }
    }
    ctx->pc = 0x19599Cu;
    // 0x19599c: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
    // 0x1959a0: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
    // 0x1959a4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1959a8: 0x2928021  addu        $s0, $s4, $s2
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1959ac: 0x0  nop
    ctx->pc = 0x1959acu;
    // NOP
label_1959b0:
    // 0x1959b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1959b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1959b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959b8: 0x26e58380  addiu       $a1, $s7, -0x7C80
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935424));
    // 0x1959bc: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1959BCu;
    SET_GPR_U32(ctx, 31, 0x1959C4u);
    ctx->pc = 0x1959C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1959BCu;
            // 0x1959c0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959C4u; }
        if (ctx->pc != 0x1959C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959C4u; }
        if (ctx->pc != 0x1959C4u) { return; }
    }
    ctx->pc = 0x1959C4u;
label_1959c4:
    // 0x1959c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1959C4u;
    {
        const bool branch_taken_0x1959c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1959C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1959C4u;
            // 0x1959c8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959c4) {
            ctx->pc = 0x1959E0u;
            goto label_1959e0;
        }
    }
    ctx->pc = 0x1959CCu;
    // 0x1959cc: 0xc049824  jal         func_126090
    ctx->pc = 0x1959CCu;
    SET_GPR_U32(ctx, 31, 0x1959D4u);
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959D4u; }
        if (ctx->pc != 0x1959D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959D4u; }
        if (ctx->pc != 0x1959D4u) { return; }
    }
    ctx->pc = 0x1959D4u;
label_1959d4:
    // 0x1959d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1959d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959d8: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x1959d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x1959dc: 0xae2303b8  sw          $v1, 0x3B8($s1)
    ctx->pc = 0x1959dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 3));
label_1959e0:
    // 0x1959e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1959e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959e4: 0x26c58388  addiu       $a1, $s6, -0x7C78
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935432));
    // 0x1959e8: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1959E8u;
    SET_GPR_U32(ctx, 31, 0x1959F0u);
    ctx->pc = 0x1959ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1959E8u;
            // 0x1959ec: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959F0u; }
        if (ctx->pc != 0x1959F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959F0u; }
        if (ctx->pc != 0x1959F0u) { return; }
    }
    ctx->pc = 0x1959F0u;
label_1959f0:
    // 0x1959f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1959F0u;
    {
        const bool branch_taken_0x1959f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1959F0u;
            // 0x1959f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959f0) {
            ctx->pc = 0x195A1Cu;
            goto label_195a1c;
        }
    }
    ctx->pc = 0x1959F8u;
    // 0x1959f8: 0xc049824  jal         func_126090
    ctx->pc = 0x1959F8u;
    SET_GPR_U32(ctx, 31, 0x195A00u);
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A00u; }
        if (ctx->pc != 0x195A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A00u; }
        if (ctx->pc != 0x195A00u) { return; }
    }
    ctx->pc = 0x195A00u;
label_195a00:
    // 0x195a00: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x195a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x195a04: 0xc049824  jal         func_126090
    ctx->pc = 0x195A04u;
    SET_GPR_U32(ctx, 31, 0x195A0Cu);
    ctx->pc = 0x195A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195A04u;
            // 0x195a08: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A0Cu; }
        if (ctx->pc != 0x195A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A0Cu; }
        if (ctx->pc != 0x195A0Cu) { return; }
    }
    ctx->pc = 0x195A0Cu;
label_195a0c:
    // 0x195a0c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x195a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x195a10: 0xc049824  jal         func_126090
    ctx->pc = 0x195A10u;
    SET_GPR_U32(ctx, 31, 0x195A18u);
    ctx->pc = 0x195A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195A10u;
            // 0x195a14: 0xae220384  sw          $v0, 0x384($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A18u; }
        if (ctx->pc != 0x195A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A18u; }
        if (ctx->pc != 0x195A18u) { return; }
    }
    ctx->pc = 0x195A18u;
label_195a18:
    // 0x195a18: 0xae220388  sw          $v0, 0x388($s1)
    ctx->pc = 0x195a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 904), GPR_U32(ctx, 2));
label_195a1c:
    // 0x195a1c: 0xc064b62  jal         func_192D88
    ctx->pc = 0x195A1Cu;
    SET_GPR_U32(ctx, 31, 0x195A24u);
    ctx->pc = 0x195A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195A1Cu;
            // 0x195a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A24u; }
        if (ctx->pc != 0x195A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A24u; }
        if (ctx->pc != 0x195A24u) { return; }
    }
    ctx->pc = 0x195A24u;
label_195a24:
    // 0x195a24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A24u;
            // 0x195a28: 0x253182a  slt         $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A34u;
            goto label_195a34;
        }
    }
    ctx->pc = 0x195A2Cu;
    // 0x195a2c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x195A2Cu;
    {
        const bool branch_taken_0x195a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A2Cu;
            // 0x195a30: 0x2928021  addu        $s0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a2c) {
            ctx->pc = 0x1959B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1959b0;
        }
    }
    ctx->pc = 0x195A34u;
label_195a34:
    // 0x195a34: 0x8e230380  lw          $v1, 0x380($s1)
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x195a38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195a3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x195a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a44: 0x38640008  xori        $a0, $v1, 0x8
    ctx->pc = 0x195a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x195a48: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x195a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x195a4c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x195a4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x195a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195a54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a58: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x195a58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x195a5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195a60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x195a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195a64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x195a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195a68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x195a68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195a6c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x195a6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195a70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195a74: 0x3e00008  jr          $ra
    ctx->pc = 0x195A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A74u;
            // 0x195a78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195A7Cu;
    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
    // 0x195a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195a8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x195a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195a9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x195a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195aa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x195aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195aa8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195aac: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x195AACu;
    SET_GPR_U32(ctx, 31, 0x195AB4u);
    ctx->pc = 0x195AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195AACu;
            // 0x195ab0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AB4u; }
        if (ctx->pc != 0x195AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AB4u; }
        if (ctx->pc != 0x195AB4u) { return; }
    }
    ctx->pc = 0x195AB4u;
label_195ab4:
    // 0x195ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195abc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195ABCu;
    {
        const bool branch_taken_0x195abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195ABCu;
            // 0x195ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195abc) {
            ctx->pc = 0x195AD8u;
            goto label_195ad8;
        }
    }
    ctx->pc = 0x195AC4u;
    // 0x195ac4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195ac8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195acc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195ACCu;
    {
        const bool branch_taken_0x195acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195ACCu;
            // 0x195ad0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195acc) {
            ctx->pc = 0x195AECu;
            goto label_195aec;
        }
    }
    ctx->pc = 0x195AD4u;
    // 0x195ad4: 0x0  nop
    ctx->pc = 0x195ad4u;
    // NOP
label_195ad8:
    // 0x195ad8: 0xc064b62  jal         func_192D88
    ctx->pc = 0x195AD8u;
    SET_GPR_U32(ctx, 31, 0x195AE0u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AE0u; }
        if (ctx->pc != 0x195AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AE0u; }
        if (ctx->pc != 0x195AE0u) { return; }
    }
    ctx->pc = 0x195AE0u;
label_195ae0:
    // 0x195ae0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195ae4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195ae8: 0x2042823  subu        $a1, $s0, $a0
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_195aec:
    // 0x195aec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195af0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x195af4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x195af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x195af8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x195af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x195afc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x195afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x195b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195b0c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x195b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x195b10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195b18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x195B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B1Cu;
            // 0x195b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195B24u;
    // 0x195b24: 0x0  nop
    ctx->pc = 0x195b24u;
    // NOP
}
