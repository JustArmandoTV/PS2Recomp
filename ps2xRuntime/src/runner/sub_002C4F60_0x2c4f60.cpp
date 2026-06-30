#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4F60
// Address: 0x2c4f60 - 0x2c50a0
void sub_002C4F60_0x2c4f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4F60_0x2c4f60");
#endif

    switch (ctx->pc) {
        case 0x2c4f7cu: goto label_2c4f7c;
        case 0x2c4f9cu: goto label_2c4f9c;
        case 0x2c4fd0u: goto label_2c4fd0;
        case 0x2c5030u: goto label_2c5030;
        case 0x2c503cu: goto label_2c503c;
        case 0x2c5048u: goto label_2c5048;
        case 0x2c5054u: goto label_2c5054;
        case 0x2c5060u: goto label_2c5060;
        case 0x2c506cu: goto label_2c506c;
        case 0x2c5084u: goto label_2c5084;
        default: break;
    }

    ctx->pc = 0x2c4f60u;

    // 0x2c4f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4f64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c4f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4f6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c4f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4f74: 0xc0b14f8  jal         func_2C53E0
    ctx->pc = 0x2C4F74u;
    SET_GPR_U32(ctx, 31, 0x2C4F7Cu);
    ctx->pc = 0x2C4F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F74u;
            // 0x2c4f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C53E0u;
    if (runtime->hasFunction(0x2C53E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C53E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F7Cu; }
        if (ctx->pc != 0x2C4F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C53E0_0x2c53e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F7Cu; }
        if (ctx->pc != 0x2C4F7Cu) { return; }
    }
    ctx->pc = 0x2C4F7Cu;
label_2c4f7c:
    // 0x2c4f7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4f80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4f84: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x2c4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2c4f88: 0x24420ee8  addiu       $v0, $v0, 0xEE8
    ctx->pc = 0x2c4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3816));
    // 0x2c4f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c4f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f94: 0xc0b14f4  jal         func_2C53D0
    ctx->pc = 0x2C4F94u;
    SET_GPR_U32(ctx, 31, 0x2C4F9Cu);
    ctx->pc = 0x2C4F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F94u;
            // 0x2c4f98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C53D0u;
    if (runtime->hasFunction(0x2C53D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C53D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F9Cu; }
        if (ctx->pc != 0x2C4F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C53D0_0x2c53d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F9Cu; }
        if (ctx->pc != 0x2C4F9Cu) { return; }
    }
    ctx->pc = 0x2C4F9Cu;
label_2c4f9c:
    // 0x2c4f9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c4fa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c4fa4: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x2c4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
    // 0x2c4fa8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c4fac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c4facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c4fb0: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x2c4fb4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c4fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FC4u;
            // 0x2c4fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4FCCu;
    // 0x2c4fcc: 0x0  nop
    ctx->pc = 0x2c4fccu;
    // NOP
label_2c4fd0:
    // 0x2c4fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fe4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4FE4u;
    {
        const bool branch_taken_0x2c4fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FE4u;
            // 0x2c4fe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fe4) {
            ctx->pc = 0x2C5084u;
            goto label_2c5084;
        }
    }
    ctx->pc = 0x2C4FECu;
    // 0x2c4fec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4ff0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4ff4: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x2c4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2c4ff8: 0x24420ee8  addiu       $v0, $v0, 0xEE8
    ctx->pc = 0x2c4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3816));
    // 0x2c4ffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5000: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5000u;
    {
        const bool branch_taken_0x2c5000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5000u;
            // 0x2c5004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5000) {
            ctx->pc = 0x2C506Cu;
            goto label_2c506c;
        }
    }
    ctx->pc = 0x2C5008u;
    // 0x2c5008: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c500c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5010: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x2c5010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x2c5014: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c5018: 0x24420e98  addiu       $v0, $v0, 0xE98
    ctx->pc = 0x2c5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x2c501c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c501cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5020: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c5020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c5024: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c5028: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C5028u;
    SET_GPR_U32(ctx, 31, 0x2C5030u);
    ctx->pc = 0x2C502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5028u;
            // 0x2c502c: 0x24a55170  addiu       $a1, $a1, 0x5170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5030u; }
        if (ctx->pc != 0x2C5030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5030u; }
        if (ctx->pc != 0x2C5030u) { return; }
    }
    ctx->pc = 0x2C5030u;
label_2c5030:
    // 0x2c5030: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c5034: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x2C5034u;
    SET_GPR_U32(ctx, 31, 0x2C503Cu);
    ctx->pc = 0x2C5038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5034u;
            // 0x2c5038: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C503Cu; }
        if (ctx->pc != 0x2C503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C503Cu; }
        if (ctx->pc != 0x2C503Cu) { return; }
    }
    ctx->pc = 0x2C503Cu;
label_2c503c:
    // 0x2c503c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c5040: 0xc0b1440  jal         func_2C5100
    ctx->pc = 0x2C5040u;
    SET_GPR_U32(ctx, 31, 0x2C5048u);
    ctx->pc = 0x2C5044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5040u;
            // 0x2c5044: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5100u;
    if (runtime->hasFunction(0x2C5100u)) {
        auto targetFn = runtime->lookupFunction(0x2C5100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5048u; }
        if (ctx->pc != 0x2C5048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5100_0x2c5100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5048u; }
        if (ctx->pc != 0x2C5048u) { return; }
    }
    ctx->pc = 0x2C5048u;
label_2c5048:
    // 0x2c5048: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c5048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c504c: 0xc0b1440  jal         func_2C5100
    ctx->pc = 0x2C504Cu;
    SET_GPR_U32(ctx, 31, 0x2C5054u);
    ctx->pc = 0x2C5050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C504Cu;
            // 0x2c5050: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5100u;
    if (runtime->hasFunction(0x2C5100u)) {
        auto targetFn = runtime->lookupFunction(0x2C5100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5054u; }
        if (ctx->pc != 0x2C5054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5100_0x2c5100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5054u; }
        if (ctx->pc != 0x2C5054u) { return; }
    }
    ctx->pc = 0x2C5054u;
label_2c5054:
    // 0x2c5054: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c5054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c5058: 0xc0b1428  jal         func_2C50A0
    ctx->pc = 0x2C5058u;
    SET_GPR_U32(ctx, 31, 0x2C5060u);
    ctx->pc = 0x2C505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5058u;
            // 0x2c505c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C50A0u;
    if (runtime->hasFunction(0x2C50A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C50A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5060u; }
        if (ctx->pc != 0x2C5060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C50A0_0x2c50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5060u; }
        if (ctx->pc != 0x2C5060u) { return; }
    }
    ctx->pc = 0x2C5060u;
label_2c5060:
    // 0x2c5060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5064: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C5064u;
    SET_GPR_U32(ctx, 31, 0x2C506Cu);
    ctx->pc = 0x2C5068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5064u;
            // 0x2c5068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C506Cu; }
        if (ctx->pc != 0x2C506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C506Cu; }
        if (ctx->pc != 0x2C506Cu) { return; }
    }
    ctx->pc = 0x2C506Cu;
label_2c506c:
    // 0x2c506c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c5070: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5074: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5074u;
    {
        const bool branch_taken_0x2c5074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5074) {
            ctx->pc = 0x2C5078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5074u;
            // 0x2c5078: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5088u;
            goto label_2c5088;
        }
    }
    ctx->pc = 0x2C507Cu;
    // 0x2c507c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C507Cu;
    SET_GPR_U32(ctx, 31, 0x2C5084u);
    ctx->pc = 0x2C5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C507Cu;
            // 0x2c5080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5084u; }
        if (ctx->pc != 0x2C5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5084u; }
        if (ctx->pc != 0x2C5084u) { return; }
    }
    ctx->pc = 0x2C5084u;
label_2c5084:
    // 0x2c5084: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5088:
    // 0x2c5088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c508c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c508cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5094: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5094u;
            // 0x2c5098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C509Cu;
    // 0x2c509c: 0x0  nop
    ctx->pc = 0x2c509cu;
    // NOP
}
