#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0430
// Address: 0x1a0430 - 0x1a04f8
void sub_001A0430_0x1a0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0430_0x1a0430");
#endif

    switch (ctx->pc) {
        case 0x1a0454u: goto label_1a0454;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04dcu: goto label_1a04dc;
        default: break;
    }

    ctx->pc = 0x1a0430u;

    // 0x1a0430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0434: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a043c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a0440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0444: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a0444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0448: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a044c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A044Cu;
    SET_GPR_U32(ctx, 31, 0x1A0454u);
    ctx->pc = 0x1A0450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A044Cu;
            // 0x1a0450: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0454u; }
        if (ctx->pc != 0x1A0454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0454u; }
        if (ctx->pc != 0x1A0454u) { return; }
    }
    ctx->pc = 0x1A0454u;
label_1a0454:
    // 0x1a0454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0458: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a0458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a045c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0464: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0468: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0468u;
    {
        const bool branch_taken_0x1a0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0468u;
            // 0x1a046c: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0468) {
            ctx->pc = 0x1A0488u;
            goto label_1a0488;
        }
    }
    ctx->pc = 0x1A0470u;
    // 0x1a0470: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0474: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A0474u;
    SET_GPR_U32(ctx, 31, 0x1A047Cu);
    ctx->pc = 0x1A0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0474u;
            // 0x1a0478: 0x2484a598  addiu       $a0, $a0, -0x5A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A047Cu; }
        if (ctx->pc != 0x1A047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A047Cu; }
        if (ctx->pc != 0x1A047Cu) { return; }
    }
    ctx->pc = 0x1A047Cu;
label_1a047c:
    // 0x1a047c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A047Cu;
    {
        const bool branch_taken_0x1a047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A047Cu;
            // 0x1a0480: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a047c) {
            ctx->pc = 0x1A04E0u;
            goto label_1a04e0;
        }
    }
    ctx->pc = 0x1A0484u;
    // 0x1a0484: 0x0  nop
    ctx->pc = 0x1a0484u;
    // NOP
label_1a0488:
    // 0x1a0488: 0x8e260418  lw          $a2, 0x418($s1)
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x1a048c: 0xc05ac40  jal         func_16B100
    ctx->pc = 0x1A048Cu;
    SET_GPR_U32(ctx, 31, 0x1A0494u);
    ctx->pc = 0x1A0490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A048Cu;
            // 0x1a0490: 0x8e310054  lw          $s1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    if (runtime->hasFunction(0x16B100u)) {
        auto targetFn = runtime->lookupFunction(0x16B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0494u; }
        if (ctx->pc != 0x1A0494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B100_0x16b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0494u; }
        if (ctx->pc != 0x1A0494u) { return; }
    }
    ctx->pc = 0x1A0494u;
label_1a0494:
    // 0x1a0494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a049c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A049Cu;
    {
        const bool branch_taken_0x1a049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A049Cu;
            // 0x1a04a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a049c) {
            ctx->pc = 0x1A04D0u;
            goto label_1a04d0;
        }
    }
    ctx->pc = 0x1A04A4u;
    // 0x1a04a4: 0xc05accc  jal         func_16B330
    ctx->pc = 0x1A04A4u;
    SET_GPR_U32(ctx, 31, 0x1A04ACu);
    ctx->pc = 0x16B330u;
    if (runtime->hasFunction(0x16B330u)) {
        auto targetFn = runtime->lookupFunction(0x16B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04ACu; }
        if (ctx->pc != 0x1A04ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B330_0x16b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04ACu; }
        if (ctx->pc != 0x1A04ACu) { return; }
    }
    ctx->pc = 0x1A04ACu;
label_1a04ac:
    // 0x1a04ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1a04b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a04b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a04b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04b8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a04b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a04bc: 0xc060054  jal         func_180150
    ctx->pc = 0x1A04BCu;
    SET_GPR_U32(ctx, 31, 0x1A04C4u);
    ctx->pc = 0x1A04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04BCu;
            // 0x1a04c0: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180150u;
    if (runtime->hasFunction(0x180150u)) {
        auto targetFn = runtime->lookupFunction(0x180150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04C4u; }
        if (ctx->pc != 0x1A04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180150_0x180150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04C4u; }
        if (ctx->pc != 0x1A04C4u) { return; }
    }
    ctx->pc = 0x1A04C4u;
label_1a04c4:
    // 0x1a04c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A04C4u;
    {
        const bool branch_taken_0x1a04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04C4u;
            // 0x1a04c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04c4) {
            ctx->pc = 0x1A04E0u;
            goto label_1a04e0;
        }
    }
    ctx->pc = 0x1A04CCu;
    // 0x1a04cc: 0x0  nop
    ctx->pc = 0x1a04ccu;
    // NOP
label_1a04d0:
    // 0x1a04d0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a04d4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A04D4u;
    SET_GPR_U32(ctx, 31, 0x1A04DCu);
    ctx->pc = 0x1A04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04D4u;
            // 0x1a04d8: 0x2484a5c8  addiu       $a0, $a0, -0x5A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04DCu; }
        if (ctx->pc != 0x1A04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04DCu; }
        if (ctx->pc != 0x1A04DCu) { return; }
    }
    ctx->pc = 0x1A04DCu;
label_1a04dc:
    // 0x1a04dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a04dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a04e0:
    // 0x1a04e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a04e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a04e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a04e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a04e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a04e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a04ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A04ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04ECu;
            // 0x1a04f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A04F4u;
    // 0x1a04f4: 0x0  nop
    ctx->pc = 0x1a04f4u;
    // NOP
}
