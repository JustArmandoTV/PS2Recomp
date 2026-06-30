#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2E40
// Address: 0x2c2e40 - 0x2c2f40
void sub_002C2E40_0x2c2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E40_0x2c2e40");
#endif

    switch (ctx->pc) {
        case 0x2c2e40u: goto label_2c2e40;
        case 0x2c2e44u: goto label_2c2e44;
        case 0x2c2e48u: goto label_2c2e48;
        case 0x2c2e4cu: goto label_2c2e4c;
        case 0x2c2e50u: goto label_2c2e50;
        case 0x2c2e54u: goto label_2c2e54;
        case 0x2c2e58u: goto label_2c2e58;
        case 0x2c2e5cu: goto label_2c2e5c;
        case 0x2c2e60u: goto label_2c2e60;
        case 0x2c2e64u: goto label_2c2e64;
        case 0x2c2e68u: goto label_2c2e68;
        case 0x2c2e6cu: goto label_2c2e6c;
        case 0x2c2e70u: goto label_2c2e70;
        case 0x2c2e74u: goto label_2c2e74;
        case 0x2c2e78u: goto label_2c2e78;
        case 0x2c2e7cu: goto label_2c2e7c;
        case 0x2c2e80u: goto label_2c2e80;
        case 0x2c2e84u: goto label_2c2e84;
        case 0x2c2e88u: goto label_2c2e88;
        case 0x2c2e8cu: goto label_2c2e8c;
        case 0x2c2e90u: goto label_2c2e90;
        case 0x2c2e94u: goto label_2c2e94;
        case 0x2c2e98u: goto label_2c2e98;
        case 0x2c2e9cu: goto label_2c2e9c;
        case 0x2c2ea0u: goto label_2c2ea0;
        case 0x2c2ea4u: goto label_2c2ea4;
        case 0x2c2ea8u: goto label_2c2ea8;
        case 0x2c2eacu: goto label_2c2eac;
        case 0x2c2eb0u: goto label_2c2eb0;
        case 0x2c2eb4u: goto label_2c2eb4;
        case 0x2c2eb8u: goto label_2c2eb8;
        case 0x2c2ebcu: goto label_2c2ebc;
        case 0x2c2ec0u: goto label_2c2ec0;
        case 0x2c2ec4u: goto label_2c2ec4;
        case 0x2c2ec8u: goto label_2c2ec8;
        case 0x2c2eccu: goto label_2c2ecc;
        case 0x2c2ed0u: goto label_2c2ed0;
        case 0x2c2ed4u: goto label_2c2ed4;
        case 0x2c2ed8u: goto label_2c2ed8;
        case 0x2c2edcu: goto label_2c2edc;
        case 0x2c2ee0u: goto label_2c2ee0;
        case 0x2c2ee4u: goto label_2c2ee4;
        case 0x2c2ee8u: goto label_2c2ee8;
        case 0x2c2eecu: goto label_2c2eec;
        case 0x2c2ef0u: goto label_2c2ef0;
        case 0x2c2ef4u: goto label_2c2ef4;
        case 0x2c2ef8u: goto label_2c2ef8;
        case 0x2c2efcu: goto label_2c2efc;
        case 0x2c2f00u: goto label_2c2f00;
        case 0x2c2f04u: goto label_2c2f04;
        case 0x2c2f08u: goto label_2c2f08;
        case 0x2c2f0cu: goto label_2c2f0c;
        case 0x2c2f10u: goto label_2c2f10;
        case 0x2c2f14u: goto label_2c2f14;
        case 0x2c2f18u: goto label_2c2f18;
        case 0x2c2f1cu: goto label_2c2f1c;
        case 0x2c2f20u: goto label_2c2f20;
        case 0x2c2f24u: goto label_2c2f24;
        case 0x2c2f28u: goto label_2c2f28;
        case 0x2c2f2cu: goto label_2c2f2c;
        case 0x2c2f30u: goto label_2c2f30;
        case 0x2c2f34u: goto label_2c2f34;
        case 0x2c2f38u: goto label_2c2f38;
        case 0x2c2f3cu: goto label_2c2f3c;
        default: break;
    }

    ctx->pc = 0x2c2e40u;

label_2c2e40:
    // 0x2c2e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2e44:
    // 0x2c2e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2e48:
    // 0x2c2e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c2e4c:
    // 0x2c2e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2e50:
    // 0x2c2e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e54:
    // 0x2c2e54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c2e58:
    if (ctx->pc == 0x2C2E58u) {
        ctx->pc = 0x2C2E58u;
            // 0x2c2e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E5Cu;
        goto label_2c2e5c;
    }
    ctx->pc = 0x2C2E54u;
    {
        const bool branch_taken_0x2c2e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E54u;
            // 0x2c2e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e54) {
            ctx->pc = 0x2C2E98u;
            goto label_2c2e98;
        }
    }
    ctx->pc = 0x2C2E5Cu;
label_2c2e5c:
    // 0x2c2e5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c2e60:
    if (ctx->pc == 0x2C2E60u) {
        ctx->pc = 0x2C2E60u;
            // 0x2c2e60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C2E64u;
        goto label_2c2e64;
    }
    ctx->pc = 0x2C2E5Cu;
    {
        const bool branch_taken_0x2c2e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e5c) {
            ctx->pc = 0x2C2E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E5Cu;
            // 0x2c2e60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E84u;
            goto label_2c2e84;
        }
    }
    ctx->pc = 0x2C2E64u;
label_2c2e64:
    // 0x2c2e64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c2e68:
    if (ctx->pc == 0x2C2E68u) {
        ctx->pc = 0x2C2E6Cu;
        goto label_2c2e6c;
    }
    ctx->pc = 0x2C2E64u;
    {
        const bool branch_taken_0x2c2e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e64) {
            ctx->pc = 0x2C2E80u;
            goto label_2c2e80;
        }
    }
    ctx->pc = 0x2C2E6Cu;
label_2c2e6c:
    // 0x2c2e6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c2e70:
    // 0x2c2e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c2e74:
    if (ctx->pc == 0x2C2E74u) {
        ctx->pc = 0x2C2E78u;
        goto label_2c2e78;
    }
    ctx->pc = 0x2C2E70u;
    {
        const bool branch_taken_0x2c2e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e70) {
            ctx->pc = 0x2C2E80u;
            goto label_2c2e80;
        }
    }
    ctx->pc = 0x2C2E78u;
label_2c2e78:
    // 0x2c2e78: 0xc0400a8  jal         func_1002A0
label_2c2e7c:
    if (ctx->pc == 0x2C2E7Cu) {
        ctx->pc = 0x2C2E80u;
        goto label_2c2e80;
    }
    ctx->pc = 0x2C2E78u;
    SET_GPR_U32(ctx, 31, 0x2C2E80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E80u; }
        if (ctx->pc != 0x2C2E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E80u; }
        if (ctx->pc != 0x2C2E80u) { return; }
    }
    ctx->pc = 0x2C2E80u;
label_2c2e80:
    // 0x2c2e80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c2e84:
    // 0x2c2e84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c2e88:
    // 0x2c2e88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c2e8c:
    if (ctx->pc == 0x2C2E8Cu) {
        ctx->pc = 0x2C2E8Cu;
            // 0x2c2e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E90u;
        goto label_2c2e90;
    }
    ctx->pc = 0x2C2E88u;
    {
        const bool branch_taken_0x2c2e88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2e88) {
            ctx->pc = 0x2C2E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E88u;
            // 0x2c2e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E9Cu;
            goto label_2c2e9c;
        }
    }
    ctx->pc = 0x2C2E90u;
label_2c2e90:
    // 0x2c2e90: 0xc0400a8  jal         func_1002A0
label_2c2e94:
    if (ctx->pc == 0x2C2E94u) {
        ctx->pc = 0x2C2E94u;
            // 0x2c2e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E98u;
        goto label_2c2e98;
    }
    ctx->pc = 0x2C2E90u;
    SET_GPR_U32(ctx, 31, 0x2C2E98u);
    ctx->pc = 0x2C2E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E90u;
            // 0x2c2e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E98u; }
        if (ctx->pc != 0x2C2E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E98u; }
        if (ctx->pc != 0x2C2E98u) { return; }
    }
    ctx->pc = 0x2C2E98u;
label_2c2e98:
    // 0x2c2e98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e9c:
    // 0x2c2e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c2ea0:
    // 0x2c2ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2ea4:
    // 0x2c2ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2ea8:
    // 0x2c2ea8: 0x3e00008  jr          $ra
label_2c2eac:
    if (ctx->pc == 0x2C2EACu) {
        ctx->pc = 0x2C2EACu;
            // 0x2c2eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C2EB0u;
        goto label_2c2eb0;
    }
    ctx->pc = 0x2C2EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EA8u;
            // 0x2c2eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2EB0u;
label_2c2eb0:
    // 0x2c2eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2eb4:
    // 0x2c2eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2eb8:
    // 0x2c2eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c2ebc:
    // 0x2c2ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2ec0:
    // 0x2c2ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ec4:
    // 0x2c2ec4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c2ec8:
    if (ctx->pc == 0x2C2EC8u) {
        ctx->pc = 0x2C2EC8u;
            // 0x2c2ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2ECCu;
        goto label_2c2ecc;
    }
    ctx->pc = 0x2C2EC4u;
    {
        const bool branch_taken_0x2c2ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EC4u;
            // 0x2c2ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec4) {
            ctx->pc = 0x2C2F24u;
            goto label_2c2f24;
        }
    }
    ctx->pc = 0x2C2ECCu;
label_2c2ecc:
    // 0x2c2ecc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2ed0:
    // 0x2c2ed0: 0x24421270  addiu       $v0, $v0, 0x1270
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4720));
label_2c2ed4:
    // 0x2c2ed4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c2ed8:
    // 0x2c2ed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c2edc:
    // 0x2c2edc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c2edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c2ee0:
    // 0x2c2ee0: 0x320f809  jalr        $t9
label_2c2ee4:
    if (ctx->pc == 0x2C2EE4u) {
        ctx->pc = 0x2C2EE8u;
        goto label_2c2ee8;
    }
    ctx->pc = 0x2C2EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2EE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C2EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C2EE8u; }
            if (ctx->pc != 0x2C2EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C2EE8u;
label_2c2ee8:
    // 0x2c2ee8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c2eec:
    if (ctx->pc == 0x2C2EECu) {
        ctx->pc = 0x2C2EECu;
            // 0x2c2eec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C2EF0u;
        goto label_2c2ef0;
    }
    ctx->pc = 0x2C2EE8u;
    {
        const bool branch_taken_0x2c2ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ee8) {
            ctx->pc = 0x2C2EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EE8u;
            // 0x2c2eec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F10u;
            goto label_2c2f10;
        }
    }
    ctx->pc = 0x2C2EF0u;
label_2c2ef0:
    // 0x2c2ef0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2ef4:
    // 0x2c2ef4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c2ef8:
    // 0x2c2ef8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c2efc:
    if (ctx->pc == 0x2C2EFCu) {
        ctx->pc = 0x2C2EFCu;
            // 0x2c2efc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2F00u;
        goto label_2c2f00;
    }
    ctx->pc = 0x2C2EF8u;
    {
        const bool branch_taken_0x2c2ef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EF8u;
            // 0x2c2efc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ef8) {
            ctx->pc = 0x2C2F0Cu;
            goto label_2c2f0c;
        }
    }
    ctx->pc = 0x2C2F00u;
label_2c2f00:
    // 0x2c2f00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2f04:
    // 0x2c2f04: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c2f08:
    // 0x2c2f08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c2f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c2f0c:
    // 0x2c2f0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c2f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c2f10:
    // 0x2c2f10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2f10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c2f14:
    // 0x2c2f14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c2f18:
    if (ctx->pc == 0x2C2F18u) {
        ctx->pc = 0x2C2F18u;
            // 0x2c2f18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F1Cu;
        goto label_2c2f1c;
    }
    ctx->pc = 0x2C2F14u;
    {
        const bool branch_taken_0x2c2f14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2f14) {
            ctx->pc = 0x2C2F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F14u;
            // 0x2c2f18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F28u;
            goto label_2c2f28;
        }
    }
    ctx->pc = 0x2C2F1Cu;
label_2c2f1c:
    // 0x2c2f1c: 0xc0400a8  jal         func_1002A0
label_2c2f20:
    if (ctx->pc == 0x2C2F20u) {
        ctx->pc = 0x2C2F20u;
            // 0x2c2f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F24u;
        goto label_2c2f24;
    }
    ctx->pc = 0x2C2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F24u);
    ctx->pc = 0x2C2F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F1Cu;
            // 0x2c2f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F24u; }
        if (ctx->pc != 0x2C2F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F24u; }
        if (ctx->pc != 0x2C2F24u) { return; }
    }
    ctx->pc = 0x2C2F24u;
label_2c2f24:
    // 0x2c2f24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f28:
    // 0x2c2f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c2f2c:
    // 0x2c2f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2f30:
    // 0x2c2f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2f34:
    // 0x2c2f34: 0x3e00008  jr          $ra
label_2c2f38:
    if (ctx->pc == 0x2C2F38u) {
        ctx->pc = 0x2C2F38u;
            // 0x2c2f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C2F3Cu;
        goto label_2c2f3c;
    }
    ctx->pc = 0x2C2F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F34u;
            // 0x2c2f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2F3Cu;
label_2c2f3c:
    // 0x2c2f3c: 0x0  nop
    ctx->pc = 0x2c2f3cu;
    // NOP
}
