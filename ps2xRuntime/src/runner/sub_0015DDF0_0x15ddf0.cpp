#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DDF0
// Address: 0x15ddf0 - 0x15dea8
void sub_0015DDF0_0x15ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DDF0_0x15ddf0");
#endif

    switch (ctx->pc) {
        case 0x15de00u: goto label_15de00;
        case 0x15de18u: goto label_15de18;
        case 0x15de50u: goto label_15de50;
        case 0x15de68u: goto label_15de68;
        case 0x15de90u: goto label_15de90;
        default: break;
    }

    ctx->pc = 0x15ddf0u;

    // 0x15ddf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ddf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ddf8: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DDF8u;
    SET_GPR_U32(ctx, 31, 0x15DE00u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE00u; }
        if (ctx->pc != 0x15DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE00u; }
        if (ctx->pc != 0x15DE00u) { return; }
    }
    ctx->pc = 0x15DE00u;
label_15de00:
    // 0x15de00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DE00u;
    {
        const bool branch_taken_0x15de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE00u;
            // 0x15de04: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de00) {
            ctx->pc = 0x15DE10u;
            goto label_15de10;
        }
    }
    ctx->pc = 0x15DE08u;
    // 0x15de08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15DE08u;
    {
        const bool branch_taken_0x15de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE08u;
            // 0x15de0c: 0x84425960  lh          $v0, 0x5960($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de08) {
            ctx->pc = 0x15DE30u;
            goto label_15de30;
        }
    }
    ctx->pc = 0x15DE10u;
label_15de10:
    // 0x15de10: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DE10u;
    SET_GPR_U32(ctx, 31, 0x15DE18u);
    ctx->pc = 0x15DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE10u;
            // 0x15de14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE18u; }
        if (ctx->pc != 0x15DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE18u; }
        if (ctx->pc != 0x15DE18u) { return; }
    }
    ctx->pc = 0x15DE18u;
label_15de18:
    // 0x15de18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15de1c: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x15de20: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x15de24: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x15de28: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x15de28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x15de2c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x15de2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_15de30:
    // 0x15de30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15de34: 0x3e00008  jr          $ra
    ctx->pc = 0x15DE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE34u;
            // 0x15de38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DE3Cu;
    // 0x15de3c: 0x0  nop
    ctx->pc = 0x15de3cu;
    // NOP
    // 0x15de40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15de44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15de48: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DE48u;
    SET_GPR_U32(ctx, 31, 0x15DE50u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE50u; }
        if (ctx->pc != 0x15DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE50u; }
        if (ctx->pc != 0x15DE50u) { return; }
    }
    ctx->pc = 0x15DE50u;
label_15de50:
    // 0x15de50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DE50u;
    {
        const bool branch_taken_0x15de50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE50u;
            // 0x15de54: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de50) {
            ctx->pc = 0x15DE60u;
            goto label_15de60;
        }
    }
    ctx->pc = 0x15DE58u;
    // 0x15de58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15DE58u;
    {
        const bool branch_taken_0x15de58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE58u;
            // 0x15de5c: 0x90425963  lbu         $v0, 0x5963($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22883)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de58) {
            ctx->pc = 0x15DE98u;
            goto label_15de98;
        }
    }
    ctx->pc = 0x15DE60u;
label_15de60:
    // 0x15de60: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DE60u;
    SET_GPR_U32(ctx, 31, 0x15DE68u);
    ctx->pc = 0x15DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE60u;
            // 0x15de64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE68u; }
        if (ctx->pc != 0x15DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE68u; }
        if (ctx->pc != 0x15DE68u) { return; }
    }
    ctx->pc = 0x15DE68u;
label_15de68:
    // 0x15de68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15de6c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x15de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x15de70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x15de70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15de74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DE74u;
    {
        const bool branch_taken_0x15de74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE74u;
            // 0x15de78: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de74) {
            ctx->pc = 0x15DE84u;
            goto label_15de84;
        }
    }
    ctx->pc = 0x15DE7Cu;
    // 0x15de7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15DE7Cu;
    {
        const bool branch_taken_0x15de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE7Cu;
            // 0x15de80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de7c) {
            ctx->pc = 0x15DE98u;
            goto label_15de98;
        }
    }
    ctx->pc = 0x15DE84u;
label_15de84:
    // 0x15de84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15de88: 0xc04319c  jal         func_10C670
    ctx->pc = 0x15DE88u;
    SET_GPR_U32(ctx, 31, 0x15DE90u);
    ctx->pc = 0x15DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE88u;
            // 0x15de8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C670u;
    if (runtime->hasFunction(0x10C670u)) {
        auto targetFn = runtime->lookupFunction(0x10C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE90u; }
        if (ctx->pc != 0x15DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C670_0x10c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE90u; }
        if (ctx->pc != 0x15DE90u) { return; }
    }
    ctx->pc = 0x15DE90u;
label_15de90:
    // 0x15de90: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x15de90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15de94: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x15de94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_15de98:
    // 0x15de98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15de98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15de9c: 0x3e00008  jr          $ra
    ctx->pc = 0x15DE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE9Cu;
            // 0x15dea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DEA4u;
    // 0x15dea4: 0x0  nop
    ctx->pc = 0x15dea4u;
    // NOP
}
