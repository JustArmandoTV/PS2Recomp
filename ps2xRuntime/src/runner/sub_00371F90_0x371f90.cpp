#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371F90
// Address: 0x371f90 - 0x3720d0
void sub_00371F90_0x371f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371F90_0x371f90");
#endif

    switch (ctx->pc) {
        case 0x371fd0u: goto label_371fd0;
        case 0x37202cu: goto label_37202c;
        case 0x372068u: goto label_372068;
        default: break;
    }

    ctx->pc = 0x371f90u;

    // 0x371f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x371f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x371f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x371f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fa0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x371FA0u;
    {
        const bool branch_taken_0x371fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x371fa0) {
            ctx->pc = 0x371FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371FA0u;
            // 0x371fa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x371FA8u;
    // 0x371fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x371fac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x371facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x371fb0: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x371fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x371fb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371fb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x371fb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x371fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x371fbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x371fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x371fc0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x371FC0u;
    {
        const bool branch_taken_0x371fc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x371FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371FC0u;
            // 0x371fc4: 0xac406050  sw          $zero, 0x6050($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fc0) {
            ctx->pc = 0x371FD0u;
            goto label_371fd0;
        }
    }
    ctx->pc = 0x371FC8u;
    // 0x371fc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x371FC8u;
    SET_GPR_U32(ctx, 31, 0x371FD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371FD0u; }
        if (ctx->pc != 0x371FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371FD0u; }
        if (ctx->pc != 0x371FD0u) { return; }
    }
    ctx->pc = 0x371FD0u;
label_371fd0:
    // 0x371fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_371fd4:
    // 0x371fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x371FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371FDCu;
            // 0x371fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371FE4u;
    // 0x371fe4: 0x0  nop
    ctx->pc = 0x371fe4u;
    // NOP
    // 0x371fe8: 0x0  nop
    ctx->pc = 0x371fe8u;
    // NOP
    // 0x371fec: 0x0  nop
    ctx->pc = 0x371fecu;
    // NOP
    // 0x371ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x371ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x371ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x371ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372004: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x372004u;
    {
        const bool branch_taken_0x372004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x372008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372004u;
            // 0x372008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372004) {
            ctx->pc = 0x372068u;
            goto label_372068;
        }
    }
    ctx->pc = 0x37200Cu;
    // 0x37200c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372010: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x372010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
    // 0x372014: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x372014u;
    {
        const bool branch_taken_0x372014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x372018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372014u;
            // 0x372018: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372014) {
            ctx->pc = 0x372050u;
            goto label_372050;
        }
    }
    ctx->pc = 0x37201Cu;
    // 0x37201c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372020: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x372020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x372024: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x372024u;
    SET_GPR_U32(ctx, 31, 0x37202Cu);
    ctx->pc = 0x372028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372024u;
            // 0x372028: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37202Cu; }
        if (ctx->pc != 0x37202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37202Cu; }
        if (ctx->pc != 0x37202Cu) { return; }
    }
    ctx->pc = 0x37202Cu;
label_37202c:
    // 0x37202c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x37202Cu;
    {
        const bool branch_taken_0x37202c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37202c) {
            ctx->pc = 0x372030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37202Cu;
            // 0x372030: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372054u;
            goto label_372054;
        }
    }
    ctx->pc = 0x372034u;
    // 0x372034: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372038: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x372038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x37203c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37203Cu;
    {
        const bool branch_taken_0x37203c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x372040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37203Cu;
            // 0x372040: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37203c) {
            ctx->pc = 0x372050u;
            goto label_372050;
        }
    }
    ctx->pc = 0x372044u;
    // 0x372044: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372048: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x372048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x37204c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37204cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_372050:
    // 0x372050: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x372050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_372054:
    // 0x372054: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x372054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x372058: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372058u;
    {
        const bool branch_taken_0x372058 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x372058) {
            ctx->pc = 0x37205Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372058u;
            // 0x37205c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37206Cu;
            goto label_37206c;
        }
    }
    ctx->pc = 0x372060u;
    // 0x372060: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x372060u;
    SET_GPR_U32(ctx, 31, 0x372068u);
    ctx->pc = 0x372064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372060u;
            // 0x372064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372068u; }
        if (ctx->pc != 0x372068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372068u; }
        if (ctx->pc != 0x372068u) { return; }
    }
    ctx->pc = 0x372068u;
label_372068:
    // 0x372068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37206c:
    // 0x37206c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372078: 0x3e00008  jr          $ra
    ctx->pc = 0x372078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372078u;
            // 0x37207c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372080u;
    // 0x372080: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372084: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x372088: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x372088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x37208c: 0x24636f30  addiu       $v1, $v1, 0x6F30
    ctx->pc = 0x37208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28464));
    // 0x372090: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x372090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x372094: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372098: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x372098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x37209c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37209cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3720a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3720a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3720a4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3720a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x3720a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3720a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3720ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3720acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3720b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3720b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3720b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3720b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3720b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3720bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3720bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3720c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3720C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3720C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3720C0u;
            // 0x3720c4: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3720C8u;
    // 0x3720c8: 0x0  nop
    ctx->pc = 0x3720c8u;
    // NOP
    // 0x3720cc: 0x0  nop
    ctx->pc = 0x3720ccu;
    // NOP
}
