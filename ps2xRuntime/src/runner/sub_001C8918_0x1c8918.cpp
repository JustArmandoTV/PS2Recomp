#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8918
// Address: 0x1c8918 - 0x1c8a30
void sub_001C8918_0x1c8918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8918_0x1c8918");
#endif

    switch (ctx->pc) {
        case 0x1c8950u: goto label_1c8950;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c8a20u: goto label_1c8a20;
        default: break;
    }

    ctx->pc = 0x1c8918u;

    // 0x1c8918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c891c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8924: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8924u;
    {
        const bool branch_taken_0x1c8924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8924u;
            // 0x1c8928: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8924) {
            ctx->pc = 0x1C893Cu;
            goto label_1c893c;
        }
    }
    ctx->pc = 0x1C892Cu;
    // 0x1c892c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C892Cu;
    {
        const bool branch_taken_0x1c892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C892Cu;
            // 0x1c8930: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c892c) {
            ctx->pc = 0x1C8950u;
            goto label_1c8950;
        }
    }
    ctx->pc = 0x1C8934u;
    // 0x1c8934: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8934u;
    {
        const bool branch_taken_0x1c8934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8934) {
            ctx->pc = 0x1C8948u;
            goto label_1c8948;
        }
    }
    ctx->pc = 0x1C893Cu;
label_1c893c:
    // 0x1c893c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C893Cu;
    {
        const bool branch_taken_0x1c893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C893Cu;
            // 0x1c8940: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c893c) {
            ctx->pc = 0x1C8950u;
            goto label_1c8950;
        }
    }
    ctx->pc = 0x1C8944u;
    // 0x1c8944: 0x0  nop
    ctx->pc = 0x1c8944u;
    // NOP
label_1c8948:
    // 0x1c8948: 0xc072162  jal         func_1C8588
    ctx->pc = 0x1C8948u;
    SET_GPR_U32(ctx, 31, 0x1C8950u);
    ctx->pc = 0x1C8588u;
    if (runtime->hasFunction(0x1C8588u)) {
        auto targetFn = runtime->lookupFunction(0x1C8588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8950u; }
        if (ctx->pc != 0x1C8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8588_0x1c8588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8950u; }
        if (ctx->pc != 0x1C8950u) { return; }
    }
    ctx->pc = 0x1C8950u;
label_1c8950:
    // 0x1c8950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8954u;
            // 0x1c8958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C895Cu;
    // 0x1c895c: 0x0  nop
    ctx->pc = 0x1c895cu;
    // NOP
    // 0x1c8960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8964: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c8964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c896c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c896cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8970: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1c8970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8974: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1c8974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8978: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8978u;
    {
        const bool branch_taken_0x1c8978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8978u;
            // 0x1c897c: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8978) {
            ctx->pc = 0x1C89A8u;
            goto label_1c89a8;
        }
    }
    ctx->pc = 0x1C8980u;
    // 0x1c8980: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8980u;
    {
        const bool branch_taken_0x1c8980 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c8980) {
            ctx->pc = 0x1C8984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8980u;
            // 0x1c8984: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C8988u;
    // 0x1c8988: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8988u;
    {
        const bool branch_taken_0x1c8988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8988u;
            // 0x1c898c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8988) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C8990u;
    // 0x1c8990: 0x5400009  bltz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8990u;
    {
        const bool branch_taken_0x1c8990 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x1c8990) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C8998u;
    // 0x1c8998: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8998u;
    {
        const bool branch_taken_0x1c8998 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8998u;
            // 0x1c899c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8998) {
            ctx->pc = 0x1C89BCu;
            goto label_1c89bc;
        }
    }
    ctx->pc = 0x1C89A0u;
    // 0x1c89a0: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C89A0u;
    {
        const bool branch_taken_0x1c89a0 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x1c89a0) {
            ctx->pc = 0x1C89B0u;
            goto label_1c89b0;
        }
    }
    ctx->pc = 0x1C89A8u;
label_1c89a8:
    // 0x1c89a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C89A8u;
    {
        const bool branch_taken_0x1c89a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89A8u;
            // 0x1c89ac: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89a8) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C89B0u;
label_1c89b0:
    // 0x1c89b0: 0xc072174  jal         func_1C85D0
    ctx->pc = 0x1C89B0u;
    SET_GPR_U32(ctx, 31, 0x1C89B8u);
    ctx->pc = 0x1C85D0u;
    if (runtime->hasFunction(0x1C85D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C85D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89B8u; }
        if (ctx->pc != 0x1C89B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C85D0_0x1c85d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89B8u; }
        if (ctx->pc != 0x1C89B8u) { return; }
    }
    ctx->pc = 0x1C89B8u;
label_1c89b8:
    // 0x1c89b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c89bc:
    // 0x1c89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C89BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89BCu;
            // 0x1c89c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C89C4u;
    // 0x1c89c4: 0x0  nop
    ctx->pc = 0x1c89c4u;
    // NOP
label_1c89c8:
    // 0x1c89c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c89c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c89cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c89ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c89d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c89d4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c89d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89d8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1c89d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89dc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C89E0u;
    {
        const bool branch_taken_0x1c89e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89E0u;
            // 0x1c89e4: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89e0) {
            ctx->pc = 0x1C8A10u;
            goto label_1c8a10;
        }
    }
    ctx->pc = 0x1C89E8u;
    // 0x1c89e8: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C89E8u;
    {
        const bool branch_taken_0x1c89e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c89e8) {
            ctx->pc = 0x1C89ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89E8u;
            // 0x1c89ec: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A20u;
            goto label_1c8a20;
        }
    }
    ctx->pc = 0x1C89F0u;
    // 0x1c89f0: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C89F0u;
    {
        const bool branch_taken_0x1c89f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C89F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89F0u;
            // 0x1c89f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89f0) {
            ctx->pc = 0x1C8A20u;
            goto label_1c8a20;
        }
    }
    ctx->pc = 0x1C89F8u;
    // 0x1c89f8: 0x5400009  bltz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C89F8u;
    {
        const bool branch_taken_0x1c89f8 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x1c89f8) {
            ctx->pc = 0x1C8A20u;
            goto label_1c8a20;
        }
    }
    ctx->pc = 0x1C8A00u;
    // 0x1c8a00: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8A00u;
    {
        const bool branch_taken_0x1c8a00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A00u;
            // 0x1c8a04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a00) {
            ctx->pc = 0x1C8A24u;
            goto label_1c8a24;
        }
    }
    ctx->pc = 0x1C8A08u;
    // 0x1c8a08: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8A08u;
    {
        const bool branch_taken_0x1c8a08 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x1c8a08) {
            ctx->pc = 0x1C8A18u;
            goto label_1c8a18;
        }
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8A10u;
    {
        const bool branch_taken_0x1c8a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A10u;
            // 0x1c8a14: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a10) {
            ctx->pc = 0x1C8A20u;
            goto label_1c8a20;
        }
    }
    ctx->pc = 0x1C8A18u;
label_1c8a18:
    // 0x1c8a18: 0xc0721e2  jal         func_1C8788
    ctx->pc = 0x1C8A18u;
    SET_GPR_U32(ctx, 31, 0x1C8A20u);
    ctx->pc = 0x1C8788u;
    if (runtime->hasFunction(0x1C8788u)) {
        auto targetFn = runtime->lookupFunction(0x1C8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A20u; }
        if (ctx->pc != 0x1C8A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8788_0x1c8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A20u; }
        if (ctx->pc != 0x1C8A20u) { return; }
    }
    ctx->pc = 0x1C8A20u;
label_1c8a20:
    // 0x1c8a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8a24:
    // 0x1c8a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A24u;
            // 0x1c8a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A2Cu;
    // 0x1c8a2c: 0x0  nop
    ctx->pc = 0x1c8a2cu;
    // NOP
}
