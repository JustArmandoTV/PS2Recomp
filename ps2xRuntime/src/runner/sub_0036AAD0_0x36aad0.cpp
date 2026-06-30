#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036AAD0
// Address: 0x36aad0 - 0x36ae50
void sub_0036AAD0_0x36aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AAD0_0x36aad0");
#endif

    switch (ctx->pc) {
        case 0x36aaf4u: goto label_36aaf4;
        case 0x36ab1cu: goto label_36ab1c;
        case 0x36ab44u: goto label_36ab44;
        case 0x36abbcu: goto label_36abbc;
        case 0x36ac18u: goto label_36ac18;
        case 0x36adc0u: goto label_36adc0;
        case 0x36ae18u: goto label_36ae18;
        case 0x36ae30u: goto label_36ae30;
        default: break;
    }

    ctx->pc = 0x36aad0u;

    // 0x36aad0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aad4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36aad8: 0xac605c30  sw          $zero, 0x5C30($v1)
    ctx->pc = 0x36aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23600), GPR_U32(ctx, 0));
    // 0x36aadc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aae0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aae4: 0x24845420  addiu       $a0, $a0, 0x5420
    ctx->pc = 0x36aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21536));
    // 0x36aae8: 0xac605820  sw          $zero, 0x5820($v1)
    ctx->pc = 0x36aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22560), GPR_U32(ctx, 0));
    // 0x36aaec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aaf0: 0xac605410  sw          $zero, 0x5410($v1)
    ctx->pc = 0x36aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21520), GPR_U32(ctx, 0));
label_36aaf4:
    // 0x36aaf4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36aaf8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36aafc: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x36aafcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x36ab00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36ab04: 0x0  nop
    ctx->pc = 0x36ab04u;
    // NOP
    // 0x36ab08: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AB08u;
    {
        const bool branch_taken_0x36ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab08) {
            ctx->pc = 0x36AAF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36aaf4;
        }
    }
    ctx->pc = 0x36AB10u;
    // 0x36ab10: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x36ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x36ab14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab18: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x36ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_36ab1c:
    // 0x36ab1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36ab20: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x36ab24: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x36ab24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x36ab28: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36ab2c: 0x0  nop
    ctx->pc = 0x36ab2cu;
    // NOP
    // 0x36ab30: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AB30u;
    {
        const bool branch_taken_0x36ab30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab30) {
            ctx->pc = 0x36AB1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36ab1c;
        }
    }
    ctx->pc = 0x36AB38u;
    // 0x36ab38: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x36ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x36ab3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab40: 0x24a55c40  addiu       $a1, $a1, 0x5C40
    ctx->pc = 0x36ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
label_36ab44:
    // 0x36ab44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36ab48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x36ab4c: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x36ab4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x36ab50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36ab54: 0x0  nop
    ctx->pc = 0x36ab54u;
    // NOP
    // 0x36ab58: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36AB58u;
    {
        const bool branch_taken_0x36ab58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab58) {
            ctx->pc = 0x36AB44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36ab44;
        }
    }
    ctx->pc = 0x36AB60u;
    // 0x36ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x36AB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AB68u;
    // 0x36ab68: 0x0  nop
    ctx->pc = 0x36ab68u;
    // NOP
    // 0x36ab6c: 0x0  nop
    ctx->pc = 0x36ab6cu;
    // NOP
    // 0x36ab70: 0x3e00008  jr          $ra
    ctx->pc = 0x36AB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AB78u;
    // 0x36ab78: 0x0  nop
    ctx->pc = 0x36ab78u;
    // NOP
    // 0x36ab7c: 0x0  nop
    ctx->pc = 0x36ab7cu;
    // NOP
    // 0x36ab80: 0x3e00008  jr          $ra
    ctx->pc = 0x36AB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AB88u;
    // 0x36ab88: 0x0  nop
    ctx->pc = 0x36ab88u;
    // NOP
    // 0x36ab8c: 0x0  nop
    ctx->pc = 0x36ab8cu;
    // NOP
    // 0x36ab90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x36ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x36ab94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ab98: 0x8ca40790  lw          $a0, 0x790($a1)
    ctx->pc = 0x36ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
    // 0x36ab9c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x36ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x36aba0: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x36ABA0u;
    {
        const bool branch_taken_0x36aba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36aba0) {
            ctx->pc = 0x36ABA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36ABA0u;
            // 0x36aba4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AC1Cu;
            goto label_36ac1c;
        }
    }
    ctx->pc = 0x36ABA8u;
    // 0x36aba8: 0x34820020  ori         $v0, $a0, 0x20
    ctx->pc = 0x36aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x36abac: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x36abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36abb0: 0xaca20790  sw          $v0, 0x790($a1)
    ctx->pc = 0x36abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1936), GPR_U32(ctx, 2));
    // 0x36abb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36ABB4u;
    {
        const bool branch_taken_0x36abb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ABB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ABB4u;
            // 0x36abb8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abb4) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36ABBCu;
label_36abbc:
    // 0x36abbc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x36abbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36abc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36abc8: 0x0  nop
    ctx->pc = 0x36abc8u;
    // NOP
    // 0x36abcc: 0x0  nop
    ctx->pc = 0x36abccu;
    // NOP
    // 0x36abd0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36ABD0u;
    {
        const bool branch_taken_0x36abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36abd0) {
            ctx->pc = 0x36ABBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36abbc;
        }
    }
    ctx->pc = 0x36ABD8u;
label_36abd8:
    // 0x36abd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x36abdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x36abe0: 0xc4611968  lwc1        $f1, 0x1968($v1)
    ctx->pc = 0x36abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36abe4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x36abe8: 0xc440196c  lwc1        $f0, 0x196C($v0)
    ctx->pc = 0x36abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36abec: 0x8ca708a4  lw          $a3, 0x8A4($a1)
    ctx->pc = 0x36abecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2212)));
    // 0x36abf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36abf4: 0x24c64cb0  addiu       $a2, $a2, 0x4CB0
    ctx->pc = 0x36abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19632));
    // 0x36abf8: 0x80a308ab  lb          $v1, 0x8AB($a1)
    ctx->pc = 0x36abf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2219)));
    // 0x36abfc: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x36abfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x36ac00: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x36ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x36ac04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36ac08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x36ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x36ac0c: 0x8c480118  lw          $t0, 0x118($v0)
    ctx->pc = 0x36ac0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x36ac10: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x36AC10u;
    SET_GPR_U32(ctx, 31, 0x36AC18u);
    ctx->pc = 0x36AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AC10u;
            // 0x36ac14: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AC18u; }
        if (ctx->pc != 0x36AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AC18u; }
        if (ctx->pc != 0x36AC18u) { return; }
    }
    ctx->pc = 0x36AC18u;
label_36ac18:
    // 0x36ac18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ac1c:
    // 0x36ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AC1Cu;
            // 0x36ac20: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC24u;
    // 0x36ac24: 0x0  nop
    ctx->pc = 0x36ac24u;
    // NOP
    // 0x36ac28: 0x0  nop
    ctx->pc = 0x36ac28u;
    // NOP
    // 0x36ac2c: 0x0  nop
    ctx->pc = 0x36ac2cu;
    // NOP
    // 0x36ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC38u;
    // 0x36ac38: 0x0  nop
    ctx->pc = 0x36ac38u;
    // NOP
    // 0x36ac3c: 0x0  nop
    ctx->pc = 0x36ac3cu;
    // NOP
    // 0x36ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC48u;
    // 0x36ac48: 0x0  nop
    ctx->pc = 0x36ac48u;
    // NOP
    // 0x36ac4c: 0x0  nop
    ctx->pc = 0x36ac4cu;
    // NOP
    // 0x36ac50: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC58u;
    // 0x36ac58: 0x0  nop
    ctx->pc = 0x36ac58u;
    // NOP
    // 0x36ac5c: 0x0  nop
    ctx->pc = 0x36ac5cu;
    // NOP
    // 0x36ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC68u;
    // 0x36ac68: 0x0  nop
    ctx->pc = 0x36ac68u;
    // NOP
    // 0x36ac6c: 0x0  nop
    ctx->pc = 0x36ac6cu;
    // NOP
    // 0x36ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC78u;
    // 0x36ac78: 0x0  nop
    ctx->pc = 0x36ac78u;
    // NOP
    // 0x36ac7c: 0x0  nop
    ctx->pc = 0x36ac7cu;
    // NOP
    // 0x36ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AC88u;
    // 0x36ac88: 0x0  nop
    ctx->pc = 0x36ac88u;
    // NOP
    // 0x36ac8c: 0x0  nop
    ctx->pc = 0x36ac8cu;
    // NOP
    // 0x36ac90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36ac90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ac94: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x36ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36ac98: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x36ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36ac9c: 0xc44e0044  lwc1        $f14, 0x44($v0)
    ctx->pc = 0x36ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36aca0: 0xc44f0054  lwc1        $f15, 0x54($v0)
    ctx->pc = 0x36aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36aca4: 0xc4500064  lwc1        $f16, 0x64($v0)
    ctx->pc = 0x36aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36aca8: 0xc4510074  lwc1        $f17, 0x74($v0)
    ctx->pc = 0x36aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36acac: 0xc4520084  lwc1        $f18, 0x84($v0)
    ctx->pc = 0x36acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36acb0: 0xc4530094  lwc1        $f19, 0x94($v0)
    ctx->pc = 0x36acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36acb4: 0x80f15ac  j           func_3C56B0
    ctx->pc = 0x36ACB4u;
    ctx->pc = 0x36ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36ACB4u;
            // 0x36acb8: 0x8ca40780  lw          $a0, 0x780($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C56B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C56B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36ACBCu;
    // 0x36acbc: 0x0  nop
    ctx->pc = 0x36acbcu;
    // NOP
    // 0x36acc0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ACC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ACC8u;
    // 0x36acc8: 0x0  nop
    ctx->pc = 0x36acc8u;
    // NOP
    // 0x36accc: 0x0  nop
    ctx->pc = 0x36acccu;
    // NOP
    // 0x36acd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36acd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acd4: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x36acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36acd8: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x36acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36acdc: 0xc44e0044  lwc1        $f14, 0x44($v0)
    ctx->pc = 0x36acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36ace0: 0xc44f0054  lwc1        $f15, 0x54($v0)
    ctx->pc = 0x36ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36ace4: 0xc4500064  lwc1        $f16, 0x64($v0)
    ctx->pc = 0x36ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36ace8: 0xc4510074  lwc1        $f17, 0x74($v0)
    ctx->pc = 0x36ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36acec: 0xc4520084  lwc1        $f18, 0x84($v0)
    ctx->pc = 0x36acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36acf0: 0xc4530094  lwc1        $f19, 0x94($v0)
    ctx->pc = 0x36acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36acf4: 0x80f15ac  j           func_3C56B0
    ctx->pc = 0x36ACF4u;
    ctx->pc = 0x36ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36ACF4u;
            // 0x36acf8: 0x8ca40780  lw          $a0, 0x780($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C56B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C56B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36ACFCu;
    // 0x36acfc: 0x0  nop
    ctx->pc = 0x36acfcu;
    // NOP
    // 0x36ad00: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x36ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x36ad04: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x36AD04u;
    {
        const bool branch_taken_0x36ad04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ad04) {
            ctx->pc = 0x36AD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AD04u;
            // 0x36ad08: 0x8ca40780  lw          $a0, 0x780($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AD20u;
            goto label_36ad20;
        }
    }
    ctx->pc = 0x36AD0Cu;
    // 0x36ad0c: 0x8ca40780  lw          $a0, 0x780($a1)
    ctx->pc = 0x36ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x36ad10: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x36ad10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x36ad14: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x36ad14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x36ad18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36AD18u;
    {
        const bool branch_taken_0x36ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AD18u;
            // 0x36ad1c: 0xa0830055  sb          $v1, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad18) {
            ctx->pc = 0x36AD2Cu;
            goto label_36ad2c;
        }
    }
    ctx->pc = 0x36AD20u;
label_36ad20:
    // 0x36ad20: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x36ad20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x36ad24: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x36ad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x36ad28: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x36ad28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
label_36ad2c:
    // 0x36ad2c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AD34u;
    // 0x36ad34: 0x0  nop
    ctx->pc = 0x36ad34u;
    // NOP
    // 0x36ad38: 0x0  nop
    ctx->pc = 0x36ad38u;
    // NOP
    // 0x36ad3c: 0x0  nop
    ctx->pc = 0x36ad3cu;
    // NOP
    // 0x36ad40: 0x8ca3077c  lw          $v1, 0x77C($a1)
    ctx->pc = 0x36ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
    // 0x36ad44: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x36ad44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ad48: 0x8ca40780  lw          $a0, 0x780($a1)
    ctx->pc = 0x36ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x36ad4c: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x36ad4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x36ad50: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x36ad50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x36ad54: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AD54u;
            // 0x36ad58: 0xa0830055  sb          $v1, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AD5Cu;
    // 0x36ad5c: 0x0  nop
    ctx->pc = 0x36ad5cu;
    // NOP
    // 0x36ad60: 0xc48c0024  lwc1        $f12, 0x24($a0)
    ctx->pc = 0x36ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36ad64: 0x8ca2077c  lw          $v0, 0x77C($a1)
    ctx->pc = 0x36ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
    // 0x36ad68: 0xc48d0034  lwc1        $f13, 0x34($a0)
    ctx->pc = 0x36ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36ad6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ad70: 0xc48e0044  lwc1        $f14, 0x44($a0)
    ctx->pc = 0x36ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36ad74: 0xc48f0054  lwc1        $f15, 0x54($a0)
    ctx->pc = 0x36ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36ad78: 0xc4900064  lwc1        $f16, 0x64($a0)
    ctx->pc = 0x36ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36ad7c: 0xc4910074  lwc1        $f17, 0x74($a0)
    ctx->pc = 0x36ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36ad80: 0xc4920084  lwc1        $f18, 0x84($a0)
    ctx->pc = 0x36ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36ad84: 0xc4930094  lwc1        $f19, 0x94($a0)
    ctx->pc = 0x36ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36ad88: 0xa0430054  sb          $v1, 0x54($v0)
    ctx->pc = 0x36ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ad8c: 0x80f15ac  j           func_3C56B0
    ctx->pc = 0x36AD8Cu;
    ctx->pc = 0x36AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AD8Cu;
            // 0x36ad90: 0x8ca40780  lw          $a0, 0x780($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C56B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C56B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36AD94u;
    // 0x36ad94: 0x0  nop
    ctx->pc = 0x36ad94u;
    // NOP
    // 0x36ad98: 0x0  nop
    ctx->pc = 0x36ad98u;
    // NOP
    // 0x36ad9c: 0x0  nop
    ctx->pc = 0x36ad9cu;
    // NOP
    // 0x36ada0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ADA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ADA8u;
    // 0x36ada8: 0x0  nop
    ctx->pc = 0x36ada8u;
    // NOP
    // 0x36adac: 0x0  nop
    ctx->pc = 0x36adacu;
    // NOP
    // 0x36adb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ADB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ADB8u;
    // 0x36adb8: 0x0  nop
    ctx->pc = 0x36adb8u;
    // NOP
    // 0x36adbc: 0x0  nop
    ctx->pc = 0x36adbcu;
    // NOP
label_36adc0:
    // 0x36adc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36adc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36adc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36adcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36add0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36add0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36add4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36ADD4u;
    {
        const bool branch_taken_0x36add4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ADD4u;
            // 0x36add8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36add4) {
            ctx->pc = 0x36AE30u;
            goto label_36ae30;
        }
    }
    ctx->pc = 0x36ADDCu;
    // 0x36addc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36addcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36ade0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36ade4: 0x246369e0  addiu       $v1, $v1, 0x69E0
    ctx->pc = 0x36ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27104));
    // 0x36ade8: 0x24426a18  addiu       $v0, $v0, 0x6A18
    ctx->pc = 0x36ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27160));
    // 0x36adec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36adecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36adf0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36ADF0u;
    {
        const bool branch_taken_0x36adf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ADF0u;
            // 0x36adf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36adf0) {
            ctx->pc = 0x36AE18u;
            goto label_36ae18;
        }
    }
    ctx->pc = 0x36ADF8u;
    // 0x36adf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36adfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36ae00: 0x24636a90  addiu       $v1, $v1, 0x6A90
    ctx->pc = 0x36ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27280));
    // 0x36ae04: 0x24426ac8  addiu       $v0, $v0, 0x6AC8
    ctx->pc = 0x36ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27336));
    // 0x36ae08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36ae0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ae0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae10: 0xc0dab94  jal         func_36AE50
    ctx->pc = 0x36AE10u;
    SET_GPR_U32(ctx, 31, 0x36AE18u);
    ctx->pc = 0x36AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE10u;
            // 0x36ae14: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36AE50u;
    if (runtime->hasFunction(0x36AE50u)) {
        auto targetFn = runtime->lookupFunction(0x36AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE18u; }
        if (ctx->pc != 0x36AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036AE50_0x36ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE18u; }
        if (ctx->pc != 0x36AE18u) { return; }
    }
    ctx->pc = 0x36AE18u;
label_36ae18:
    // 0x36ae18: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x36ae1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36ae1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36ae20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36AE20u;
    {
        const bool branch_taken_0x36ae20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36ae20) {
            ctx->pc = 0x36AE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE20u;
            // 0x36ae24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AE34u;
            goto label_36ae34;
        }
    }
    ctx->pc = 0x36AE28u;
    // 0x36ae28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36AE28u;
    SET_GPR_U32(ctx, 31, 0x36AE30u);
    ctx->pc = 0x36AE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE28u;
            // 0x36ae2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE30u; }
        if (ctx->pc != 0x36AE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE30u; }
        if (ctx->pc != 0x36AE30u) { return; }
    }
    ctx->pc = 0x36AE30u;
label_36ae30:
    // 0x36ae30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ae30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36ae34:
    // 0x36ae34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36ae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ae38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ae38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ae3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ae3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ae40: 0x3e00008  jr          $ra
    ctx->pc = 0x36AE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE40u;
            // 0x36ae44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AE48u;
    // 0x36ae48: 0x0  nop
    ctx->pc = 0x36ae48u;
    // NOP
    // 0x36ae4c: 0x0  nop
    ctx->pc = 0x36ae4cu;
    // NOP
}
