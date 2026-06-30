#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DDF8
// Address: 0x10ddf8 - 0x10dea8
void sub_0010DDF8_0x10ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DDF8_0x10ddf8");
#endif

    switch (ctx->pc) {
        case 0x10de38u: goto label_10de38;
        default: break;
    }

    ctx->pc = 0x10ddf8u;

    // 0x10ddf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ddfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10de00: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x10de00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x10de04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10de08: 0x8e25e3a0  lw          $a1, -0x1C60($s1)
    ctx->pc = 0x10de08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960032)));
    // 0x10de0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10de0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10de14: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x10de14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x10de18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DE18u;
    {
        const bool branch_taken_0x10de18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE18u;
            // 0x10de1c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de18) {
            ctx->pc = 0x10DE40u;
            goto label_10de40;
        }
    }
    ctx->pc = 0x10DE20u;
    // 0x10de20: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x10de24: 0xae20e3a0  sw          $zero, -0x1C60($s1)
    ctx->pc = 0x10de24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960032), GPR_U32(ctx, 0));
    // 0x10de28: 0x26429840  addiu       $v0, $s2, -0x67C0
    ctx->pc = 0x10de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940736));
    // 0x10de2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de30: 0xc043614  jal         func_10D850
    ctx->pc = 0x10DE30u;
    SET_GPR_U32(ctx, 31, 0x10DE38u);
    ctx->pc = 0x10DE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE30u;
            // 0x10de34: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D850u;
    if (runtime->hasFunction(0x10D850u)) {
        auto targetFn = runtime->lookupFunction(0x10D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE38u; }
        if (ctx->pc != 0x10DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D850_0x10d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE38u; }
        if (ctx->pc != 0x10DE38u) { return; }
    }
    ctx->pc = 0x10DE38u;
label_10de38:
    // 0x10de38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DE38u;
    {
        const bool branch_taken_0x10de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE38u;
            // 0x10de3c: 0x8e25e3a0  lw          $a1, -0x1C60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de38) {
            ctx->pc = 0x10DE44u;
            goto label_10de44;
        }
    }
    ctx->pc = 0x10DE40u;
label_10de40:
    // 0x10de40: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x10de40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
label_10de44:
    // 0x10de44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10de48: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DE48u;
    {
        const bool branch_taken_0x10de48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE48u;
            // 0x10de4c: 0x26429840  addiu       $v0, $s2, -0x67C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de48) {
            ctx->pc = 0x10DE80u;
            goto label_10de80;
        }
    }
    ctx->pc = 0x10DE50u;
    // 0x10de50: 0x26449840  addiu       $a0, $s2, -0x67C0
    ctx->pc = 0x10de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940736));
    // 0x10de54: 0xae20e3a0  sw          $zero, -0x1C60($s1)
    ctx->pc = 0x10de54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960032), GPR_U32(ctx, 0));
    // 0x10de58: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x10de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10de5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10de5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10de60: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10de60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10de64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10de64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10de68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10de6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10de6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de74: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x10de74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x10de78: 0x8043614  j           func_10D850
    ctx->pc = 0x10DE78u;
    ctx->pc = 0x10DE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE78u;
            // 0x10de7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D850u;
    if (runtime->hasFunction(0x10D850u)) {
        auto targetFn = runtime->lookupFunction(0x10D850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010D850_0x10d850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10DE80u;
label_10de80:
    // 0x10de80: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x10de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10de84: 0xae23e3a0  sw          $v1, -0x1C60($s1)
    ctx->pc = 0x10de84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960032), GPR_U32(ctx, 3));
    // 0x10de88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10de8c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10de8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10de90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10de90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10de94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10de94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10de98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10de98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dea0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEA0u;
            // 0x10dea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DEA8u;
}
