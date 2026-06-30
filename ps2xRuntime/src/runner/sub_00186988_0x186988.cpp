#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186988
// Address: 0x186988 - 0x186b28
void sub_00186988_0x186988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186988_0x186988");
#endif

    switch (ctx->pc) {
        case 0x186988u: goto label_186988;
        case 0x18698cu: goto label_18698c;
        case 0x186990u: goto label_186990;
        case 0x186994u: goto label_186994;
        case 0x186998u: goto label_186998;
        case 0x18699cu: goto label_18699c;
        case 0x1869a0u: goto label_1869a0;
        case 0x1869a4u: goto label_1869a4;
        case 0x1869a8u: goto label_1869a8;
        case 0x1869acu: goto label_1869ac;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869b4u: goto label_1869b4;
        case 0x1869b8u: goto label_1869b8;
        case 0x1869bcu: goto label_1869bc;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869c4u: goto label_1869c4;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869ccu: goto label_1869cc;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869d8u: goto label_1869d8;
        case 0x1869dcu: goto label_1869dc;
        case 0x1869e0u: goto label_1869e0;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        default: break;
    }

    ctx->pc = 0x186988u;

label_186988:
    // 0x186988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18698c:
    // 0x18698c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x18698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_186990:
    // 0x186990: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x186990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_186994:
    // 0x186994: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x186994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_186998:
    // 0x186998: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x186998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18699c:
    // 0x18699c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1869a0:
    if (ctx->pc == 0x1869A0u) {
        ctx->pc = 0x1869A0u;
            // 0x1869a0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x1869A4u;
        goto label_1869a4;
    }
    ctx->pc = 0x18699Cu;
    {
        const bool branch_taken_0x18699c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1869A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18699Cu;
            // 0x1869a0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18699c) {
            ctx->pc = 0x1869C0u;
            goto label_1869c0;
        }
    }
    ctx->pc = 0x1869A4u;
label_1869a4:
    // 0x1869a4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1869a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1869a8:
    // 0x1869a8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1869a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1869ac:
    // 0x1869ac: 0x24847d60  addiu       $a0, $a0, 0x7D60
    ctx->pc = 0x1869acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32096));
label_1869b0:
    // 0x1869b0: 0xc0618a8  jal         func_1862A0
label_1869b4:
    if (ctx->pc == 0x1869B4u) {
        ctx->pc = 0x1869B4u;
            // 0x1869b4: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->pc = 0x1869B8u;
        goto label_1869b8;
    }
    ctx->pc = 0x1869B0u;
    SET_GPR_U32(ctx, 31, 0x1869B8u);
    ctx->pc = 0x1869B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869B0u;
            // 0x1869b4: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869B8u; }
        if (ctx->pc != 0x1869B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869B8u; }
        if (ctx->pc != 0x1869B8u) { return; }
    }
    ctx->pc = 0x1869B8u;
label_1869b8:
    // 0x1869b8: 0x10000042  b           . + 4 + (0x42 << 2)
label_1869bc:
    if (ctx->pc == 0x1869BCu) {
        ctx->pc = 0x1869BCu;
            // 0x1869bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1869C0u;
        goto label_1869c0;
    }
    ctx->pc = 0x1869B8u;
    {
        const bool branch_taken_0x1869b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869B8u;
            // 0x1869bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869b8) {
            ctx->pc = 0x186AC4u;
            goto label_186ac4;
        }
    }
    ctx->pc = 0x1869C0u;
label_1869c0:
    // 0x1869c0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1869c4:
    // 0x1869c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1869c8:
    if (ctx->pc == 0x1869C8u) {
        ctx->pc = 0x1869C8u;
            // 0x1869c8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x1869CCu;
        goto label_1869cc;
    }
    ctx->pc = 0x1869C4u;
    {
        const bool branch_taken_0x1869c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1869C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869C4u;
            // 0x1869c8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869c4) {
            ctx->pc = 0x1869E8u;
            goto label_1869e8;
        }
    }
    ctx->pc = 0x1869CCu;
label_1869cc:
    // 0x1869cc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1869ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1869d0:
    // 0x1869d0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1869d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1869d4:
    // 0x1869d4: 0x24847d70  addiu       $a0, $a0, 0x7D70
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32112));
label_1869d8:
    // 0x1869d8: 0xc0618a8  jal         func_1862A0
label_1869dc:
    if (ctx->pc == 0x1869DCu) {
        ctx->pc = 0x1869DCu;
            // 0x1869dc: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
        ctx->pc = 0x1869E0u;
        goto label_1869e0;
    }
    ctx->pc = 0x1869D8u;
    SET_GPR_U32(ctx, 31, 0x1869E0u);
    ctx->pc = 0x1869DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869D8u;
            // 0x1869dc: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869E0u; }
        if (ctx->pc != 0x1869E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869E0u; }
        if (ctx->pc != 0x1869E0u) { return; }
    }
    ctx->pc = 0x1869E0u;
label_1869e0:
    // 0x1869e0: 0x10000038  b           . + 4 + (0x38 << 2)
label_1869e4:
    if (ctx->pc == 0x1869E4u) {
        ctx->pc = 0x1869E4u;
            // 0x1869e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1869E8u;
        goto label_1869e8;
    }
    ctx->pc = 0x1869E0u;
    {
        const bool branch_taken_0x1869e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869E0u;
            // 0x1869e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869e0) {
            ctx->pc = 0x186AC4u;
            goto label_186ac4;
        }
    }
    ctx->pc = 0x1869E8u;
label_1869e8:
    // 0x1869e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1869ec:
    if (ctx->pc == 0x1869ECu) {
        ctx->pc = 0x1869ECu;
            // 0x1869ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1869F0u;
        goto label_1869f0;
    }
    ctx->pc = 0x1869E8u;
    {
        const bool branch_taken_0x1869e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1869ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869E8u;
            // 0x1869ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869e8) {
            ctx->pc = 0x186A10u;
            goto label_186a10;
        }
    }
    ctx->pc = 0x1869F0u;
label_1869f0:
    // 0x1869f0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1869f4:
    // 0x1869f4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_1869f8:
    if (ctx->pc == 0x1869F8u) {
        ctx->pc = 0x1869F8u;
            // 0x1869f8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1869FCu;
        goto label_1869fc;
    }
    ctx->pc = 0x1869F4u;
    {
        const bool branch_taken_0x1869f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869f4) {
            ctx->pc = 0x1869F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1869F4u;
            // 0x1869f8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186ABCu;
            goto label_186abc;
        }
    }
    ctx->pc = 0x1869FCu;
label_1869fc:
    // 0x1869fc: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1869fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_186a00:
    // 0x186a00: 0x40f809  jalr        $v0
label_186a04:
    if (ctx->pc == 0x186A04u) {
        ctx->pc = 0x186A04u;
            // 0x186a04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186A08u;
        goto label_186a08;
    }
    ctx->pc = 0x186A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186A08u);
        ctx->pc = 0x186A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A00u;
            // 0x186a04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186A08u; }
            if (ctx->pc != 0x186A08u) { return; }
        }
        }
    }
    ctx->pc = 0x186A08u;
label_186a08:
    // 0x186a08: 0x1000002c  b           . + 4 + (0x2C << 2)
label_186a0c:
    if (ctx->pc == 0x186A0Cu) {
        ctx->pc = 0x186A0Cu;
            // 0x186a0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x186A10u;
        goto label_186a10;
    }
    ctx->pc = 0x186A08u;
    {
        const bool branch_taken_0x186a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A08u;
            // 0x186a0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a08) {
            ctx->pc = 0x186ABCu;
            goto label_186abc;
        }
    }
    ctx->pc = 0x186A10u;
label_186a10:
    // 0x186a10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x186a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_186a14:
    // 0x186a14: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x186a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_186a18:
    // 0x186a18: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x186a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_186a1c:
    // 0x186a1c: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_186a20:
    if (ctx->pc == 0x186A20u) {
        ctx->pc = 0x186A20u;
            // 0x186a20: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x186A24u;
        goto label_186a24;
    }
    ctx->pc = 0x186A1Cu;
    {
        const bool branch_taken_0x186a1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A1Cu;
            // 0x186a20: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a1c) {
            ctx->pc = 0x186AB8u;
            goto label_186ab8;
        }
    }
    ctx->pc = 0x186A24u;
label_186a24:
    // 0x186a24: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x186a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_186a28:
    // 0x186a28: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x186a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_186a2c:
    // 0x186a2c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x186a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186a30:
    // 0x186a30: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x186a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186a34:
    // 0x186a34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_186a38:
    // 0x186a38: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x186a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_186a3c:
    // 0x186a3c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_186a40:
    if (ctx->pc == 0x186A40u) {
        ctx->pc = 0x186A40u;
            // 0x186a40: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->pc = 0x186A44u;
        goto label_186a44;
    }
    ctx->pc = 0x186A3Cu;
    {
        const bool branch_taken_0x186a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a3c) {
            ctx->pc = 0x186A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186A3Cu;
            // 0x186a40: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186A44u;
label_186a44:
    // 0x186a44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x186a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_186a48:
    // 0x186a48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x186a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_186a4c:
    // 0x186a4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x186a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_186a50:
    // 0x186a50: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x186a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186a54:
    // 0x186a54: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x186a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186a58:
    // 0x186a58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x186a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_186a5c:
    // 0x186a5c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x186a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_186a60:
    // 0x186a60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x186a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_186a64:
    // 0x186a64: 0x10000016  b           . + 4 + (0x16 << 2)
label_186a68:
    if (ctx->pc == 0x186A68u) {
        ctx->pc = 0x186A68u;
            // 0x186a68: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->pc = 0x186A6Cu;
        goto label_186a6c;
    }
    ctx->pc = 0x186A64u;
    {
        const bool branch_taken_0x186a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A64u;
            // 0x186a68: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a64) {
            ctx->pc = 0x186AC0u;
            goto label_186ac0;
        }
    }
    ctx->pc = 0x186A6Cu;
label_186a6c:
    // 0x186a6c: 0x0  nop
    ctx->pc = 0x186a6cu;
    // NOP
label_186a70:
    // 0x186a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186a74:
    // 0x186a74: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_186a78:
    if (ctx->pc == 0x186A78u) {
        ctx->pc = 0x186A78u;
            // 0x186a78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x186A7Cu;
        goto label_186a7c;
    }
    ctx->pc = 0x186A74u;
    {
        const bool branch_taken_0x186a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186a74) {
            ctx->pc = 0x186A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186A74u;
            // 0x186a78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186ABCu;
            goto label_186abc;
        }
    }
    ctx->pc = 0x186A7Cu;
label_186a7c:
    // 0x186a7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x186a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_186a80:
    // 0x186a80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186a84:
    // 0x186a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186a88:
    // 0x186a88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x186a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186a8c:
    // 0x186a8c: 0xc061c20  jal         func_187080
label_186a90:
    if (ctx->pc == 0x186A90u) {
        ctx->pc = 0x186A90u;
            // 0x186a90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186A94u;
        goto label_186a94;
    }
    ctx->pc = 0x186A8Cu;
    SET_GPR_U32(ctx, 31, 0x186A94u);
    ctx->pc = 0x186A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A8Cu;
            // 0x186a90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A94u; }
        if (ctx->pc != 0x186A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A94u; }
        if (ctx->pc != 0x186A94u) { return; }
    }
    ctx->pc = 0x186A94u;
label_186a94:
    // 0x186a94: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x186a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_186a98:
    // 0x186a98: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x186a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_186a9c:
    // 0x186a9c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x186a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186aa0:
    // 0x186aa0: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x186aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186aa4:
    // 0x186aa4: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x186aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_186aa8:
    // 0x186aa8: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x186aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_186aac:
    // 0x186aac: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x186aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186ab0:
    // 0x186ab0: 0x10000003  b           . + 4 + (0x3 << 2)
label_186ab4:
    if (ctx->pc == 0x186AB4u) {
        ctx->pc = 0x186AB4u;
            // 0x186ab4: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = 0x186AB8u;
        goto label_186ab8;
    }
    ctx->pc = 0x186AB0u;
    {
        const bool branch_taken_0x186ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AB0u;
            // 0x186ab4: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ab0) {
            ctx->pc = 0x186AC0u;
            goto label_186ac0;
        }
    }
    ctx->pc = 0x186AB8u;
label_186ab8:
    // 0x186ab8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x186ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_186abc:
    // 0x186abc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x186abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_186ac0:
    // 0x186ac0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x186ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186ac4:
    // 0x186ac4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x186ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_186ac8:
    // 0x186ac8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x186ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_186acc:
    // 0x186acc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x186accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_186ad0:
    // 0x186ad0: 0x3e00008  jr          $ra
label_186ad4:
    if (ctx->pc == 0x186AD4u) {
        ctx->pc = 0x186AD4u;
            // 0x186ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x186AD8u;
        goto label_186ad8;
    }
    ctx->pc = 0x186AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AD0u;
            // 0x186ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186AD8u;
label_186ad8:
    // 0x186ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186adc:
    // 0x186adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186ae0:
    // 0x186ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186ae4:
    // 0x186ae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186ae8:
    // 0x186ae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186aec:
    // 0x186aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186af0:
    // 0x186af0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186af4:
    // 0x186af4: 0xc06127c  jal         func_1849F0
label_186af8:
    if (ctx->pc == 0x186AF8u) {
        ctx->pc = 0x186AF8u;
            // 0x186af8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186AFCu;
        goto label_186afc;
    }
    ctx->pc = 0x186AF4u;
    SET_GPR_U32(ctx, 31, 0x186AFCu);
    ctx->pc = 0x186AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AF4u;
            // 0x186af8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AFCu; }
        if (ctx->pc != 0x186AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AFCu; }
        if (ctx->pc != 0x186AFCu) { return; }
    }
    ctx->pc = 0x186AFCu;
label_186afc:
    // 0x186afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186b00:
    // 0x186b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186b04:
    // 0x186b04: 0xc061aca  jal         func_186B28
label_186b08:
    if (ctx->pc == 0x186B08u) {
        ctx->pc = 0x186B08u;
            // 0x186b08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186B0Cu;
        goto label_186b0c;
    }
    ctx->pc = 0x186B04u;
    SET_GPR_U32(ctx, 31, 0x186B0Cu);
    ctx->pc = 0x186B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B04u;
            // 0x186b08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B28u;
    if (runtime->hasFunction(0x186B28u)) {
        auto targetFn = runtime->lookupFunction(0x186B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186B28_0x186b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    }
    ctx->pc = 0x186B0Cu;
label_186b0c:
    // 0x186b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186b10:
    // 0x186b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186b14:
    // 0x186b14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186b18:
    // 0x186b18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186b1c:
    // 0x186b1c: 0x8061282  j           func_184A08
label_186b20:
    if (ctx->pc == 0x186B20u) {
        ctx->pc = 0x186B20u;
            // 0x186b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x186B24u;
        goto label_186b24;
    }
    ctx->pc = 0x186B1Cu;
    ctx->pc = 0x186B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B1Cu;
            // 0x186b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186B24u;
label_186b24:
    // 0x186b24: 0x0  nop
    ctx->pc = 0x186b24u;
    // NOP
}
