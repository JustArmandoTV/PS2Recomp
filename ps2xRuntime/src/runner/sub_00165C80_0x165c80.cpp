#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165C80
// Address: 0x165c80 - 0x165df8
void sub_00165C80_0x165c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C80_0x165c80");
#endif

    switch (ctx->pc) {
        case 0x165c80u: goto label_165c80;
        case 0x165c84u: goto label_165c84;
        case 0x165c88u: goto label_165c88;
        case 0x165c8cu: goto label_165c8c;
        case 0x165c90u: goto label_165c90;
        case 0x165c94u: goto label_165c94;
        case 0x165c98u: goto label_165c98;
        case 0x165c9cu: goto label_165c9c;
        case 0x165ca0u: goto label_165ca0;
        case 0x165ca4u: goto label_165ca4;
        case 0x165ca8u: goto label_165ca8;
        case 0x165cacu: goto label_165cac;
        case 0x165cb0u: goto label_165cb0;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cb8u: goto label_165cb8;
        case 0x165cbcu: goto label_165cbc;
        case 0x165cc0u: goto label_165cc0;
        case 0x165cc4u: goto label_165cc4;
        case 0x165cc8u: goto label_165cc8;
        case 0x165cccu: goto label_165ccc;
        case 0x165cd0u: goto label_165cd0;
        case 0x165cd4u: goto label_165cd4;
        case 0x165cd8u: goto label_165cd8;
        case 0x165cdcu: goto label_165cdc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce4u: goto label_165ce4;
        case 0x165ce8u: goto label_165ce8;
        case 0x165cecu: goto label_165cec;
        case 0x165cf0u: goto label_165cf0;
        case 0x165cf4u: goto label_165cf4;
        case 0x165cf8u: goto label_165cf8;
        case 0x165cfcu: goto label_165cfc;
        case 0x165d00u: goto label_165d00;
        case 0x165d04u: goto label_165d04;
        case 0x165d08u: goto label_165d08;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d10u: goto label_165d10;
        case 0x165d14u: goto label_165d14;
        case 0x165d18u: goto label_165d18;
        case 0x165d1cu: goto label_165d1c;
        case 0x165d20u: goto label_165d20;
        case 0x165d24u: goto label_165d24;
        case 0x165d28u: goto label_165d28;
        case 0x165d2cu: goto label_165d2c;
        case 0x165d30u: goto label_165d30;
        case 0x165d34u: goto label_165d34;
        case 0x165d38u: goto label_165d38;
        case 0x165d3cu: goto label_165d3c;
        case 0x165d40u: goto label_165d40;
        case 0x165d44u: goto label_165d44;
        case 0x165d48u: goto label_165d48;
        case 0x165d4cu: goto label_165d4c;
        case 0x165d50u: goto label_165d50;
        case 0x165d54u: goto label_165d54;
        case 0x165d58u: goto label_165d58;
        case 0x165d5cu: goto label_165d5c;
        case 0x165d60u: goto label_165d60;
        case 0x165d64u: goto label_165d64;
        case 0x165d68u: goto label_165d68;
        case 0x165d6cu: goto label_165d6c;
        case 0x165d70u: goto label_165d70;
        case 0x165d74u: goto label_165d74;
        case 0x165d78u: goto label_165d78;
        case 0x165d7cu: goto label_165d7c;
        case 0x165d80u: goto label_165d80;
        case 0x165d84u: goto label_165d84;
        case 0x165d88u: goto label_165d88;
        case 0x165d8cu: goto label_165d8c;
        case 0x165d90u: goto label_165d90;
        case 0x165d94u: goto label_165d94;
        case 0x165d98u: goto label_165d98;
        case 0x165d9cu: goto label_165d9c;
        case 0x165da0u: goto label_165da0;
        case 0x165da4u: goto label_165da4;
        case 0x165da8u: goto label_165da8;
        case 0x165dacu: goto label_165dac;
        case 0x165db0u: goto label_165db0;
        case 0x165db4u: goto label_165db4;
        case 0x165db8u: goto label_165db8;
        case 0x165dbcu: goto label_165dbc;
        case 0x165dc0u: goto label_165dc0;
        case 0x165dc4u: goto label_165dc4;
        case 0x165dc8u: goto label_165dc8;
        case 0x165dccu: goto label_165dcc;
        case 0x165dd0u: goto label_165dd0;
        case 0x165dd4u: goto label_165dd4;
        case 0x165dd8u: goto label_165dd8;
        case 0x165ddcu: goto label_165ddc;
        case 0x165de0u: goto label_165de0;
        case 0x165de4u: goto label_165de4;
        case 0x165de8u: goto label_165de8;
        case 0x165decu: goto label_165dec;
        case 0x165df0u: goto label_165df0;
        case 0x165df4u: goto label_165df4;
        default: break;
    }

    ctx->pc = 0x165c80u;

label_165c80:
    // 0x165c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_165c84:
    // 0x165c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165c88:
    // 0x165c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165c8c:
    // 0x165c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165c90:
    // 0x165c90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_165c94:
    // 0x165c94: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_165c98:
    // 0x165c98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_165c9c:
    // 0x165c9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_165ca0:
    // 0x165ca0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_165ca4:
    // 0x165ca4: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_165ca8:
    if (ctx->pc == 0x165CA8u) {
        ctx->pc = 0x165CA8u;
            // 0x165ca8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x165CACu;
        goto label_165cac;
    }
    ctx->pc = 0x165CA4u;
    {
        const bool branch_taken_0x165ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CA4u;
            // 0x165ca8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ca4) {
            ctx->pc = 0x165DB4u;
            goto label_165db4;
        }
    }
    ctx->pc = 0x165CACu;
label_165cac:
    // 0x165cac: 0xc05df6e  jal         func_177DB8
label_165cb0:
    if (ctx->pc == 0x165CB0u) {
        ctx->pc = 0x165CB0u;
            // 0x165cb0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x165CB4u;
        goto label_165cb4;
    }
    ctx->pc = 0x165CACu;
    SET_GPR_U32(ctx, 31, 0x165CB4u);
    ctx->pc = 0x165CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CACu;
            // 0x165cb0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CB4u; }
        if (ctx->pc != 0x165CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CB4u; }
        if (ctx->pc != 0x165CB4u) { return; }
    }
    ctx->pc = 0x165CB4u;
label_165cb4:
    // 0x165cb4: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_165cb8:
    if (ctx->pc == 0x165CB8u) {
        ctx->pc = 0x165CB8u;
            // 0x165cb8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x165CBCu;
        goto label_165cbc;
    }
    ctx->pc = 0x165CB4u;
    {
        const bool branch_taken_0x165cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165cb4) {
            ctx->pc = 0x165CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165CB4u;
            // 0x165cb8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165DB4u;
            goto label_165db4;
        }
    }
    ctx->pc = 0x165CBCu;
label_165cbc:
    // 0x165cbc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_165cc0:
    // 0x165cc0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_165cc4:
    // 0x165cc4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x165cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_165cc8:
    // 0x165cc8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x165cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_165ccc:
    // 0x165ccc: 0x40f809  jalr        $v0
label_165cd0:
    if (ctx->pc == 0x165CD0u) {
        ctx->pc = 0x165CD0u;
            // 0x165cd0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x165CD4u;
        goto label_165cd4;
    }
    ctx->pc = 0x165CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165CD4u);
        ctx->pc = 0x165CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CCCu;
            // 0x165cd0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x165CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165CD4u; }
            if (ctx->pc != 0x165CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x165CD4u;
label_165cd4:
    // 0x165cd4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_165cd8:
    // 0x165cd8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x165cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_165cdc:
    // 0x165cdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165ce0:
    // 0x165ce0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_165ce4:
    // 0x165ce4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x165ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_165ce8:
    // 0x165ce8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x165ce8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_165cec:
    // 0x165cec: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x165cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_165cf0:
    // 0x165cf0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x165cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_165cf4:
    // 0x165cf4: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x165cf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_165cf8:
    // 0x165cf8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_165cfc:
    // 0x165cfc: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x165cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_165d00:
    // 0x165d00: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x165d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_165d04:
    // 0x165d04: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x165d04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_165d08:
    // 0x165d08: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x165d08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_165d0c:
    // 0x165d0c: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_165d10:
    if (ctx->pc == 0x165D10u) {
        ctx->pc = 0x165D10u;
            // 0x165d10: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x165D14u;
        goto label_165d14;
    }
    ctx->pc = 0x165D0Cu;
    {
        const bool branch_taken_0x165d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x165D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D0Cu;
            // 0x165d10: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d0c) {
            ctx->pc = 0x165D68u;
            goto label_165d68;
        }
    }
    ctx->pc = 0x165D14u;
label_165d14:
    // 0x165d14: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x165d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_165d18:
    // 0x165d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165d1c:
    // 0x165d1c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_165d20:
    // 0x165d20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_165d24:
    // 0x165d24: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_165d28:
    if (ctx->pc == 0x165D28u) {
        ctx->pc = 0x165D28u;
            // 0x165d28: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x165D2Cu;
        goto label_165d2c;
    }
    ctx->pc = 0x165D24u;
    {
        const bool branch_taken_0x165d24 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x165D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D24u;
            // 0x165d28: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d24) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165D2Cu;
label_165d2c:
    // 0x165d2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x165d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165d30:
    // 0x165d30: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_165d34:
    // 0x165d34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_165d38:
    // 0x165d38: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x165d38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_165d3c:
    // 0x165d3c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x165d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_165d40:
    // 0x165d40: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x165d40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_165d44:
    // 0x165d44: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_165d48:
    // 0x165d48: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x165d48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_165d4c:
    // 0x165d4c: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x165d4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_165d50:
    // 0x165d50: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x165d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_165d54:
    // 0x165d54: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_165d58:
    if (ctx->pc == 0x165D58u) {
        ctx->pc = 0x165D58u;
            // 0x165d58: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x165D5Cu;
        goto label_165d5c;
    }
    ctx->pc = 0x165D54u;
    {
        const bool branch_taken_0x165d54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D54u;
            // 0x165d58: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d54) {
            ctx->pc = 0x165D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165d30;
        }
    }
    ctx->pc = 0x165D5Cu;
label_165d5c:
    // 0x165d5c: 0x1000000d  b           . + 4 + (0xD << 2)
label_165d60:
    if (ctx->pc == 0x165D60u) {
        ctx->pc = 0x165D60u;
            // 0x165d60: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x165D64u;
        goto label_165d64;
    }
    ctx->pc = 0x165D5Cu;
    {
        const bool branch_taken_0x165d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D5Cu;
            // 0x165d60: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d5c) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165D64u;
label_165d64:
    // 0x165d64: 0x0  nop
    ctx->pc = 0x165d64u;
    // NOP
label_165d68:
    // 0x165d68: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_165d6c:
    if (ctx->pc == 0x165D6Cu) {
        ctx->pc = 0x165D6Cu;
            // 0x165d6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x165D70u;
        goto label_165d70;
    }
    ctx->pc = 0x165D68u;
    {
        const bool branch_taken_0x165d68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x165D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D68u;
            // 0x165d6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d68) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165D70u;
label_165d70:
    // 0x165d70: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_165d74:
    // 0x165d74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x165d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_165d78:
    // 0x165d78: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x165d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_165d7c:
    // 0x165d7c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_165d80:
    // 0x165d80: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x165d80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_165d84:
    // 0x165d84: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x165d84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_165d88:
    // 0x165d88: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_165d8c:
    if (ctx->pc == 0x165D8Cu) {
        ctx->pc = 0x165D8Cu;
            // 0x165d8c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x165D90u;
        goto label_165d90;
    }
    ctx->pc = 0x165D88u;
    {
        const bool branch_taken_0x165d88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D88u;
            // 0x165d8c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d88) {
            ctx->pc = 0x165D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165d70;
        }
    }
    ctx->pc = 0x165D90u;
label_165d90:
    // 0x165d90: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x165d90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_165d94:
    // 0x165d94: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_165d98:
    // 0x165d98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x165d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165d9c:
    // 0x165d9c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x165d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_165da0:
    // 0x165da0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x165da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_165da4:
    // 0x165da4: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x165da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_165da8:
    // 0x165da8: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x165da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_165dac:
    // 0x165dac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_165db0:
    // 0x165db0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x165db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_165db4:
    // 0x165db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165db8:
    // 0x165db8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_165dbc:
    if (ctx->pc == 0x165DBCu) {
        ctx->pc = 0x165DBCu;
            // 0x165dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x165DC0u;
        goto label_165dc0;
    }
    ctx->pc = 0x165DB8u;
    {
        const bool branch_taken_0x165db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165db8) {
            ctx->pc = 0x165DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165DB8u;
            // 0x165dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165DE0u;
            goto label_165de0;
        }
    }
    ctx->pc = 0x165DC0u;
label_165dc0:
    // 0x165dc0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x165dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_165dc4:
    // 0x165dc4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x165dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_165dc8:
    // 0x165dc8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x165dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_165dcc:
    // 0x165dcc: 0x60f809  jalr        $v1
label_165dd0:
    if (ctx->pc == 0x165DD0u) {
        ctx->pc = 0x165DD0u;
            // 0x165dd0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x165DD4u;
        goto label_165dd4;
    }
    ctx->pc = 0x165DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165DD4u);
        ctx->pc = 0x165DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DCCu;
            // 0x165dd0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x165DD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165DD4u; }
            if (ctx->pc != 0x165DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x165DD4u;
label_165dd4:
    // 0x165dd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x165dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_165dd8:
    // 0x165dd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x165dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_165ddc:
    // 0x165ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165de0:
    // 0x165de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_165de4:
    // 0x165de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165de8:
    // 0x165de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_165dec:
    // 0x165dec: 0x3e00008  jr          $ra
label_165df0:
    if (ctx->pc == 0x165DF0u) {
        ctx->pc = 0x165DF0u;
            // 0x165df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x165DF4u;
        goto label_165df4;
    }
    ctx->pc = 0x165DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DECu;
            // 0x165df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165DF4u;
label_165df4:
    // 0x165df4: 0x0  nop
    ctx->pc = 0x165df4u;
    // NOP
}
