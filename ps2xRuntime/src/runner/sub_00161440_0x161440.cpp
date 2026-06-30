#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161440
// Address: 0x161440 - 0x161568
void sub_00161440_0x161440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161440_0x161440");
#endif

    switch (ctx->pc) {
        case 0x16146cu: goto label_16146c;
        case 0x16149cu: goto label_16149c;
        case 0x1614b0u: goto label_1614b0;
        case 0x1614c4u: goto label_1614c4;
        case 0x161520u: goto label_161520;
        default: break;
    }

    ctx->pc = 0x161440u;

    // 0x161440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161444: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x161444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x161448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16144c: 0x2463ccf8  addiu       $v1, $v1, -0x3308
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954232));
    // 0x161450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161454: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x161458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16145c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16145cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x161460: 0xac50d130  sw          $s0, -0x2ED0($v0)
    ctx->pc = 0x161460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955312), GPR_U32(ctx, 16));
    // 0x161464: 0xc057eb8  jal         func_15FAE0
    ctx->pc = 0x161464u;
    SET_GPR_U32(ctx, 31, 0x16146Cu);
    ctx->pc = 0x161468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161464u;
            // 0x161468: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FAE0u;
    if (runtime->hasFunction(0x15FAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15FAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16146Cu; }
        if (ctx->pc != 0x16146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FAE0_0x15fae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16146Cu; }
        if (ctx->pc != 0x16146Cu) { return; }
    }
    ctx->pc = 0x16146Cu;
label_16146c:
    // 0x16146c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x16146cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x161470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x161470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x161474: 0x2463ccd0  addiu       $v1, $v1, -0x3330
    ctx->pc = 0x161474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954192));
    // 0x161478: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x161478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x16147c: 0x2442ccdc  addiu       $v0, $v0, -0x3324
    ctx->pc = 0x16147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954204));
    // 0x161480: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x161480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x161484: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x161484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161488: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x161488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x16148c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161490: 0x24c65998  addiu       $a2, $a2, 0x5998
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22936));
    // 0x161494: 0xc057d74  jal         func_15F5D0
    ctx->pc = 0x161494u;
    SET_GPR_U32(ctx, 31, 0x16149Cu);
    ctx->pc = 0x161498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161494u;
            // 0x161498: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F5D0u;
    if (runtime->hasFunction(0x15F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16149Cu; }
        if (ctx->pc != 0x16149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F5D0_0x15f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16149Cu; }
        if (ctx->pc != 0x16149Cu) { return; }
    }
    ctx->pc = 0x16149Cu;
label_16149c:
    // 0x16149c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x16149cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1614a0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1614a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1614a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1614a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1614a8: 0xc057d74  jal         func_15F5D0
    ctx->pc = 0x1614A8u;
    SET_GPR_U32(ctx, 31, 0x1614B0u);
    ctx->pc = 0x1614ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614A8u;
            // 0x1614ac: 0x24c659a8  addiu       $a2, $a2, 0x59A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F5D0u;
    if (runtime->hasFunction(0x15F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614B0u; }
        if (ctx->pc != 0x1614B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F5D0_0x15f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614B0u; }
        if (ctx->pc != 0x1614B0u) { return; }
    }
    ctx->pc = 0x1614B0u;
label_1614b0:
    // 0x1614b0: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1614b4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1614b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1614b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1614bc: 0xc057d74  jal         func_15F5D0
    ctx->pc = 0x1614BCu;
    SET_GPR_U32(ctx, 31, 0x1614C4u);
    ctx->pc = 0x1614C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614BCu;
            // 0x1614c0: 0x24c659b8  addiu       $a2, $a2, 0x59B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F5D0u;
    if (runtime->hasFunction(0x15F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614C4u; }
        if (ctx->pc != 0x1614C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F5D0_0x15f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614C4u; }
        if (ctx->pc != 0x1614C4u) { return; }
    }
    ctx->pc = 0x1614C4u;
label_1614c4:
    // 0x1614c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1614c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1614c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1614ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1614D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614D0u;
            // 0x1614d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1614D8u;
    // 0x1614d8: 0x0  nop
    ctx->pc = 0x1614d8u;
    // NOP
    // 0x1614dc: 0x0  nop
    ctx->pc = 0x1614dcu;
    // NOP
    // 0x1614e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1614e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1614e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1614e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1614e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1614e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1614ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1614ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1614F0u;
    {
        const bool branch_taken_0x1614f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614f0) {
            ctx->pc = 0x1614F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1614F0u;
            // 0x1614f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161524u;
            goto label_161524;
        }
    }
    ctx->pc = 0x1614F8u;
    // 0x1614f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1614fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1614fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x161500: 0x2442ccf8  addiu       $v0, $v0, -0x3308
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954232));
    // 0x161504: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x161504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x161508: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x161508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16150c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x161510: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161510u;
    {
        const bool branch_taken_0x161510 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161510u;
            // 0x161514: 0xac40d130  sw          $zero, -0x2ED0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161510) {
            ctx->pc = 0x161520u;
            goto label_161520;
        }
    }
    ctx->pc = 0x161518u;
    // 0x161518: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x161518u;
    SET_GPR_U32(ctx, 31, 0x161520u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161520u; }
        if (ctx->pc != 0x161520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161520u; }
        if (ctx->pc != 0x161520u) { return; }
    }
    ctx->pc = 0x161520u;
label_161520:
    // 0x161520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161524:
    // 0x161524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16152c: 0x3e00008  jr          $ra
    ctx->pc = 0x16152Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16152Cu;
            // 0x161530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161534u;
    // 0x161534: 0x0  nop
    ctx->pc = 0x161534u;
    // NOP
    // 0x161538: 0x0  nop
    ctx->pc = 0x161538u;
    // NOP
    // 0x16153c: 0x0  nop
    ctx->pc = 0x16153cu;
    // NOP
    // 0x161540: 0x80584a0  j           func_161280
    ctx->pc = 0x161540u;
    ctx->pc = 0x161544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161540u;
            // 0x161544: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161280u;
    {
        auto targetFn = runtime->lookupFunction(0x161280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x161548u;
    // 0x161548: 0x0  nop
    ctx->pc = 0x161548u;
    // NOP
    // 0x16154c: 0x0  nop
    ctx->pc = 0x16154cu;
    // NOP
    // 0x161550: 0x80584c0  j           func_161300
    ctx->pc = 0x161550u;
    ctx->pc = 0x161554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161550u;
            // 0x161554: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161300u;
    {
        auto targetFn = runtime->lookupFunction(0x161300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x161558u;
    // 0x161558: 0x0  nop
    ctx->pc = 0x161558u;
    // NOP
    // 0x16155c: 0x0  nop
    ctx->pc = 0x16155cu;
    // NOP
    // 0x161560: 0x80584ec  j           func_1613B0
    ctx->pc = 0x161560u;
    ctx->pc = 0x161564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161560u;
            // 0x161564: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1613B0u;
    if (runtime->hasFunction(0x1613B0u)) {
        auto targetFn = runtime->lookupFunction(0x1613B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001613B0_0x1613b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161568u;
}
