#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7140
// Address: 0x2c7140 - 0x2c7280
void sub_002C7140_0x2c7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7140_0x2c7140");
#endif

    switch (ctx->pc) {
        case 0x2c715cu: goto label_2c715c;
        case 0x2c7164u: goto label_2c7164;
        case 0x2c71b0u: goto label_2c71b0;
        case 0x2c7210u: goto label_2c7210;
        case 0x2c721cu: goto label_2c721c;
        case 0x2c7228u: goto label_2c7228;
        case 0x2c7234u: goto label_2c7234;
        case 0x2c7240u: goto label_2c7240;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7264u: goto label_2c7264;
        default: break;
    }

    ctx->pc = 0x2c7140u;

    // 0x2c7140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7144: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2c7144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x2c7148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c714c: 0x34467a1a  ori         $a2, $v0, 0x7A1A
    ctx->pc = 0x2c714cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
    // 0x2c7150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7154: 0xc0b1d74  jal         func_2C75D0
    ctx->pc = 0x2C7154u;
    SET_GPR_U32(ctx, 31, 0x2C715Cu);
    ctx->pc = 0x2C7158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7154u;
            // 0x2c7158: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C75D0u;
    if (runtime->hasFunction(0x2C75D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C75D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C715Cu; }
        if (ctx->pc != 0x2C715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C75D0_0x2c75d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C715Cu; }
        if (ctx->pc != 0x2C715Cu) { return; }
    }
    ctx->pc = 0x2C715Cu;
label_2c715c:
    // 0x2c715c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C715Cu;
    SET_GPR_U32(ctx, 31, 0x2C7164u);
    ctx->pc = 0x2C7160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C715Cu;
            // 0x2c7160: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7164u; }
        if (ctx->pc != 0x2C7164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7164u; }
        if (ctx->pc != 0x2C7164u) { return; }
    }
    ctx->pc = 0x2C7164u;
label_2c7164:
    // 0x2c7164: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7168: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c716c: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x2c716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2c7170: 0x246309c8  addiu       $v1, $v1, 0x9C8
    ctx->pc = 0x2c7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2504));
    // 0x2c7174: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7178: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c717c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c717cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7180: 0x24423e20  addiu       $v0, $v0, 0x3E20
    ctx->pc = 0x2c7180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15904));
    // 0x2c7184: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c7188: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c718c: 0x24633e58  addiu       $v1, $v1, 0x3E58
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15960));
    // 0x2c7190: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c7190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7194: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c719c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c719cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c71a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C71A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C71A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71A0u;
            // 0x2c71a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C71A8u;
    // 0x2c71a8: 0x0  nop
    ctx->pc = 0x2c71a8u;
    // NOP
    // 0x2c71ac: 0x0  nop
    ctx->pc = 0x2c71acu;
    // NOP
label_2c71b0:
    // 0x2c71b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c71b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c71b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c71b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c71bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c71bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c71c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c71c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c71c4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C71C4u;
    {
        const bool branch_taken_0x2c71c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71C4u;
            // 0x2c71c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71c4) {
            ctx->pc = 0x2C7264u;
            goto label_2c7264;
        }
    }
    ctx->pc = 0x2C71CCu;
    // 0x2c71cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c71d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c71d4: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x2c71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2c71d8: 0x244209c8  addiu       $v0, $v0, 0x9C8
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2504));
    // 0x2c71dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c71e0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C71E0u;
    {
        const bool branch_taken_0x2c71e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71E0u;
            // 0x2c71e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71e0) {
            ctx->pc = 0x2C724Cu;
            goto label_2c724c;
        }
    }
    ctx->pc = 0x2C71E8u;
    // 0x2c71e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c71ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c71f0: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x2c71f4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c71f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c71f8: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x2c71fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7200: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c7200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c7204: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c7208: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C7208u;
    SET_GPR_U32(ctx, 31, 0x2C7210u);
    ctx->pc = 0x2C720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7208u;
            // 0x2c720c: 0x24a573c0  addiu       $a1, $a1, 0x73C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7210u; }
        if (ctx->pc != 0x2C7210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7210u; }
        if (ctx->pc != 0x2C7210u) { return; }
    }
    ctx->pc = 0x2C7210u;
label_2c7210:
    // 0x2c7210: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c7214: 0xc0b1cd4  jal         func_2C7350
    ctx->pc = 0x2C7214u;
    SET_GPR_U32(ctx, 31, 0x2C721Cu);
    ctx->pc = 0x2C7218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7214u;
            // 0x2c7218: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7350u;
    if (runtime->hasFunction(0x2C7350u)) {
        auto targetFn = runtime->lookupFunction(0x2C7350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C721Cu; }
        if (ctx->pc != 0x2C721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7350_0x2c7350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C721Cu; }
        if (ctx->pc != 0x2C721Cu) { return; }
    }
    ctx->pc = 0x2C721Cu;
label_2c721c:
    // 0x2c721c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c7220: 0xc0b1cb8  jal         func_2C72E0
    ctx->pc = 0x2C7220u;
    SET_GPR_U32(ctx, 31, 0x2C7228u);
    ctx->pc = 0x2C7224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7220u;
            // 0x2c7224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C72E0u;
    if (runtime->hasFunction(0x2C72E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C72E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7228u; }
        if (ctx->pc != 0x2C7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C72E0_0x2c72e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7228u; }
        if (ctx->pc != 0x2C7228u) { return; }
    }
    ctx->pc = 0x2C7228u;
label_2c7228:
    // 0x2c7228: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c722c: 0xc0b1cb8  jal         func_2C72E0
    ctx->pc = 0x2C722Cu;
    SET_GPR_U32(ctx, 31, 0x2C7234u);
    ctx->pc = 0x2C7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C722Cu;
            // 0x2c7230: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C72E0u;
    if (runtime->hasFunction(0x2C72E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C72E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7234u; }
        if (ctx->pc != 0x2C7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C72E0_0x2c72e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7234u; }
        if (ctx->pc != 0x2C7234u) { return; }
    }
    ctx->pc = 0x2C7234u;
label_2c7234:
    // 0x2c7234: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c7234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c7238: 0xc0b1ca0  jal         func_2C7280
    ctx->pc = 0x2C7238u;
    SET_GPR_U32(ctx, 31, 0x2C7240u);
    ctx->pc = 0x2C723Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7238u;
            // 0x2c723c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7280u;
    if (runtime->hasFunction(0x2C7280u)) {
        auto targetFn = runtime->lookupFunction(0x2C7280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7240u; }
        if (ctx->pc != 0x2C7240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7280_0x2c7280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7240u; }
        if (ctx->pc != 0x2C7240u) { return; }
    }
    ctx->pc = 0x2C7240u;
label_2c7240:
    // 0x2c7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7244: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C7244u;
    SET_GPR_U32(ctx, 31, 0x2C724Cu);
    ctx->pc = 0x2C7248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7244u;
            // 0x2c7248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C724Cu; }
        if (ctx->pc != 0x2C724Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C724Cu; }
        if (ctx->pc != 0x2C724Cu) { return; }
    }
    ctx->pc = 0x2C724Cu;
label_2c724c:
    // 0x2c724c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c7250: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c7254: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7254u;
    {
        const bool branch_taken_0x2c7254 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7254) {
            ctx->pc = 0x2C7258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7254u;
            // 0x2c7258: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7268u;
            goto label_2c7268;
        }
    }
    ctx->pc = 0x2C725Cu;
    // 0x2c725c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C725Cu;
    SET_GPR_U32(ctx, 31, 0x2C7264u);
    ctx->pc = 0x2C7260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C725Cu;
            // 0x2c7260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7264u; }
        if (ctx->pc != 0x2C7264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7264u; }
        if (ctx->pc != 0x2C7264u) { return; }
    }
    ctx->pc = 0x2C7264u;
label_2c7264:
    // 0x2c7264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7268:
    // 0x2c7268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c726c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c726cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7274: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7274u;
            // 0x2c7278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C727Cu;
    // 0x2c727c: 0x0  nop
    ctx->pc = 0x2c727cu;
    // NOP
}
