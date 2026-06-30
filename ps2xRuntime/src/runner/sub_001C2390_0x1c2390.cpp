#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2390
// Address: 0x1c2390 - 0x1c24f8
void sub_001C2390_0x1c2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2390_0x1c2390");
#endif

    switch (ctx->pc) {
        case 0x1c23bcu: goto label_1c23bc;
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c2420u: goto label_1c2420;
        case 0x1c2470u: goto label_1c2470;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c2498u: goto label_1c2498;
        case 0x1c24a0u: goto label_1c24a0;
        case 0x1c24b4u: goto label_1c24b4;
        case 0x1c24c4u: goto label_1c24c4;
        default: break;
    }

    ctx->pc = 0x1c2390u;

    // 0x1c2390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2394: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c2398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c2398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c239c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c23a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c23a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c23a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c23a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c23a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c23ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c23b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c23b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c23b4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C23B4u;
    SET_GPR_U32(ctx, 31, 0x1C23BCu);
    ctx->pc = 0x1C23B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23B4u;
            // 0x1c23b8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23BCu; }
        if (ctx->pc != 0x1C23BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23BCu; }
        if (ctx->pc != 0x1C23BCu) { return; }
    }
    ctx->pc = 0x1C23BCu;
label_1c23bc:
    // 0x1c23bc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c23c0: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x1c23c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c23c4: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C23C4u;
    {
        const bool branch_taken_0x1c23c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23C4u;
            // 0x1c23c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23c4) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C23CCu;
    // 0x1c23cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c23d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d4: 0x8c62a4d8  lw          $v0, -0x5B28($v1)
    ctx->pc = 0x1c23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c23d8: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x1c23d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c23dc: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1c23dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c23e0: 0xc071244  jal         func_1C4910
    ctx->pc = 0x1C23E0u;
    SET_GPR_U32(ctx, 31, 0x1C23E8u);
    ctx->pc = 0x1C23E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23E0u;
            // 0x1c23e4: 0x8c54000c  lw          $s4, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4910u;
    if (runtime->hasFunction(0x1C4910u)) {
        auto targetFn = runtime->lookupFunction(0x1C4910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23E8u; }
        if (ctx->pc != 0x1C23E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4910_0x1c4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23E8u; }
        if (ctx->pc != 0x1C23E8u) { return; }
    }
    ctx->pc = 0x1C23E8u;
label_1c23e8:
    // 0x1c23e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ec: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C23ECu;
    SET_GPR_U32(ctx, 31, 0x1C23F4u);
    ctx->pc = 0x1C23F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23ECu;
            // 0x1c23f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F4u; }
        if (ctx->pc != 0x1C23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F4u; }
        if (ctx->pc != 0x1C23F4u) { return; }
    }
    ctx->pc = 0x1C23F4u;
label_1c23f4:
    // 0x1c23f4: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C23F4u;
    {
        const bool branch_taken_0x1c23f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23F4u;
            // 0x1c23f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23f4) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C23FCu;
    // 0x1c23fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c23fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2400: 0x230202a  slt         $a0, $s1, $s0
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c2404: 0x50800034  beql        $a0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C2404u;
    {
        const bool branch_taken_0x1c2404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2404) {
            ctx->pc = 0x1C2408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2404u;
            // 0x1c2408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C24D8u;
            goto label_1c24d8;
        }
    }
    ctx->pc = 0x1C240Cu;
    // 0x1c240c: 0x82420016  lb          $v0, 0x16($s2)
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x1c2410: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2410u;
    {
        const bool branch_taken_0x1c2410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2410) {
            ctx->pc = 0x1C2444u;
            goto label_1c2444;
        }
    }
    ctx->pc = 0x1C2418u;
    // 0x1c2418: 0x26430016  addiu       $v1, $s2, 0x16
    ctx->pc = 0x1c2418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 22));
    // 0x1c241c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c241cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2420:
    // 0x1c2420: 0x230202a  slt         $a0, $s1, $s0
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c2424: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C2424u;
    {
        const bool branch_taken_0x1c2424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2424u;
            // 0x1c2428: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2424) {
            ctx->pc = 0x1C24C4u;
            goto label_1c24c4;
        }
    }
    ctx->pc = 0x1C242Cu;
    // 0x1c242c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2430: 0x0  nop
    ctx->pc = 0x1c2430u;
    // NOP
    // 0x1c2434: 0x0  nop
    ctx->pc = 0x1c2434u;
    // NOP
    // 0x1c2438: 0x0  nop
    ctx->pc = 0x1c2438u;
    // NOP
    // 0x1c243c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C243Cu;
    {
        const bool branch_taken_0x1c243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c243c) {
            ctx->pc = 0x1C2440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C243Cu;
            // 0x1c2440: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2420;
        }
    }
    ctx->pc = 0x1C2444u;
label_1c2444:
    // 0x1c2444: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2444u;
    {
        const bool branch_taken_0x1c2444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2444u;
            // 0x1c2448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2444) {
            ctx->pc = 0x1C24C4u;
            goto label_1c24c4;
        }
    }
    ctx->pc = 0x1C244Cu;
    // 0x1c244c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c244cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c2450: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c2454: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c2454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c2458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c245c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c2460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2464: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1c2464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c2468: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C2468u;
    SET_GPR_U32(ctx, 31, 0x1C2470u);
    ctx->pc = 0x1C246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2468u;
            // 0x1c246c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2470u; }
        if (ctx->pc != 0x1C2470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2470u; }
        if (ctx->pc != 0x1C2470u) { return; }
    }
    ctx->pc = 0x1C2470u;
label_1c2470:
    // 0x1c2470: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x1c2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1c2474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c2474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2478: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1C2478u;
    SET_GPR_U32(ctx, 31, 0x1C2480u);
    ctx->pc = 0x1C247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2478u;
            // 0x1c247c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2480u; }
        if (ctx->pc != 0x1C2480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2480u; }
        if (ctx->pc != 0x1C2480u) { return; }
    }
    ctx->pc = 0x1C2480u;
label_1c2480:
    // 0x1c2480: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1c2480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1c2484: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c2484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c2488: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1c248c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c248cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2490: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C2490u;
    SET_GPR_U32(ctx, 31, 0x1C2498u);
    ctx->pc = 0x1C2494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2490u;
            // 0x1c2494: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2498u; }
        if (ctx->pc != 0x1C2498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2498u; }
        if (ctx->pc != 0x1C2498u) { return; }
    }
    ctx->pc = 0x1C2498u;
label_1c2498:
    // 0x1c2498: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2498u;
    SET_GPR_U32(ctx, 31, 0x1C24A0u);
    ctx->pc = 0x1C249Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2498u;
            // 0x1c249c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (runtime->hasFunction(0x1C2250u)) {
        auto targetFn = runtime->lookupFunction(0x1C2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A0u; }
        if (ctx->pc != 0x1C24A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2250_0x1c2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A0u; }
        if (ctx->pc != 0x1C24A0u) { return; }
    }
    ctx->pc = 0x1C24A0u;
label_1c24a0:
    // 0x1c24a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C24A0u;
    {
        const bool branch_taken_0x1c24a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24a0) {
            ctx->pc = 0x1C24BCu;
            goto label_1c24bc;
        }
    }
    ctx->pc = 0x1C24A8u;
    // 0x1c24a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c24a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24ac: 0xc0702e2  jal         func_1C0B88
    ctx->pc = 0x1C24ACu;
    SET_GPR_U32(ctx, 31, 0x1C24B4u);
    ctx->pc = 0x1C24B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24ACu;
            // 0x1c24b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B88u;
    if (runtime->hasFunction(0x1C0B88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24B4u; }
        if (ctx->pc != 0x1C24B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0B88_0x1c0b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24B4u; }
        if (ctx->pc != 0x1C24B4u) { return; }
    }
    ctx->pc = 0x1C24B4u;
label_1c24b4:
    // 0x1c24b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C24B4u;
    {
        const bool branch_taken_0x1c24b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24B4u;
            // 0x1c24b8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b4) {
            ctx->pc = 0x1C24D0u;
            goto label_1c24d0;
        }
    }
    ctx->pc = 0x1C24BCu;
label_1c24bc:
    // 0x1c24bc: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C24BCu;
    SET_GPR_U32(ctx, 31, 0x1C24C4u);
    ctx->pc = 0x1C24C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24BCu;
            // 0x1c24c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24C4u; }
        if (ctx->pc != 0x1C24C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24C4u; }
        if (ctx->pc != 0x1C24C4u) { return; }
    }
    ctx->pc = 0x1C24C4u;
label_1c24c4:
    // 0x1c24c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C24C4u;
    {
        const bool branch_taken_0x1c24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24C4u;
            // 0x1c24c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24c4) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C24CCu;
    // 0x1c24cc: 0x0  nop
    ctx->pc = 0x1c24ccu;
    // NOP
label_1c24d0:
    // 0x1c24d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c24d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c24d4:
    // 0x1c24d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c24d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c24d8:
    // 0x1c24d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c24d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c24dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c24dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c24e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c24e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c24e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c24e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c24e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c24ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c24ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c24f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C24F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24F0u;
            // 0x1c24f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C24F8u;
}
