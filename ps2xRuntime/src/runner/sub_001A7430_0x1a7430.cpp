#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7430
// Address: 0x1a7430 - 0x1a7638
void sub_001A7430_0x1a7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7430_0x1a7430");
#endif

    switch (ctx->pc) {
        case 0x1a7478u: goto label_1a7478;
        case 0x1a7488u: goto label_1a7488;
        case 0x1a749cu: goto label_1a749c;
        case 0x1a7524u: goto label_1a7524;
        case 0x1a759cu: goto label_1a759c;
        default: break;
    }

    ctx->pc = 0x1a7430u;

    // 0x1a7430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7434: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a7438: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a743c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a743cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7440: 0x2a030801  slti        $v1, $s0, 0x801
    ctx->pc = 0x1a7440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1a7444: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1a7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1a7448: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x1a7448u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1a744c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a744cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7450: 0x2442beb8  addiu       $v0, $v0, -0x4148
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950584));
    // 0x1a7454: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a745c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a745cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7464: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a7464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a7468: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a746c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7470: 0xc04a508  jal         func_129420
    ctx->pc = 0x1A7470u;
    SET_GPR_U32(ctx, 31, 0x1A7478u);
    ctx->pc = 0x1A7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7470u;
            // 0x1a7474: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7478u; }
        if (ctx->pc != 0x1A7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7478u; }
        if (ctx->pc != 0x1A7478u) { return; }
    }
    ctx->pc = 0x1A7478u;
label_1a7478:
    // 0x1a7478: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7478u;
    {
        const bool branch_taken_0x1a7478 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7478u;
            // 0x1a747c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7478) {
            ctx->pc = 0x1A74ECu;
            goto label_1a74ec;
        }
    }
    ctx->pc = 0x1A7480u;
    // 0x1a7480: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a7484: 0x2453a8f8  addiu       $s3, $v0, -0x5708
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
label_1a7488:
    // 0x1a7488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a748c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1a7490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7494: 0xc068b9e  jal         func_1A2E78
    ctx->pc = 0x1A7494u;
    SET_GPR_U32(ctx, 31, 0x1A749Cu);
    ctx->pc = 0x1A7498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7494u;
            // 0x1a7498: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E78u;
    if (runtime->hasFunction(0x1A2E78u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A749Cu; }
        if (ctx->pc != 0x1A749Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E78_0x1a2e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A749Cu; }
        if (ctx->pc != 0x1A749Cu) { return; }
    }
    ctx->pc = 0x1A749Cu;
label_1a749c:
    // 0x1a749c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A749Cu;
    {
        const bool branch_taken_0x1a749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A749Cu;
            // 0x1a74a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a749c) {
            ctx->pc = 0x1A74E0u;
            goto label_1a74e0;
        }
    }
    ctx->pc = 0x1A74A4u;
    // 0x1a74a4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1a74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x1a74a8: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x1a74a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1a74ac: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x1a74acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a74b0: 0x92250009  lbu         $a1, 0x9($s1)
    ctx->pc = 0x1a74b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1a74b4: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x1a74b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a74b8: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x1a74b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a74bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a74c0: 0x9226000b  lbu         $a2, 0xB($s1)
    ctx->pc = 0x1a74c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1a74c4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1a74c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a74c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a74cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a74ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a74d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a74d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a74d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a74d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A74D8u;
    {
        const bool branch_taken_0x1a74d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74D8u;
            // 0x1a74dc: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74d8) {
            ctx->pc = 0x1A74ECu;
            goto label_1a74ec;
        }
    }
    ctx->pc = 0x1A74E0u;
label_1a74e0:
    // 0x1a74e0: 0x1e00ffe9  bgtz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1A74E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74E0u;
            // 0x1a74e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A7488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7488;
        }
    }
    ctx->pc = 0x1A74E8u;
    // 0x1a74e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a74e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a74ec:
    // 0x1a74ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a74f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a74f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a74f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a74f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a74f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a74f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a74fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a74fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7500: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7500u;
            // 0x1a7504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7508u;
    // 0x1a7508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a750c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a750cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7510: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a7510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a751c: 0xc069db8  jal         func_1A76E0
    ctx->pc = 0x1A751Cu;
    SET_GPR_U32(ctx, 31, 0x1A7524u);
    ctx->pc = 0x1A7520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A751Cu;
            // 0x1a7520: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A76E0u;
    if (runtime->hasFunction(0x1A76E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A76E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7524u; }
        if (ctx->pc != 0x1A7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A76E0_0x1a76e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7524u; }
        if (ctx->pc != 0x1A7524u) { return; }
    }
    ctx->pc = 0x1A7524u;
label_1a7524:
    // 0x1a7524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7524u;
    {
        const bool branch_taken_0x1a7524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7524u;
            // 0x1a7528: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7524) {
            ctx->pc = 0x1A7538u;
            goto label_1a7538;
        }
    }
    ctx->pc = 0x1A752Cu;
    // 0x1a752c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A752Cu;
    {
        const bool branch_taken_0x1a752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A752Cu;
            // 0x1a7530: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a752c) {
            ctx->pc = 0x1A7574u;
            goto label_1a7574;
        }
    }
    ctx->pc = 0x1A7534u;
    // 0x1a7534: 0x0  nop
    ctx->pc = 0x1a7534u;
    // NOP
label_1a7538:
    // 0x1a7538: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1a7538u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a753c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7540: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1a7540u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1a7544: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7548: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a754c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a754cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7550: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1a7550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x1a7554: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a7558: 0x8c23a9d0  lw          $v1, -0x5630($at)
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945232)));
    // 0x1a755c: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A7560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A755Cu;
            // 0x1a7560: 0x32140  sll         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A7574u;
            goto label_1a7574;
        }
    }
    ctx->pc = 0x1A7564u;
    // 0x1a7564: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a756c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a7574:
    // 0x1a7574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7578: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7578u;
            // 0x1a757c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7580u;
    // 0x1a7580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7588: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a7588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a758c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7594: 0xc069db8  jal         func_1A76E0
    ctx->pc = 0x1A7594u;
    SET_GPR_U32(ctx, 31, 0x1A759Cu);
    ctx->pc = 0x1A7598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7594u;
            // 0x1a7598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A76E0u;
    if (runtime->hasFunction(0x1A76E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A76E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A759Cu; }
        if (ctx->pc != 0x1A759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A76E0_0x1a76e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A759Cu; }
        if (ctx->pc != 0x1A759Cu) { return; }
    }
    ctx->pc = 0x1A759Cu;
label_1a759c:
    // 0x1a759c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A759Cu;
    {
        const bool branch_taken_0x1a759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A759Cu;
            // 0x1a75a0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a759c) {
            ctx->pc = 0x1A75B0u;
            goto label_1a75b0;
        }
    }
    ctx->pc = 0x1A75A4u;
    // 0x1a75a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A75A4u;
    {
        const bool branch_taken_0x1a75a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75A4u;
            // 0x1a75a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75a4) {
            ctx->pc = 0x1A7628u;
            goto label_1a7628;
        }
    }
    ctx->pc = 0x1A75ACu;
    // 0x1a75ac: 0x0  nop
    ctx->pc = 0x1a75acu;
    // NOP
label_1a75b0:
    // 0x1a75b0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1a75b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a75b4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1a75b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1a75b8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a75bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a75c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a75c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a75c8: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x1a75cc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a75ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a75d0: 0x8c23a9d0  lw          $v1, -0x5630($at)
    ctx->pc = 0x1a75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945232)));
    // 0x1a75d4: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A75D4u;
    {
        const bool branch_taken_0x1a75d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1A75D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75D4u;
            // 0x1a75d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75d4) {
            ctx->pc = 0x1A7628u;
            goto label_1a7628;
        }
    }
    ctx->pc = 0x1A75DCu;
    // 0x1a75dc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a75e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a75e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a75e4: 0x8c84aad0  lw          $a0, -0x5530($a0)
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945488)));
    // 0x1a75e8: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1a75e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1a75ec: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a75ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a75f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a75f4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1a75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1a75f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a75fc: 0x8c63a9c0  lw          $v1, -0x5640($v1)
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945216)));
    // 0x1a7600: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a7604: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a7604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7608: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a760c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A760Cu;
    {
        const bool branch_taken_0x1a760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a760c) {
            ctx->pc = 0x1A7610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A760Cu;
            // 0x1a7610: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7614u;
            goto label_1a7614;
        }
    }
    ctx->pc = 0x1A7614u;
label_1a7614:
    // 0x1a7614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7618: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a7618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a761c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a761cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7620: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a7620u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a7624: 0x1012  mflo        $v0
    ctx->pc = 0x1a7624u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1a7628:
    // 0x1a7628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a762c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A762Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A762Cu;
            // 0x1a7630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7634u;
    // 0x1a7634: 0x0  nop
    ctx->pc = 0x1a7634u;
    // NOP
}
