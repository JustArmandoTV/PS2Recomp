#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190A58
// Address: 0x190a58 - 0x190b60
void sub_00190A58_0x190a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190A58_0x190a58");
#endif

    switch (ctx->pc) {
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        default: break;
    }

    ctx->pc = 0x190a58u;

label_190a58:
    // 0x190a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190a5c:
    // 0x190a5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x190a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_190a60:
    // 0x190a60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x190a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_190a64:
    // 0x190a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_190a68:
    // 0x190a68: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x190a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190a6c:
    // 0x190a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x190a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_190a70:
    // 0x190a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190a74:
    // 0x190a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x190a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_190a78:
    // 0x190a78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x190a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190a7c:
    // 0x190a7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_190a80:
    // 0x190a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190a84:
    // 0x190a84: 0xc064928  jal         func_1924A0
label_190a88:
    if (ctx->pc == 0x190A88u) {
        ctx->pc = 0x190A88u;
            // 0x190a88: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x190A8Cu;
        goto label_190a8c;
    }
    ctx->pc = 0x190A84u;
    SET_GPR_U32(ctx, 31, 0x190A8Cu);
    ctx->pc = 0x190A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A84u;
            // 0x190a88: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A8Cu; }
        if (ctx->pc != 0x190A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A8Cu; }
        if (ctx->pc != 0x190A8Cu) { return; }
    }
    ctx->pc = 0x190A8Cu;
label_190a8c:
    // 0x190a8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x190a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190a90:
    // 0x190a90: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_190a94:
    // 0x190a94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x190a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_190a98:
    // 0x190a98: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_190a9c:
    if (ctx->pc == 0x190A9Cu) {
        ctx->pc = 0x190A9Cu;
            // 0x190a9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190AA0u;
        goto label_190aa0;
    }
    ctx->pc = 0x190A98u;
    {
        const bool branch_taken_0x190a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A98u;
            // 0x190a9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a98) {
            ctx->pc = 0x190AF0u;
            goto label_190af0;
        }
    }
    ctx->pc = 0x190AA0u;
label_190aa0:
    // 0x190aa0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x190aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_190aa4:
    // 0x190aa4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_190aa8:
    if (ctx->pc == 0x190AA8u) {
        ctx->pc = 0x190AA8u;
            // 0x190aa8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x190AACu;
        goto label_190aac;
    }
    ctx->pc = 0x190AA4u;
    {
        const bool branch_taken_0x190aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AA4u;
            // 0x190aa8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190aa4) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x190AACu;
label_190aac:
    // 0x190aac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_190ab0:
    // 0x190ab0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_190ab4:
    if (ctx->pc == 0x190AB4u) {
        ctx->pc = 0x190AB4u;
            // 0x190ab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190AB8u;
        goto label_190ab8;
    }
    ctx->pc = 0x190AB0u;
    {
        const bool branch_taken_0x190ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AB0u;
            // 0x190ab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ab0) {
            ctx->pc = 0x190AD0u;
            goto label_190ad0;
        }
    }
    ctx->pc = 0x190AB8u;
label_190ab8:
    // 0x190ab8: 0x10000023  b           . + 4 + (0x23 << 2)
label_190abc:
    if (ctx->pc == 0x190ABCu) {
        ctx->pc = 0x190ABCu;
            // 0x190abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x190AC0u;
        goto label_190ac0;
    }
    ctx->pc = 0x190AB8u;
    {
        const bool branch_taken_0x190ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AB8u;
            // 0x190abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ab8) {
            ctx->pc = 0x190B48u;
            goto label_190b48;
        }
    }
    ctx->pc = 0x190AC0u;
label_190ac0:
    // 0x190ac0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_190ac4:
    if (ctx->pc == 0x190AC4u) {
        ctx->pc = 0x190AC4u;
            // 0x190ac4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190AC8u;
        goto label_190ac8;
    }
    ctx->pc = 0x190AC0u;
    {
        const bool branch_taken_0x190ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AC0u;
            // 0x190ac4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac0) {
            ctx->pc = 0x190B10u;
            goto label_190b10;
        }
    }
    ctx->pc = 0x190AC8u;
label_190ac8:
    // 0x190ac8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_190acc:
    if (ctx->pc == 0x190ACCu) {
        ctx->pc = 0x190ACCu;
            // 0x190acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x190AD0u;
        goto label_190ad0;
    }
    ctx->pc = 0x190AC8u;
    {
        const bool branch_taken_0x190ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AC8u;
            // 0x190acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac8) {
            ctx->pc = 0x190B48u;
            goto label_190b48;
        }
    }
    ctx->pc = 0x190AD0u;
label_190ad0:
    // 0x190ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190ad4:
    // 0x190ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190ad8:
    // 0x190ad8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x190ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190adc:
    // 0x190adc: 0xc0642d8  jal         func_190B60
label_190ae0:
    if (ctx->pc == 0x190AE0u) {
        ctx->pc = 0x190AE0u;
            // 0x190ae0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x190AE4u;
        goto label_190ae4;
    }
    ctx->pc = 0x190ADCu;
    SET_GPR_U32(ctx, 31, 0x190AE4u);
    ctx->pc = 0x190AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190ADCu;
            // 0x190ae0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190B60u;
    if (runtime->hasFunction(0x190B60u)) {
        auto targetFn = runtime->lookupFunction(0x190B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AE4u; }
        if (ctx->pc != 0x190AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190B60_0x190b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AE4u; }
        if (ctx->pc != 0x190AE4u) { return; }
    }
    ctx->pc = 0x190AE4u;
label_190ae4:
    // 0x190ae4: 0x10000017  b           . + 4 + (0x17 << 2)
label_190ae8:
    if (ctx->pc == 0x190AE8u) {
        ctx->pc = 0x190AE8u;
            // 0x190ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190AECu;
        goto label_190aec;
    }
    ctx->pc = 0x190AE4u;
    {
        const bool branch_taken_0x190ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AE4u;
            // 0x190ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ae4) {
            ctx->pc = 0x190B44u;
            goto label_190b44;
        }
    }
    ctx->pc = 0x190AECu;
label_190aec:
    // 0x190aec: 0x0  nop
    ctx->pc = 0x190aecu;
    // NOP
label_190af0:
    // 0x190af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190af4:
    // 0x190af4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190af8:
    // 0x190af8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x190af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190afc:
    // 0x190afc: 0xc0643f2  jal         func_190FC8
label_190b00:
    if (ctx->pc == 0x190B00u) {
        ctx->pc = 0x190B00u;
            // 0x190b00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x190B04u;
        goto label_190b04;
    }
    ctx->pc = 0x190AFCu;
    SET_GPR_U32(ctx, 31, 0x190B04u);
    ctx->pc = 0x190B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190AFCu;
            // 0x190b00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190FC8u;
    if (runtime->hasFunction(0x190FC8u)) {
        auto targetFn = runtime->lookupFunction(0x190FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B04u; }
        if (ctx->pc != 0x190B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190FC8_0x190fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B04u; }
        if (ctx->pc != 0x190B04u) { return; }
    }
    ctx->pc = 0x190B04u;
label_190b04:
    // 0x190b04: 0x1000000f  b           . + 4 + (0xF << 2)
label_190b08:
    if (ctx->pc == 0x190B08u) {
        ctx->pc = 0x190B08u;
            // 0x190b08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190B0Cu;
        goto label_190b0c;
    }
    ctx->pc = 0x190B04u;
    {
        const bool branch_taken_0x190b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B04u;
            // 0x190b08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b04) {
            ctx->pc = 0x190B44u;
            goto label_190b44;
        }
    }
    ctx->pc = 0x190B0Cu;
label_190b0c:
    // 0x190b0c: 0x0  nop
    ctx->pc = 0x190b0cu;
    // NOP
label_190b10:
    // 0x190b10: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x190b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_190b14:
    // 0x190b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190b18:
    // 0x190b18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x190b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190b1c:
    // 0x190b1c: 0xc06460e  jal         func_191838
label_190b20:
    if (ctx->pc == 0x190B20u) {
        ctx->pc = 0x190B20u;
            // 0x190b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190B24u;
        goto label_190b24;
    }
    ctx->pc = 0x190B1Cu;
    SET_GPR_U32(ctx, 31, 0x190B24u);
    ctx->pc = 0x190B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B1Cu;
            // 0x190b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x191838u;
    if (runtime->hasFunction(0x191838u)) {
        auto targetFn = runtime->lookupFunction(0x191838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B24u; }
        if (ctx->pc != 0x190B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00191838_0x191838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B24u; }
        if (ctx->pc != 0x190B24u) { return; }
    }
    ctx->pc = 0x190B24u;
label_190b24:
    // 0x190b24: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_190b28:
    // 0x190b28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_190b2c:
    if (ctx->pc == 0x190B2Cu) {
        ctx->pc = 0x190B2Cu;
            // 0x190b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190B30u;
        goto label_190b30;
    }
    ctx->pc = 0x190B28u;
    {
        const bool branch_taken_0x190b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b28) {
            ctx->pc = 0x190B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190B28u;
            // 0x190b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190B44u;
            goto label_190b44;
        }
    }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0xde2600a8  ld          $a2, 0xA8($s1)
    ctx->pc = 0x190b30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 168)));
label_190b34:
    // 0x190b34: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_190b38:
    // 0x190b38: 0x40f809  jalr        $v0
label_190b3c:
    if (ctx->pc == 0x190B3Cu) {
        ctx->pc = 0x190B3Cu;
            // 0x190b3c: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->pc = 0x190B40u;
        goto label_190b40;
    }
    ctx->pc = 0x190B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190B40u);
        ctx->pc = 0x190B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B38u;
            // 0x190b3c: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x190B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190B40u; }
            if (ctx->pc != 0x190B40u) { return; }
        }
        }
    }
    ctx->pc = 0x190B40u;
label_190b40:
    // 0x190b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190b44:
    // 0x190b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190b48:
    // 0x190b48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_190b4c:
    // 0x190b4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190b50:
    // 0x190b50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x190b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_190b54:
    // 0x190b54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190b58:
    // 0x190b58: 0x3e00008  jr          $ra
label_190b5c:
    if (ctx->pc == 0x190B5Cu) {
        ctx->pc = 0x190B5Cu;
            // 0x190b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x190B60u;
        goto label_fallthrough_0x190b58;
    }
    ctx->pc = 0x190B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B58u;
            // 0x190b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x190b58:
    ctx->pc = 0x190B60u;
}
