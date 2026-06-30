#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A34A0
// Address: 0x2a34a0 - 0x2a3640
void sub_002A34A0_0x2a34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A34A0_0x2a34a0");
#endif

    switch (ctx->pc) {
        case 0x2a34d4u: goto label_2a34d4;
        case 0x2a34f4u: goto label_2a34f4;
        case 0x2a3504u: goto label_2a3504;
        case 0x2a3580u: goto label_2a3580;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35e0u: goto label_2a35e0;
        case 0x2a3614u: goto label_2a3614;
        default: break;
    }

    ctx->pc = 0x2a34a0u;

    // 0x2a34a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a34a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a34a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a34a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a34ac: 0x2442fa78  addiu       $v0, $v0, -0x588
    ctx->pc = 0x2a34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965880));
    // 0x2a34b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a34b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a34b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a34b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a34b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a34b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a34c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a34c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a34c8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a34cc: 0xc0fe63c  jal         func_3F98F0
    ctx->pc = 0x2A34CCu;
    SET_GPR_U32(ctx, 31, 0x2A34D4u);
    ctx->pc = 0x2A34D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34CCu;
            // 0x2a34d0: 0xac51e420  sw          $s1, -0x1BE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34D4u; }
        if (ctx->pc != 0x2A34D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34D4u; }
        if (ctx->pc != 0x2A34D4u) { return; }
    }
    ctx->pc = 0x2A34D4u;
label_2a34d4:
    // 0x2a34d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a34d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a34dc: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x2a34e0: 0x2442fa6c  addiu       $v0, $v0, -0x594
    ctx->pc = 0x2a34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965868));
    // 0x2a34e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a34e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34ec: 0xc04a23e  jal         func_1288F8
    ctx->pc = 0x2A34ECu;
    SET_GPR_U32(ctx, 31, 0x2A34F4u);
    ctx->pc = 0x2A34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34ECu;
            // 0x2a34f0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288F8u;
    if (runtime->hasFunction(0x1288F8u)) {
        auto targetFn = runtime->lookupFunction(0x1288F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34F4u; }
        if (ctx->pc != 0x2A34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001288F8_0x1288f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34F4u; }
        if (ctx->pc != 0x2A34F4u) { return; }
    }
    ctx->pc = 0x2A34F4u;
label_2a34f4:
    // 0x2a34f4: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x2a34f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a34f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34fc: 0xc0fe618  jal         func_3F9860
    ctx->pc = 0x2A34FCu;
    SET_GPR_U32(ctx, 31, 0x2A3504u);
    ctx->pc = 0x2A3500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34FCu;
            // 0x2a3500: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3504u; }
        if (ctx->pc != 0x2A3504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3504u; }
        if (ctx->pc != 0x2A3504u) { return; }
    }
    ctx->pc = 0x2A3504u;
label_2a3504:
    // 0x2a3504: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a3504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a3508: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a3508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a350c: 0x24a53480  addiu       $a1, $a1, 0x3480
    ctx->pc = 0x2a350cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    // 0x2a3510: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a3514: 0xac65d9f8  sw          $a1, -0x2608($v1)
    ctx->pc = 0x2a3514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957560), GPR_U32(ctx, 5));
    // 0x2a3518: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x2a3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
    // 0x2a351c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a351cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a3520: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a3520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3524: 0xac64da00  sw          $a0, -0x2600($v1)
    ctx->pc = 0x2a3524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957568), GPR_U32(ctx, 4));
    // 0x2a3528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a352c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3534: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3534u;
            // 0x2a3538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A353Cu;
    // 0x2a353c: 0x0  nop
    ctx->pc = 0x2a353cu;
    // NOP
    // 0x2a3540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a354c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a354cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3550: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2A3550u;
    {
        const bool branch_taken_0x2a3550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3550) {
            ctx->pc = 0x2A3554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3550u;
            // 0x2a3554: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3584u;
            goto label_2a3584;
        }
    }
    ctx->pc = 0x2A3558u;
    // 0x2a3558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a355c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2a355cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a3560: 0x2442fa78  addiu       $v0, $v0, -0x588
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965880));
    // 0x2a3564: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a3564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a3568: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a356c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a3570: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3570u;
    {
        const bool branch_taken_0x2a3570 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A3574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3570u;
            // 0x2a3574: 0xac40e420  sw          $zero, -0x1BE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3570) {
            ctx->pc = 0x2A3580u;
            goto label_2a3580;
        }
    }
    ctx->pc = 0x2A3578u;
    // 0x2a3578: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A3578u;
    SET_GPR_U32(ctx, 31, 0x2A3580u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3580u; }
        if (ctx->pc != 0x2A3580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3580u; }
        if (ctx->pc != 0x2A3580u) { return; }
    }
    ctx->pc = 0x2A3580u;
label_2a3580:
    // 0x2a3580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3584:
    // 0x2a3584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a358c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A358Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A358Cu;
            // 0x2a3590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3594u;
    // 0x2a3594: 0x0  nop
    ctx->pc = 0x2a3594u;
    // NOP
    // 0x2a3598: 0x0  nop
    ctx->pc = 0x2a3598u;
    // NOP
    // 0x2a359c: 0x0  nop
    ctx->pc = 0x2a359cu;
    // NOP
label_2a35a0:
    // 0x2a35a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a35a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a35a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a35a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a35a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a35ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a35acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a35b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a35b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35b4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A35B4u;
    {
        const bool branch_taken_0x2a35b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35B4u;
            // 0x2a35b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35b4) {
            ctx->pc = 0x2A3614u;
            goto label_2a3614;
        }
    }
    ctx->pc = 0x2A35BCu;
    // 0x2a35bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a35c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a35c4: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x2a35c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x2a35c8: 0x2442fa6c  addiu       $v0, $v0, -0x594
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965868));
    // 0x2a35cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a35d0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a35d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a35d8: 0xc0fe620  jal         func_3F9880
    ctx->pc = 0x2A35D8u;
    SET_GPR_U32(ctx, 31, 0x2A35E0u);
    ctx->pc = 0x2A35DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35D8u;
            // 0x2a35dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35E0u; }
        if (ctx->pc != 0x2A35E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35E0u; }
        if (ctx->pc != 0x2A35E0u) { return; }
    }
    ctx->pc = 0x2A35E0u;
label_2a35e0:
    // 0x2a35e0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A35E0u;
    {
        const bool branch_taken_0x2a35e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a35e0) {
            ctx->pc = 0x2A35E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35E0u;
            // 0x2a35e4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3600u;
            goto label_2a3600;
        }
    }
    ctx->pc = 0x2A35E8u;
    // 0x2a35e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a35ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a35f0: 0x2463fa78  addiu       $v1, $v1, -0x588
    ctx->pc = 0x2a35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965880));
    // 0x2a35f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a35f8: 0xac40e420  sw          $zero, -0x1BE0($v0)
    ctx->pc = 0x2a35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960160), GPR_U32(ctx, 0));
    // 0x2a35fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2a35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2a3600:
    // 0x2a3600: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3604: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3604u;
    {
        const bool branch_taken_0x2a3604 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a3604) {
            ctx->pc = 0x2A3608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3604u;
            // 0x2a3608: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A360Cu;
    // 0x2a360c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A360Cu;
    SET_GPR_U32(ctx, 31, 0x2A3614u);
    ctx->pc = 0x2A3610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A360Cu;
            // 0x2a3610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3614u; }
        if (ctx->pc != 0x2A3614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3614u; }
        if (ctx->pc != 0x2A3614u) { return; }
    }
    ctx->pc = 0x2A3614u;
label_2a3614:
    // 0x2a3614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3618:
    // 0x2a3618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a361c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a361cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3624: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3624u;
            // 0x2a3628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A362Cu;
    // 0x2a362c: 0x0  nop
    ctx->pc = 0x2a362cu;
    // NOP
    // 0x2a3630: 0x80a8d68  j           func_2A35A0
    ctx->pc = 0x2A3630u;
    ctx->pc = 0x2A3634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3630u;
            // 0x2a3634: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A35A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a35a0;
    ctx->pc = 0x2A3638u;
    // 0x2a3638: 0x0  nop
    ctx->pc = 0x2a3638u;
    // NOP
    // 0x2a363c: 0x0  nop
    ctx->pc = 0x2a363cu;
    // NOP
}
