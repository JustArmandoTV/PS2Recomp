#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4ED0
// Address: 0x3c4ed0 - 0x3c4fd0
void sub_003C4ED0_0x3c4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4ED0_0x3c4ed0");
#endif

    switch (ctx->pc) {
        case 0x3c4ed0u: goto label_3c4ed0;
        case 0x3c4ed4u: goto label_3c4ed4;
        case 0x3c4ed8u: goto label_3c4ed8;
        case 0x3c4edcu: goto label_3c4edc;
        case 0x3c4ee0u: goto label_3c4ee0;
        case 0x3c4ee4u: goto label_3c4ee4;
        case 0x3c4ee8u: goto label_3c4ee8;
        case 0x3c4eecu: goto label_3c4eec;
        case 0x3c4ef0u: goto label_3c4ef0;
        case 0x3c4ef4u: goto label_3c4ef4;
        case 0x3c4ef8u: goto label_3c4ef8;
        case 0x3c4efcu: goto label_3c4efc;
        case 0x3c4f00u: goto label_3c4f00;
        case 0x3c4f04u: goto label_3c4f04;
        case 0x3c4f08u: goto label_3c4f08;
        case 0x3c4f0cu: goto label_3c4f0c;
        case 0x3c4f10u: goto label_3c4f10;
        case 0x3c4f14u: goto label_3c4f14;
        case 0x3c4f18u: goto label_3c4f18;
        case 0x3c4f1cu: goto label_3c4f1c;
        case 0x3c4f20u: goto label_3c4f20;
        case 0x3c4f24u: goto label_3c4f24;
        case 0x3c4f28u: goto label_3c4f28;
        case 0x3c4f2cu: goto label_3c4f2c;
        case 0x3c4f30u: goto label_3c4f30;
        case 0x3c4f34u: goto label_3c4f34;
        case 0x3c4f38u: goto label_3c4f38;
        case 0x3c4f3cu: goto label_3c4f3c;
        case 0x3c4f40u: goto label_3c4f40;
        case 0x3c4f44u: goto label_3c4f44;
        case 0x3c4f48u: goto label_3c4f48;
        case 0x3c4f4cu: goto label_3c4f4c;
        case 0x3c4f50u: goto label_3c4f50;
        case 0x3c4f54u: goto label_3c4f54;
        case 0x3c4f58u: goto label_3c4f58;
        case 0x3c4f5cu: goto label_3c4f5c;
        case 0x3c4f60u: goto label_3c4f60;
        case 0x3c4f64u: goto label_3c4f64;
        case 0x3c4f68u: goto label_3c4f68;
        case 0x3c4f6cu: goto label_3c4f6c;
        case 0x3c4f70u: goto label_3c4f70;
        case 0x3c4f74u: goto label_3c4f74;
        case 0x3c4f78u: goto label_3c4f78;
        case 0x3c4f7cu: goto label_3c4f7c;
        case 0x3c4f80u: goto label_3c4f80;
        case 0x3c4f84u: goto label_3c4f84;
        case 0x3c4f88u: goto label_3c4f88;
        case 0x3c4f8cu: goto label_3c4f8c;
        case 0x3c4f90u: goto label_3c4f90;
        case 0x3c4f94u: goto label_3c4f94;
        case 0x3c4f98u: goto label_3c4f98;
        case 0x3c4f9cu: goto label_3c4f9c;
        case 0x3c4fa0u: goto label_3c4fa0;
        case 0x3c4fa4u: goto label_3c4fa4;
        case 0x3c4fa8u: goto label_3c4fa8;
        case 0x3c4facu: goto label_3c4fac;
        case 0x3c4fb0u: goto label_3c4fb0;
        case 0x3c4fb4u: goto label_3c4fb4;
        case 0x3c4fb8u: goto label_3c4fb8;
        case 0x3c4fbcu: goto label_3c4fbc;
        case 0x3c4fc0u: goto label_3c4fc0;
        case 0x3c4fc4u: goto label_3c4fc4;
        case 0x3c4fc8u: goto label_3c4fc8;
        case 0x3c4fccu: goto label_3c4fcc;
        default: break;
    }

    ctx->pc = 0x3c4ed0u;

label_3c4ed0:
    // 0x3c4ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c4ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c4ed4:
    // 0x3c4ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4ed8:
    // 0x3c4ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c4ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c4edc:
    // 0x3c4edc: 0x90850054  lbu         $a1, 0x54($a0)
    ctx->pc = 0x3c4edcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_3c4ee0:
    // 0x3c4ee0: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_3c4ee4:
    if (ctx->pc == 0x3C4EE4u) {
        ctx->pc = 0x3C4EE4u;
            // 0x3c4ee4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C4EE8u;
        goto label_3c4ee8;
    }
    ctx->pc = 0x3C4EE0u;
    {
        const bool branch_taken_0x3c4ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4ee0) {
            ctx->pc = 0x3C4EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4EE0u;
            // 0x3c4ee4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4F0Cu;
            goto label_3c4f0c;
        }
    }
    ctx->pc = 0x3C4EE8u;
label_3c4ee8:
    // 0x3c4ee8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3c4eec:
    if (ctx->pc == 0x3C4EECu) {
        ctx->pc = 0x3C4EECu;
            // 0x3c4eec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C4EF0u;
        goto label_3c4ef0;
    }
    ctx->pc = 0x3C4EE8u;
    {
        const bool branch_taken_0x3c4ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4ee8) {
            ctx->pc = 0x3C4EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4EE8u;
            // 0x3c4eec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4EF8u;
            goto label_3c4ef8;
        }
    }
    ctx->pc = 0x3C4EF0u;
label_3c4ef0:
    // 0x3c4ef0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c4ef4:
    if (ctx->pc == 0x3C4EF4u) {
        ctx->pc = 0x3C4EF4u;
            // 0x3c4ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3C4EF8u;
        goto label_3c4ef8;
    }
    ctx->pc = 0x3C4EF0u;
    {
        const bool branch_taken_0x3c4ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4EF0u;
            // 0x3c4ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ef0) {
            ctx->pc = 0x3C4F1Cu;
            goto label_3c4f1c;
        }
    }
    ctx->pc = 0x3C4EF8u;
label_3c4ef8:
    // 0x3c4ef8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c4ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c4efc:
    // 0x3c4efc: 0x320f809  jalr        $t9
label_3c4f00:
    if (ctx->pc == 0x3C4F00u) {
        ctx->pc = 0x3C4F00u;
            // 0x3c4f00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C4F04u;
        goto label_3c4f04;
    }
    ctx->pc = 0x3C4EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4F04u);
        ctx->pc = 0x3C4F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4EFCu;
            // 0x3c4f00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F04u; }
            if (ctx->pc != 0x3C4F04u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4F04u;
label_3c4f04:
    // 0x3c4f04: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c4f08:
    if (ctx->pc == 0x3C4F08u) {
        ctx->pc = 0x3C4F0Cu;
        goto label_3c4f0c;
    }
    ctx->pc = 0x3C4F04u;
    {
        const bool branch_taken_0x3c4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f04) {
            ctx->pc = 0x3C4F18u;
            goto label_3c4f18;
        }
    }
    ctx->pc = 0x3C4F0Cu;
label_3c4f0c:
    // 0x3c4f0c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c4f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c4f10:
    // 0x3c4f10: 0x320f809  jalr        $t9
label_3c4f14:
    if (ctx->pc == 0x3C4F14u) {
        ctx->pc = 0x3C4F14u;
            // 0x3c4f14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C4F18u;
        goto label_3c4f18;
    }
    ctx->pc = 0x3C4F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4F18u);
        ctx->pc = 0x3C4F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F10u;
            // 0x3c4f14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F18u; }
            if (ctx->pc != 0x3C4F18u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4F18u;
label_3c4f18:
    // 0x3c4f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c4f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4f1c:
    // 0x3c4f1c: 0x3e00008  jr          $ra
label_3c4f20:
    if (ctx->pc == 0x3C4F20u) {
        ctx->pc = 0x3C4F20u;
            // 0x3c4f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3C4F24u;
        goto label_3c4f24;
    }
    ctx->pc = 0x3C4F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F1Cu;
            // 0x3c4f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4F24u;
label_3c4f24:
    // 0x3c4f24: 0x0  nop
    ctx->pc = 0x3c4f24u;
    // NOP
label_3c4f28:
    // 0x3c4f28: 0x0  nop
    ctx->pc = 0x3c4f28u;
    // NOP
label_3c4f2c:
    // 0x3c4f2c: 0x0  nop
    ctx->pc = 0x3c4f2cu;
    // NOP
label_3c4f30:
    // 0x3c4f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c4f34:
    // 0x3c4f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c4f38:
    // 0x3c4f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c4f3c:
    // 0x3c4f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c4f40:
    // 0x3c4f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4f44:
    // 0x3c4f44: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_3c4f48:
    if (ctx->pc == 0x3C4F48u) {
        ctx->pc = 0x3C4F48u;
            // 0x3c4f48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F4Cu;
        goto label_3c4f4c;
    }
    ctx->pc = 0x3C4F44u;
    {
        const bool branch_taken_0x3c4f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F44u;
            // 0x3c4f48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f44) {
            ctx->pc = 0x3C4FACu;
            goto label_3c4fac;
        }
    }
    ctx->pc = 0x3C4F4Cu;
label_3c4f4c:
    // 0x3c4f4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c4f50:
    // 0x3c4f50: 0x24428cd0  addiu       $v0, $v0, -0x7330
    ctx->pc = 0x3c4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
label_3c4f54:
    // 0x3c4f54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c4f58:
    // 0x3c4f58: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x3c4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3c4f5c:
    // 0x3c4f5c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3c4f60:
    if (ctx->pc == 0x3C4F60u) {
        ctx->pc = 0x3C4F64u;
        goto label_3c4f64;
    }
    ctx->pc = 0x3C4F5Cu;
    {
        const bool branch_taken_0x3c4f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f5c) {
            ctx->pc = 0x3C4F74u;
            goto label_3c4f74;
        }
    }
    ctx->pc = 0x3C4F64u;
label_3c4f64:
    // 0x3c4f64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c4f68:
    // 0x3c4f68: 0xc0fe48c  jal         func_3F9230
label_3c4f6c:
    if (ctx->pc == 0x3C4F6Cu) {
        ctx->pc = 0x3C4F6Cu;
            // 0x3c4f6c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3C4F70u;
        goto label_3c4f70;
    }
    ctx->pc = 0x3C4F68u;
    SET_GPR_U32(ctx, 31, 0x3C4F70u);
    ctx->pc = 0x3C4F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F68u;
            // 0x3c4f6c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F70u; }
        if (ctx->pc != 0x3C4F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F70u; }
        if (ctx->pc != 0x3C4F70u) { return; }
    }
    ctx->pc = 0x3C4F70u;
label_3c4f70:
    // 0x3c4f70: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x3c4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_3c4f74:
    // 0x3c4f74: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3c4f78:
    if (ctx->pc == 0x3C4F78u) {
        ctx->pc = 0x3C4F78u;
            // 0x3c4f78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3C4F7Cu;
        goto label_3c4f7c;
    }
    ctx->pc = 0x3C4F74u;
    {
        const bool branch_taken_0x3c4f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f74) {
            ctx->pc = 0x3C4F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F74u;
            // 0x3c4f78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4F98u;
            goto label_3c4f98;
        }
    }
    ctx->pc = 0x3C4F7Cu;
label_3c4f7c:
    // 0x3c4f7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c4f80:
    // 0x3c4f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4f84:
    // 0x3c4f84: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c4f88:
    // 0x3c4f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c4f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4f8c:
    // 0x3c4f8c: 0xc057a68  jal         func_15E9A0
label_3c4f90:
    if (ctx->pc == 0x3C4F90u) {
        ctx->pc = 0x3C4F90u;
            // 0x3c4f90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C4F94u;
        goto label_3c4f94;
    }
    ctx->pc = 0x3C4F8Cu;
    SET_GPR_U32(ctx, 31, 0x3C4F94u);
    ctx->pc = 0x3C4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F8Cu;
            // 0x3c4f90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F94u; }
        if (ctx->pc != 0x3C4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4F94u; }
        if (ctx->pc != 0x3C4F94u) { return; }
    }
    ctx->pc = 0x3C4F94u;
label_3c4f94:
    // 0x3c4f94: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c4f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c4f98:
    // 0x3c4f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c4f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c4f9c:
    // 0x3c4f9c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c4fa0:
    if (ctx->pc == 0x3C4FA0u) {
        ctx->pc = 0x3C4FA0u;
            // 0x3c4fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FA4u;
        goto label_3c4fa4;
    }
    ctx->pc = 0x3C4F9Cu;
    {
        const bool branch_taken_0x3c4f9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c4f9c) {
            ctx->pc = 0x3C4FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4F9Cu;
            // 0x3c4fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4FB0u;
            goto label_3c4fb0;
        }
    }
    ctx->pc = 0x3C4FA4u;
label_3c4fa4:
    // 0x3c4fa4: 0xc0400a8  jal         func_1002A0
label_3c4fa8:
    if (ctx->pc == 0x3C4FA8u) {
        ctx->pc = 0x3C4FA8u;
            // 0x3c4fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FACu;
        goto label_3c4fac;
    }
    ctx->pc = 0x3C4FA4u;
    SET_GPR_U32(ctx, 31, 0x3C4FACu);
    ctx->pc = 0x3C4FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4FA4u;
            // 0x3c4fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4FACu; }
        if (ctx->pc != 0x3C4FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4FACu; }
        if (ctx->pc != 0x3C4FACu) { return; }
    }
    ctx->pc = 0x3C4FACu;
label_3c4fac:
    // 0x3c4fac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c4facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4fb0:
    // 0x3c4fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c4fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4fb4:
    // 0x3c4fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c4fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4fb8:
    // 0x3c4fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c4fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4fbc:
    // 0x3c4fbc: 0x3e00008  jr          $ra
label_3c4fc0:
    if (ctx->pc == 0x3C4FC0u) {
        ctx->pc = 0x3C4FC0u;
            // 0x3c4fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C4FC4u;
        goto label_3c4fc4;
    }
    ctx->pc = 0x3C4FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4FBCu;
            // 0x3c4fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4FC4u;
label_3c4fc4:
    // 0x3c4fc4: 0x0  nop
    ctx->pc = 0x3c4fc4u;
    // NOP
label_3c4fc8:
    // 0x3c4fc8: 0x0  nop
    ctx->pc = 0x3c4fc8u;
    // NOP
label_3c4fcc:
    // 0x3c4fcc: 0x0  nop
    ctx->pc = 0x3c4fccu;
    // NOP
}
