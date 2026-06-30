#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAB18
// Address: 0x1cab18 - 0x1cade0
void sub_001CAB18_0x1cab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAB18_0x1cab18");
#endif

    switch (ctx->pc) {
        case 0x1cab60u: goto label_1cab60;
        case 0x1cabd0u: goto label_1cabd0;
        case 0x1cac40u: goto label_1cac40;
        case 0x1cacdcu: goto label_1cacdc;
        case 0x1cadb4u: goto label_1cadb4;
        default: break;
    }

    ctx->pc = 0x1cab18u;

    // 0x1cab18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cab1c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cab1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cab20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cab24: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cab24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cab28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cab2c: 0x8e06a70c  lw          $a2, -0x58F4($s0)
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cab30: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cab34: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAB34u;
    {
        const bool branch_taken_0x1cab34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB34u;
            // 0x1cab38: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab34) {
            ctx->pc = 0x1CAB74u;
            goto label_1cab74;
        }
    }
    ctx->pc = 0x1CAB3Cu;
    // 0x1cab3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cab40: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAB40u;
    {
        const bool branch_taken_0x1cab40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB40u;
            // 0x1cab44: 0xa0c20ab7  sb          $v0, 0xAB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab40) {
            ctx->pc = 0x1CAB68u;
            goto label_1cab68;
        }
    }
    ctx->pc = 0x1CAB48u;
    // 0x1cab48: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cab48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab4c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cab4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cab50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cab54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cab58: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAB58u;
    SET_GPR_U32(ctx, 31, 0x1CAB60u);
    ctx->pc = 0x1CAB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB58u;
            // 0x1cab5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB60u; }
        if (ctx->pc != 0x1CAB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB60u; }
        if (ctx->pc != 0x1CAB60u) { return; }
    }
    ctx->pc = 0x1CAB60u;
label_1cab60:
    // 0x1cab60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAB60u;
    {
        const bool branch_taken_0x1cab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB60u;
            // 0x1cab64: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab60) {
            ctx->pc = 0x1CAB70u;
            goto label_1cab70;
        }
    }
    ctx->pc = 0x1CAB68u;
label_1cab68:
    // 0x1cab68: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cab6c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cab70:
    // 0x1cab70: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cab70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cab74:
    // 0x1cab74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cab74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB7Cu;
            // 0x1cab80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAB84u;
    // 0x1cab84: 0x0  nop
    ctx->pc = 0x1cab84u;
    // NOP
    // 0x1cab88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cab8c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cab8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cab90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cab94: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cab98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cab9c: 0x8e06a70c  lw          $a2, -0x58F4($s0)
    ctx->pc = 0x1cab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1caba0: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1caba4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CABA4u;
    {
        const bool branch_taken_0x1caba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABA4u;
            // 0x1caba8: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caba4) {
            ctx->pc = 0x1CABE4u;
            goto label_1cabe4;
        }
    }
    ctx->pc = 0x1CABACu;
    // 0x1cabac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cabb0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CABB0u;
    {
        const bool branch_taken_0x1cabb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABB0u;
            // 0x1cabb4: 0xa0c20ab7  sb          $v0, 0xAB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabb0) {
            ctx->pc = 0x1CABD8u;
            goto label_1cabd8;
        }
    }
    ctx->pc = 0x1CABB8u;
    // 0x1cabb8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cabb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabbc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cabbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cabc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cabc4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cabc8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CABC8u;
    SET_GPR_U32(ctx, 31, 0x1CABD0u);
    ctx->pc = 0x1CABCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABC8u;
            // 0x1cabcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABD0u; }
        if (ctx->pc != 0x1CABD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABD0u; }
        if (ctx->pc != 0x1CABD0u) { return; }
    }
    ctx->pc = 0x1CABD0u;
label_1cabd0:
    // 0x1cabd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CABD0u;
    {
        const bool branch_taken_0x1cabd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABD0u;
            // 0x1cabd4: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabd0) {
            ctx->pc = 0x1CABE0u;
            goto label_1cabe0;
        }
    }
    ctx->pc = 0x1CABD8u;
label_1cabd8:
    // 0x1cabd8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cabdc: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cabe0:
    // 0x1cabe0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cabe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cabe4:
    // 0x1cabe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cabe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cabe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cabe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cabec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CABECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABECu;
            // 0x1cabf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CABF4u;
    // 0x1cabf4: 0x0  nop
    ctx->pc = 0x1cabf4u;
    // NOP
    // 0x1cabf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cabfc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cabfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cac04: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cac08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cac0c: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cac10: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cac14: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAC14u;
    {
        const bool branch_taken_0x1cac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC14u;
            // 0x1cac18: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac14) {
            ctx->pc = 0x1CAC54u;
            goto label_1cac54;
        }
    }
    ctx->pc = 0x1CAC1Cu;
    // 0x1cac1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cac20: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAC20u;
    {
        const bool branch_taken_0x1cac20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC20u;
            // 0x1cac24: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac20) {
            ctx->pc = 0x1CAC48u;
            goto label_1cac48;
        }
    }
    ctx->pc = 0x1CAC28u;
    // 0x1cac28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cac2c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cac2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cac30: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cac34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac38: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAC38u;
    SET_GPR_U32(ctx, 31, 0x1CAC40u);
    ctx->pc = 0x1CAC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC38u;
            // 0x1cac3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC40u; }
        if (ctx->pc != 0x1CAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC40u; }
        if (ctx->pc != 0x1CAC40u) { return; }
    }
    ctx->pc = 0x1CAC40u;
label_1cac40:
    // 0x1cac40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC40u;
    {
        const bool branch_taken_0x1cac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC40u;
            // 0x1cac44: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac40) {
            ctx->pc = 0x1CAC50u;
            goto label_1cac50;
        }
    }
    ctx->pc = 0x1CAC48u;
label_1cac48:
    // 0x1cac48: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cac4c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cac50:
    // 0x1cac50: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cac50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cac54:
    // 0x1cac54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cac54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cac58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC5Cu;
            // 0x1cac60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAC64u;
    // 0x1cac64: 0x0  nop
    ctx->pc = 0x1cac64u;
    // NOP
    // 0x1cac68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cac6c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cac6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cac70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cac74: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cac78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cac7c: 0x8e06a70c  lw          $a2, -0x58F4($s0)
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cac80: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cac84: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CAC84u;
    {
        const bool branch_taken_0x1cac84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC84u;
            // 0x1cac88: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac84) {
            ctx->pc = 0x1CACF4u;
            goto label_1cacf4;
        }
    }
    ctx->pc = 0x1CAC8Cu;
    // 0x1cac8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cac90: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CAC90u;
    {
        const bool branch_taken_0x1cac90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC90u;
            // 0x1cac94: 0xa0c20ab7  sb          $v0, 0xAB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac90) {
            ctx->pc = 0x1CACE8u;
            goto label_1cace8;
        }
    }
    ctx->pc = 0x1CAC98u;
    // 0x1cac98: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1cac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cac9c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1cac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1caca0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1caca0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1caca4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1caca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1caca8: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cacac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cacb0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1cacb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cacb4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CACB4u;
    {
        const bool branch_taken_0x1cacb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cacb4) {
            ctx->pc = 0x1CACB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACB4u;
            // 0x1cacb8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CACBCu;
            goto label_1cacbc;
        }
    }
    ctx->pc = 0x1CACBCu;
label_1cacbc:
    // 0x1cacbc: 0x4810  mfhi        $t1
    ctx->pc = 0x1cacbcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1cacc0: 0x4012  mflo        $t0
    ctx->pc = 0x1cacc0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1cacc4: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1cacc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1cacc8: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1cacc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1caccc: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x1cacccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cacd0: 0x4812  mflo        $t1
    ctx->pc = 0x1cacd0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1cacd4: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CACD4u;
    SET_GPR_U32(ctx, 31, 0x1CACDCu);
    ctx->pc = 0x1CACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACD4u;
            // 0x1cacd8: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACDCu; }
        if (ctx->pc != 0x1CACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACDCu; }
        if (ctx->pc != 0x1CACDCu) { return; }
    }
    ctx->pc = 0x1CACDCu;
label_1cacdc:
    // 0x1cacdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CACDCu;
    {
        const bool branch_taken_0x1cacdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACDCu;
            // 0x1cace0: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacdc) {
            ctx->pc = 0x1CACF0u;
            goto label_1cacf0;
        }
    }
    ctx->pc = 0x1CACE4u;
    // 0x1cace4: 0x0  nop
    ctx->pc = 0x1cace4u;
    // NOP
label_1cace8:
    // 0x1cace8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cacec: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cacf0:
    // 0x1cacf0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cacf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cacf4:
    // 0x1cacf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cacf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cacf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cacf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cacfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CACFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACFCu;
            // 0x1cad00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAD04u;
    // 0x1cad04: 0x0  nop
    ctx->pc = 0x1cad04u;
    // NOP
    // 0x1cad08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cad0c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cad0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cad10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cad14: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cad18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cad1c: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1cad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cad20: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cad24: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAD24u;
    {
        const bool branch_taken_0x1cad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD24u;
            // 0x1cad28: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad24) {
            ctx->pc = 0x1CADCCu;
            goto label_1cadcc;
        }
    }
    ctx->pc = 0x1CAD2Cu;
    // 0x1cad2c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cad30: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1cad30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1cad34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cad34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad38: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1cad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cad3c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1CAD3Cu;
    {
        const bool branch_taken_0x1cad3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD3Cu;
            // 0x1cad40: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad3c) {
            ctx->pc = 0x1CADCCu;
            goto label_1cadcc;
        }
    }
    ctx->pc = 0x1CAD44u;
    // 0x1cad44: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1cad48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cad48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad4c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1cad4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cad50: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAD50u;
    {
        const bool branch_taken_0x1cad50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cad50) {
            ctx->pc = 0x1CAD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD50u;
            // 0x1cad54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD60u;
            goto label_1cad60;
        }
    }
    ctx->pc = 0x1CAD58u;
    // 0x1cad58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CAD58u;
    {
        const bool branch_taken_0x1cad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD58u;
            // 0x1cad5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad58) {
            ctx->pc = 0x1CADD0u;
            goto label_1cadd0;
        }
    }
    ctx->pc = 0x1CAD60u;
label_1cad60:
    // 0x1cad60: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CAD60u;
    {
        const bool branch_taken_0x1cad60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD60u;
            // 0x1cad64: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad60) {
            ctx->pc = 0x1CADC0u;
            goto label_1cadc0;
        }
    }
    ctx->pc = 0x1CAD68u;
    // 0x1cad68: 0x3c0144a0  lui         $at, 0x44A0
    ctx->pc = 0x1cad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17568 << 16));
    // 0x1cad6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cad6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad70: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1cad74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cad74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cad78: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1cad78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1cad7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cad7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cad80: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cad80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cad84: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1cad84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cad88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAD88u;
    {
        const bool branch_taken_0x1cad88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD88u;
            // 0x1cad8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad88) {
            ctx->pc = 0x1CADA4u;
            goto label_1cada4;
        }
    }
    ctx->pc = 0x1CAD90u;
    // 0x1cad90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cad90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cad94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1cad98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cad98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cad9c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1cad9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cada0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cada0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1cada4:
    // 0x1cada4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cada4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cada8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1cada8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cadac: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CADACu;
    SET_GPR_U32(ctx, 31, 0x1CADB4u);
    ctx->pc = 0x1CADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADACu;
            // 0x1cadb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADB4u; }
        if (ctx->pc != 0x1CADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADB4u; }
        if (ctx->pc != 0x1CADB4u) { return; }
    }
    ctx->pc = 0x1CADB4u;
label_1cadb4:
    // 0x1cadb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CADB4u;
    {
        const bool branch_taken_0x1cadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADB4u;
            // 0x1cadb8: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadb4) {
            ctx->pc = 0x1CADC8u;
            goto label_1cadc8;
        }
    }
    ctx->pc = 0x1CADBCu;
    // 0x1cadbc: 0x0  nop
    ctx->pc = 0x1cadbcu;
    // NOP
label_1cadc0:
    // 0x1cadc0: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cadc4: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cadc8:
    // 0x1cadc8: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cadc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cadcc:
    // 0x1cadcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cadd0:
    // 0x1cadd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cadd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADD4u;
            // 0x1cadd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CADDCu;
    // 0x1caddc: 0x0  nop
    ctx->pc = 0x1caddcu;
    // NOP
}
