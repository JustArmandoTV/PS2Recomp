#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184ED8
// Address: 0x184ed8 - 0x184fe8
void sub_00184ED8_0x184ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184ED8_0x184ed8");
#endif

    switch (ctx->pc) {
        case 0x184ed8u: goto label_184ed8;
        case 0x184edcu: goto label_184edc;
        case 0x184ee0u: goto label_184ee0;
        case 0x184ee4u: goto label_184ee4;
        case 0x184ee8u: goto label_184ee8;
        case 0x184eecu: goto label_184eec;
        case 0x184ef0u: goto label_184ef0;
        case 0x184ef4u: goto label_184ef4;
        case 0x184ef8u: goto label_184ef8;
        case 0x184efcu: goto label_184efc;
        case 0x184f00u: goto label_184f00;
        case 0x184f04u: goto label_184f04;
        case 0x184f08u: goto label_184f08;
        case 0x184f0cu: goto label_184f0c;
        case 0x184f10u: goto label_184f10;
        case 0x184f14u: goto label_184f14;
        case 0x184f18u: goto label_184f18;
        case 0x184f1cu: goto label_184f1c;
        case 0x184f20u: goto label_184f20;
        case 0x184f24u: goto label_184f24;
        case 0x184f28u: goto label_184f28;
        case 0x184f2cu: goto label_184f2c;
        case 0x184f30u: goto label_184f30;
        case 0x184f34u: goto label_184f34;
        case 0x184f38u: goto label_184f38;
        case 0x184f3cu: goto label_184f3c;
        case 0x184f40u: goto label_184f40;
        case 0x184f44u: goto label_184f44;
        case 0x184f48u: goto label_184f48;
        case 0x184f4cu: goto label_184f4c;
        case 0x184f50u: goto label_184f50;
        case 0x184f54u: goto label_184f54;
        case 0x184f58u: goto label_184f58;
        case 0x184f5cu: goto label_184f5c;
        case 0x184f60u: goto label_184f60;
        case 0x184f64u: goto label_184f64;
        case 0x184f68u: goto label_184f68;
        case 0x184f6cu: goto label_184f6c;
        case 0x184f70u: goto label_184f70;
        case 0x184f74u: goto label_184f74;
        case 0x184f78u: goto label_184f78;
        case 0x184f7cu: goto label_184f7c;
        case 0x184f80u: goto label_184f80;
        case 0x184f84u: goto label_184f84;
        case 0x184f88u: goto label_184f88;
        case 0x184f8cu: goto label_184f8c;
        case 0x184f90u: goto label_184f90;
        case 0x184f94u: goto label_184f94;
        case 0x184f98u: goto label_184f98;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa0u: goto label_184fa0;
        case 0x184fa4u: goto label_184fa4;
        case 0x184fa8u: goto label_184fa8;
        case 0x184facu: goto label_184fac;
        case 0x184fb0u: goto label_184fb0;
        case 0x184fb4u: goto label_184fb4;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fbcu: goto label_184fbc;
        case 0x184fc0u: goto label_184fc0;
        case 0x184fc4u: goto label_184fc4;
        case 0x184fc8u: goto label_184fc8;
        case 0x184fccu: goto label_184fcc;
        case 0x184fd0u: goto label_184fd0;
        case 0x184fd4u: goto label_184fd4;
        case 0x184fd8u: goto label_184fd8;
        case 0x184fdcu: goto label_184fdc;
        case 0x184fe0u: goto label_184fe0;
        case 0x184fe4u: goto label_184fe4;
        default: break;
    }

    ctx->pc = 0x184ed8u;

label_184ed8:
    // 0x184ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184edc:
    // 0x184edc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_184ee0:
    if (ctx->pc == 0x184EE0u) {
        ctx->pc = 0x184EE0u;
            // 0x184ee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184EE4u;
        goto label_184ee4;
    }
    ctx->pc = 0x184EDCu;
    {
        const bool branch_taken_0x184edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x184EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EDCu;
            // 0x184ee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184edc) {
            ctx->pc = 0x184F00u;
            goto label_184f00;
        }
    }
    ctx->pc = 0x184EE4u;
label_184ee4:
    // 0x184ee4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184ee8:
    // 0x184ee8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_184eec:
    // 0x184eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184ef0:
    // 0x184ef0: 0x24847a18  addiu       $a0, $a0, 0x7A18
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31256));
label_184ef4:
    // 0x184ef4: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
label_184ef8:
    // 0x184ef8: 0x8061296  j           func_184A58
label_184efc:
    if (ctx->pc == 0x184EFCu) {
        ctx->pc = 0x184EFCu;
            // 0x184efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184F00u;
        goto label_184f00;
    }
    ctx->pc = 0x184EF8u;
    ctx->pc = 0x184EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184EF8u;
            // 0x184efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184F00u;
label_184f00:
    // 0x184f00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x184f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_184f04:
    // 0x184f04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_184f08:
    if (ctx->pc == 0x184F08u) {
        ctx->pc = 0x184F08u;
            // 0x184f08: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = 0x184F0Cu;
        goto label_184f0c;
    }
    ctx->pc = 0x184F04u;
    {
        const bool branch_taken_0x184f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184f04) {
            ctx->pc = 0x184F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184F04u;
            // 0x184f08: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x184F28u;
            goto label_184f28;
        }
    }
    ctx->pc = 0x184F0Cu;
label_184f0c:
    // 0x184f0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184f10:
    // 0x184f10: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_184f14:
    // 0x184f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184f18:
    // 0x184f18: 0x24847a28  addiu       $a0, $a0, 0x7A28
    ctx->pc = 0x184f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31272));
label_184f1c:
    // 0x184f1c: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x184f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_184f20:
    // 0x184f20: 0x8061296  j           func_184A58
label_184f24:
    if (ctx->pc == 0x184F24u) {
        ctx->pc = 0x184F24u;
            // 0x184f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184F28u;
        goto label_184f28;
    }
    ctx->pc = 0x184F20u;
    ctx->pc = 0x184F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184F20u;
            // 0x184f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184F28u;
label_184f28:
    // 0x184f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184f2c:
    // 0x184f2c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x184f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_184f30:
    // 0x184f30: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x184f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_184f34:
    // 0x184f34: 0x3e00008  jr          $ra
label_184f38:
    if (ctx->pc == 0x184F38u) {
        ctx->pc = 0x184F38u;
            // 0x184f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184F3Cu;
        goto label_184f3c;
    }
    ctx->pc = 0x184F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F34u;
            // 0x184f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184F3Cu;
label_184f3c:
    // 0x184f3c: 0x0  nop
    ctx->pc = 0x184f3cu;
    // NOP
label_184f40:
    // 0x184f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184f44:
    // 0x184f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184f48:
    // 0x184f48: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_184f4c:
    if (ctx->pc == 0x184F4Cu) {
        ctx->pc = 0x184F4Cu;
            // 0x184f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184F50u;
        goto label_184f50;
    }
    ctx->pc = 0x184F48u;
    {
        const bool branch_taken_0x184f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x184F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F48u;
            // 0x184f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f48) {
            ctx->pc = 0x184F58u;
            goto label_184f58;
        }
    }
    ctx->pc = 0x184F50u;
label_184f50:
    // 0x184f50: 0x1000000a  b           . + 4 + (0xA << 2)
label_184f54:
    if (ctx->pc == 0x184F54u) {
        ctx->pc = 0x184F54u;
            // 0x184f54: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x184F58u;
        goto label_184f58;
    }
    ctx->pc = 0x184F50u;
    {
        const bool branch_taken_0x184f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F50u;
            // 0x184f54: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f50) {
            ctx->pc = 0x184F7Cu;
            goto label_184f7c;
        }
    }
    ctx->pc = 0x184F58u;
label_184f58:
    // 0x184f58: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_184f5c:
    if (ctx->pc == 0x184F5Cu) {
        ctx->pc = 0x184F5Cu;
            // 0x184f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184F60u;
        goto label_184f60;
    }
    ctx->pc = 0x184F58u;
    {
        const bool branch_taken_0x184f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F58u;
            // 0x184f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f58) {
            ctx->pc = 0x184F7Cu;
            goto label_184f7c;
        }
    }
    ctx->pc = 0x184F60u;
label_184f60:
    // 0x184f60: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x184f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_184f64:
    // 0x184f64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_184f68:
    if (ctx->pc == 0x184F68u) {
        ctx->pc = 0x184F68u;
            // 0x184f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184F6Cu;
        goto label_184f6c;
    }
    ctx->pc = 0x184F64u;
    {
        const bool branch_taken_0x184f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f64) {
            ctx->pc = 0x184F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184F64u;
            // 0x184f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x184F7Cu;
            goto label_184f7c;
        }
    }
    ctx->pc = 0x184F6Cu;
label_184f6c:
    // 0x184f6c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_184f70:
    // 0x184f70: 0x40f809  jalr        $v0
label_184f74:
    if (ctx->pc == 0x184F74u) {
        ctx->pc = 0x184F74u;
            // 0x184f74: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x184F78u;
        goto label_184f78;
    }
    ctx->pc = 0x184F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184F78u);
        ctx->pc = 0x184F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F70u;
            // 0x184f74: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184F78u; }
            if (ctx->pc != 0x184F78u) { return; }
        }
        }
    }
    ctx->pc = 0x184F78u;
label_184f78:
    // 0x184f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184f7c:
    // 0x184f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184f80:
    // 0x184f80: 0x3e00008  jr          $ra
label_184f84:
    if (ctx->pc == 0x184F84u) {
        ctx->pc = 0x184F84u;
            // 0x184f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184F88u;
        goto label_184f88;
    }
    ctx->pc = 0x184F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F80u;
            // 0x184f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184F88u;
label_184f88:
    // 0x184f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_184f8c:
    // 0x184f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_184f90:
    // 0x184f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184f94:
    // 0x184f94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_184f98:
    // 0x184f98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184f9c:
    // 0x184f9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_184fa0:
    // 0x184fa0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x184fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184fa4:
    // 0x184fa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x184fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_184fa8:
    // 0x184fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x184fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_184fac:
    // 0x184fac: 0xc06127c  jal         func_1849F0
label_184fb0:
    if (ctx->pc == 0x184FB0u) {
        ctx->pc = 0x184FB0u;
            // 0x184fb0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FB4u;
        goto label_184fb4;
    }
    ctx->pc = 0x184FACu;
    SET_GPR_U32(ctx, 31, 0x184FB4u);
    ctx->pc = 0x184FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184FACu;
            // 0x184fb0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FB4u; }
        if (ctx->pc != 0x184FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FB4u; }
        if (ctx->pc != 0x184FB4u) { return; }
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184fb8:
    // 0x184fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184fbc:
    // 0x184fbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x184fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184fc0:
    // 0x184fc0: 0xc0613fa  jal         func_184FE8
label_184fc4:
    if (ctx->pc == 0x184FC4u) {
        ctx->pc = 0x184FC4u;
            // 0x184fc4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FC8u;
        goto label_184fc8;
    }
    ctx->pc = 0x184FC0u;
    SET_GPR_U32(ctx, 31, 0x184FC8u);
    ctx->pc = 0x184FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184FC0u;
            // 0x184fc4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184FE8u;
    if (runtime->hasFunction(0x184FE8u)) {
        auto targetFn = runtime->lookupFunction(0x184FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FC8u; }
        if (ctx->pc != 0x184FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184FE8_0x184fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FC8u; }
        if (ctx->pc != 0x184FC8u) { return; }
    }
    ctx->pc = 0x184FC8u;
label_184fc8:
    // 0x184fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184fcc:
    // 0x184fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_184fd0:
    // 0x184fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184fd4:
    // 0x184fd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x184fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_184fd8:
    // 0x184fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x184fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184fdc:
    // 0x184fdc: 0x8061282  j           func_184A08
label_184fe0:
    if (ctx->pc == 0x184FE0u) {
        ctx->pc = 0x184FE0u;
            // 0x184fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x184FE4u;
        goto label_184fe4;
    }
    ctx->pc = 0x184FDCu;
    ctx->pc = 0x184FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184FDCu;
            // 0x184fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184FE4u;
label_184fe4:
    // 0x184fe4: 0x0  nop
    ctx->pc = 0x184fe4u;
    // NOP
}
