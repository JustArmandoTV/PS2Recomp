#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001884D8
// Address: 0x1884d8 - 0x1885d8
void sub_001884D8_0x1884d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001884D8_0x1884d8");
#endif

    switch (ctx->pc) {
        case 0x18859cu: goto label_18859c;
        default: break;
    }

    ctx->pc = 0x1884d8u;

    // 0x1884d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1884d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1884dc: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1884dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1884e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1884e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1884e4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1884e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1884ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1884ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1884f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1884f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1884f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1884fc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x188500: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x188500u;
    {
        const bool branch_taken_0x188500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188500u;
            // 0x188504: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188500) {
            ctx->pc = 0x188530u;
            goto label_188530;
        }
    }
    ctx->pc = 0x188508u;
    // 0x188508: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x18850c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18850cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188514: 0x24848028  addiu       $a0, $a0, -0x7FD8
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934568));
    // 0x188518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18851c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18851cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188524: 0x8061fea  j           func_187FA8
    ctx->pc = 0x188524u;
    ctx->pc = 0x188528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188524u;
            // 0x188528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18852Cu;
    // 0x18852c: 0x0  nop
    ctx->pc = 0x18852cu;
    // NOP
label_188530:
    // 0x188530: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x188530u;
    {
        const bool branch_taken_0x188530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188530u;
            // 0x188534: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188530) {
            ctx->pc = 0x188560u;
            goto label_188560;
        }
    }
    ctx->pc = 0x188538u;
    // 0x188538: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x18853c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18853cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188544: 0x24848050  addiu       $a0, $a0, -0x7FB0
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934608));
    // 0x188548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18854c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18854cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188554: 0x8061fea  j           func_187FA8
    ctx->pc = 0x188554u;
    ctx->pc = 0x188558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188554u;
            // 0x188558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18855Cu;
    // 0x18855c: 0x0  nop
    ctx->pc = 0x18855cu;
    // NOP
label_188560:
    // 0x188560: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x188564: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x188568: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18856c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18856cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x188570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x188570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x188574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188578: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x188578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x18857c: 0x2610fba0  addiu       $s0, $s0, -0x460
    ctx->pc = 0x18857cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966176));
    // 0x188580: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x188584: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188588: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x188588u;
    {
        const bool branch_taken_0x188588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188588) {
            ctx->pc = 0x18858Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188588u;
            // 0x18858c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x188590u;
    // 0x188590: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x188594: 0xc061fea  jal         func_187FA8
    ctx->pc = 0x188594u;
    SET_GPR_U32(ctx, 31, 0x18859Cu);
    ctx->pc = 0x188598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188594u;
            // 0x188598: 0x24848078  addiu       $a0, $a0, -0x7F88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18859Cu; }
        if (ctx->pc != 0x18859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FA8_0x187fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18859Cu; }
        if (ctx->pc != 0x18859Cu) { return; }
    }
    ctx->pc = 0x18859Cu;
label_18859c:
    // 0x18859c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x18859cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1885a0:
    // 0x1885a0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1885A0u;
    {
        const bool branch_taken_0x1885a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A0u;
            // 0x1885a4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a0) {
            ctx->pc = 0x1885B0u;
            goto label_1885b0;
        }
    }
    ctx->pc = 0x1885A8u;
    // 0x1885a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1885A8u;
    {
        const bool branch_taken_0x1885a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A8u;
            // 0x1885ac: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a8) {
            ctx->pc = 0x1885BCu;
            goto label_1885bc;
        }
    }
    ctx->pc = 0x1885B0u;
label_1885b0:
    // 0x1885b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1885b4: 0x24427fa8  addiu       $v0, $v0, 0x7FA8
    ctx->pc = 0x1885b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32680));
    // 0x1885b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1885b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1885bc:
    // 0x1885bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1885bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1885c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1885c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1885c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1885c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1885c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1885c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1885cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1885ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1885d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1885D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1885D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885D0u;
            // 0x1885d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1885D8u;
}
