#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161BD8
// Address: 0x161bd8 - 0x161cf8
void sub_00161BD8_0x161bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161BD8_0x161bd8");
#endif

    switch (ctx->pc) {
        case 0x161ca4u: goto label_161ca4;
        default: break;
    }

    ctx->pc = 0x161bd8u;

    // 0x161bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161bdc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x161be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161be4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x161be4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161be8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161BE8u;
    {
        const bool branch_taken_0x161be8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x161BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161BE8u;
            // 0x161bec: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161be8) {
            ctx->pc = 0x161C10u;
            goto label_161c10;
        }
    }
    ctx->pc = 0x161BF0u;
    // 0x161bf0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x161bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x161bf4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x161bf8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161BF8u;
    {
        const bool branch_taken_0x161bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161bf8) {
            ctx->pc = 0x161BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161BF8u;
            // 0x161bfc: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x161C18u;
            goto label_161c18;
        }
    }
    ctx->pc = 0x161C00u;
    // 0x161c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161c08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161C08u;
    {
        const bool branch_taken_0x161c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C08u;
            // 0x161c0c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c08) {
            ctx->pc = 0x161C48u;
            goto label_161c48;
        }
    }
    ctx->pc = 0x161C10u;
label_161c10:
    // 0x161c10: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x161c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x161c14: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x161c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_161c18:
    // 0x161c18: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161C18u;
    {
        const bool branch_taken_0x161c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C18u;
            // 0x161c1c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c18) {
            ctx->pc = 0x161C40u;
            goto label_161c40;
        }
    }
    ctx->pc = 0x161C20u;
    // 0x161c20: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x161c20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x161c24: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x161c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x161c28: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x161C28u;
    {
        const bool branch_taken_0x161c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C28u;
            // 0x161c2c: 0x24842780  addiu       $a0, $a0, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c28) {
            ctx->pc = 0x161C9Cu;
            goto label_161c9c;
        }
    }
    ctx->pc = 0x161C30u;
    // 0x161c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161c34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161C38u;
    {
        const bool branch_taken_0x161c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C38u;
            // 0x161c3c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c38) {
            ctx->pc = 0x161C48u;
            goto label_161c48;
        }
    }
    ctx->pc = 0x161C40u;
label_161c40:
    // 0x161c40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x161C40u;
    {
        const bool branch_taken_0x161c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C40u;
            // 0x161c44: 0x24842780  addiu       $a0, $a0, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c40) {
            ctx->pc = 0x161C9Cu;
            goto label_161c9c;
        }
    }
    ctx->pc = 0x161C48u;
label_161c48:
    // 0x161c48: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x161c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161c4c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x161c4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161c50: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x161c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x161c54: 0x2c830003  sltiu       $v1, $a0, 0x3
    ctx->pc = 0x161c54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x161c58: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161C58u;
    {
        const bool branch_taken_0x161c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C58u;
            // 0x161c5c: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c58) {
            ctx->pc = 0x161C70u;
            goto label_161c70;
        }
    }
    ctx->pc = 0x161C60u;
    // 0x161c60: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x161c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x161c64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x161C64u;
    {
        const bool branch_taken_0x161c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C64u;
            // 0x161c68: 0x248427b0  addiu       $a0, $a0, 0x27B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c64) {
            ctx->pc = 0x161C9Cu;
            goto label_161c9c;
        }
    }
    ctx->pc = 0x161C6Cu;
    // 0x161c6c: 0x0  nop
    ctx->pc = 0x161c6cu;
    // NOP
label_161c70:
    // 0x161c70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x161c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x161c74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x161c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x161c78: 0x8c4259d0  lw          $v0, 0x59D0($v0)
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22992)));
    // 0x161c7c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x161c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x161c80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x161c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161c84: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x161c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x161c88: 0x2ca20026  sltiu       $v0, $a1, 0x26
    ctx->pc = 0x161c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x161c8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x161C8Cu;
    {
        const bool branch_taken_0x161c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c8c) {
            ctx->pc = 0x161C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161C8Cu;
            // 0x161c90: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161CB0u;
            goto label_161cb0;
        }
    }
    ctx->pc = 0x161C94u;
    // 0x161c94: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x161c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x161c98: 0x248427e0  addiu       $a0, $a0, 0x27E0
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
label_161c9c:
    // 0x161c9c: 0xc05856c  jal         func_1615B0
    ctx->pc = 0x161C9Cu;
    SET_GPR_U32(ctx, 31, 0x161CA4u);
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA4u; }
        if (ctx->pc != 0x161CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA4u; }
        if (ctx->pc != 0x161CA4u) { return; }
    }
    ctx->pc = 0x161CA4u;
label_161ca4:
    // 0x161ca4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x161CA4u;
    {
        const bool branch_taken_0x161ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161CA4u;
            // 0x161ca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ca4) {
            ctx->pc = 0x161CE8u;
            goto label_161ce8;
        }
    }
    ctx->pc = 0x161CACu;
    // 0x161cac: 0x0  nop
    ctx->pc = 0x161cacu;
    // NOP
label_161cb0:
    // 0x161cb0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x161cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x161cb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x161cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161cbc: 0x8c6359e0  lw          $v1, 0x59E0($v1)
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23008)));
    // 0x161cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cc4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x161cc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x161cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x161ccc: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x161cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x161cd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x161cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161cd4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x161cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161cdc: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x161cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
    // 0x161ce0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x161ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161ce4: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x161ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
label_161ce8:
    // 0x161ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161cec: 0x3e00008  jr          $ra
    ctx->pc = 0x161CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161CECu;
            // 0x161cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161CF4u;
    // 0x161cf4: 0x0  nop
    ctx->pc = 0x161cf4u;
    // NOP
}
