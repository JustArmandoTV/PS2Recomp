#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186440
// Address: 0x186440 - 0x186558
void sub_00186440_0x186440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186440_0x186440");
#endif

    switch (ctx->pc) {
        case 0x186478u: goto label_186478;
        case 0x186510u: goto label_186510;
        case 0x18653cu: goto label_18653c;
        case 0x186544u: goto label_186544;
        default: break;
    }

    ctx->pc = 0x186440u;

    // 0x186440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186444: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x186448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18644c: 0x25034fb8  addiu       $v1, $t0, 0x4FB8
    ctx->pc = 0x18644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20408));
    // 0x186450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186454: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x186454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186458: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x186458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18645c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18645cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186460: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186464: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x186464u;
    {
        const bool branch_taken_0x186464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186464u;
            // 0x186468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186464) {
            ctx->pc = 0x18649Cu;
            goto label_18649c;
        }
    }
    ctx->pc = 0x18646Cu;
    // 0x18646c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x18646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x186470: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x186470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x186474: 0x0  nop
    ctx->pc = 0x186474u;
    // NOP
label_186478:
    // 0x186478: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x186478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x18647c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18647Cu;
    {
        const bool branch_taken_0x18647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18647Cu;
            // 0x186480: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18647c) {
            ctx->pc = 0x18649Cu;
            goto label_18649c;
        }
    }
    ctx->pc = 0x186484u;
    // 0x186484: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186488: 0x0  nop
    ctx->pc = 0x186488u;
    // NOP
    // 0x18648c: 0x0  nop
    ctx->pc = 0x18648cu;
    // NOP
    // 0x186490: 0x0  nop
    ctx->pc = 0x186490u;
    // NOP
    // 0x186494: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186494u;
    {
        const bool branch_taken_0x186494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186494) {
            ctx->pc = 0x186498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186494u;
            // 0x186498: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186478;
        }
    }
    ctx->pc = 0x18649Cu;
label_18649c:
    // 0x18649c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x18649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1864a0: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1864A0u;
    {
        const bool branch_taken_0x1864a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1864A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864A0u;
            // 0x1864a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864a0) {
            ctx->pc = 0x186514u;
            goto label_186514;
        }
    }
    ctx->pc = 0x1864A8u;
    // 0x1864a8: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1864ac: 0x25034fb8  addiu       $v1, $t0, 0x4FB8
    ctx->pc = 0x1864acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20408));
    // 0x1864b0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1864b4: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1864b8: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x1864b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1864bc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1864c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1864c4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1864c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1864c8: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x1864c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1864cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1864ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1864d0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1864d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1864d4: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1864d8: 0x24634f80  addiu       $v1, $v1, 0x4F80
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20352));
    // 0x1864dc: 0x24a57c60  addiu       $a1, $a1, 0x7C60
    ctx->pc = 0x1864dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31840));
    // 0x1864e0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1864e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1864e4: 0x24c66280  addiu       $a2, $a2, 0x6280
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25216));
    // 0x1864e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1864e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1864ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1864ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1864f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1864f4: 0xa2090005  sb          $t1, 0x5($s0)
    ctx->pc = 0x1864f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x1864f8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1864f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1864fc: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1864fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x186500: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x186500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x186504: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x186504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x186508: 0xc0619d4  jal         func_186750
    ctx->pc = 0x186508u;
    SET_GPR_U32(ctx, 31, 0x186510u);
    ctx->pc = 0x18650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186508u;
            // 0x18650c: 0xae10002c  sw          $s0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186750u;
    if (runtime->hasFunction(0x186750u)) {
        auto targetFn = runtime->lookupFunction(0x186750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186510u; }
        if (ctx->pc != 0x186510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186750_0x186750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186510u; }
        if (ctx->pc != 0x186510u) { return; }
    }
    ctx->pc = 0x186510u;
label_186510:
    // 0x186510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186514:
    // 0x186514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186518: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18651c: 0x3e00008  jr          $ra
    ctx->pc = 0x18651Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18651Cu;
            // 0x186520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186524u;
    // 0x186524: 0x0  nop
    ctx->pc = 0x186524u;
    // NOP
    // 0x186528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18652c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186534: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x186534u;
    SET_GPR_U32(ctx, 31, 0x18653Cu);
    ctx->pc = 0x186538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186534u;
            // 0x186538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18653Cu; }
        if (ctx->pc != 0x18653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18653Cu; }
        if (ctx->pc != 0x18653Cu) { return; }
    }
    ctx->pc = 0x18653Cu;
label_18653c:
    // 0x18653c: 0xc061956  jal         func_186558
    ctx->pc = 0x18653Cu;
    SET_GPR_U32(ctx, 31, 0x186544u);
    ctx->pc = 0x186540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18653Cu;
            // 0x186540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186558u;
    if (runtime->hasFunction(0x186558u)) {
        auto targetFn = runtime->lookupFunction(0x186558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186544u; }
        if (ctx->pc != 0x186544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186558_0x186558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186544u; }
        if (ctx->pc != 0x186544u) { return; }
    }
    ctx->pc = 0x186544u;
label_186544:
    // 0x186544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18654c: 0x8061282  j           func_184A08
    ctx->pc = 0x18654Cu;
    ctx->pc = 0x186550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18654Cu;
            // 0x186550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186554u;
    // 0x186554: 0x0  nop
    ctx->pc = 0x186554u;
    // NOP
}
