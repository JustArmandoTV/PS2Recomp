#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EBB0
// Address: 0x21ebb0 - 0x21ecc0
void sub_0021EBB0_0x21ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EBB0_0x21ebb0");
#endif

    switch (ctx->pc) {
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec88u: goto label_21ec88;
        default: break;
    }

    ctx->pc = 0x21ebb0u;

    // 0x21ebb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ebb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21ebb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ebbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21ebc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ebc4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x21ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x21ebc8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21ebcc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21ebd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21ebd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21ebd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ebd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21ebdc: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x21ebe0: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21ebe4: 0xa4870006  sh          $a3, 0x6($a0)
    ctx->pc = 0x21ebe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x21ebe8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21ebec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ebecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ebf0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x21ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x21ebf4: 0x24c6e910  addiu       $a2, $a2, -0x16F0
    ctx->pc = 0x21ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961424));
    // 0x21ebf8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21ebfc: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x21ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x21ec00: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x21ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x21ec04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21ec08: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21ec0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x21ec10: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x21ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x21ec14: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x21ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x21ec18: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x21ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x21ec1c: 0xc0873b4  jal         func_21CED0
    ctx->pc = 0x21EC1Cu;
    SET_GPR_U32(ctx, 31, 0x21EC24u);
    ctx->pc = 0x21EC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC1Cu;
            // 0x21ec20: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CED0u;
    if (runtime->hasFunction(0x21CED0u)) {
        auto targetFn = runtime->lookupFunction(0x21CED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC24u; }
        if (ctx->pc != 0x21EC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CED0_0x21ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC24u; }
        if (ctx->pc != 0x21EC24u) { return; }
    }
    ctx->pc = 0x21EC24u;
label_21ec24:
    // 0x21ec24: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x21ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x21ec28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ec2c: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x21ec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x21ec30: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x21ec30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ec34: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x21ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x21ec38: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x21ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x21ec3c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x21ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x21ec40: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x21ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x21ec44: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x21ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x21ec48: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x21ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x21ec4c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x21ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x21ec50: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21ec54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec58: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x21ec58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x21ec5c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x21ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x21ec60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ec64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x21EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC68u;
            // 0x21ec6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EC70u;
    // 0x21ec70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ec74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21ec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ec7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x21ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21ec80: 0xc087d08  jal         func_21F420
    ctx->pc = 0x21EC80u;
    SET_GPR_U32(ctx, 31, 0x21EC88u);
    ctx->pc = 0x21EC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC80u;
            // 0x21ec84: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F420u;
    if (runtime->hasFunction(0x21F420u)) {
        auto targetFn = runtime->lookupFunction(0x21F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC88u; }
        if (ctx->pc != 0x21EC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F420_0x21f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC88u; }
        if (ctx->pc != 0x21EC88u) { return; }
    }
    ctx->pc = 0x21EC88u;
label_21ec88:
    // 0x21ec88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC8Cu;
            // 0x21ec90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EC94u;
    // 0x21ec94: 0x0  nop
    ctx->pc = 0x21ec94u;
    // NOP
    // 0x21ec98: 0x0  nop
    ctx->pc = 0x21ec98u;
    // NOP
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
    // 0x21eca0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x21eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x21ECA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECA4u;
            // 0x21eca8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21ECACu;
    // 0x21ecac: 0x0  nop
    ctx->pc = 0x21ecacu;
    // NOP
    // 0x21ecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21ECB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECB0u;
            // 0x21ecb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21ECB8u;
    // 0x21ecb8: 0x0  nop
    ctx->pc = 0x21ecb8u;
    // NOP
    // 0x21ecbc: 0x0  nop
    ctx->pc = 0x21ecbcu;
    // NOP
}
