#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F050
// Address: 0x17f050 - 0x17f180
void sub_0017F050_0x17f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F050_0x17f050");
#endif

    switch (ctx->pc) {
        case 0x17f110u: goto label_17f110;
        case 0x17f120u: goto label_17f120;
        case 0x17f130u: goto label_17f130;
        case 0x17f140u: goto label_17f140;
        case 0x17f150u: goto label_17f150;
        case 0x17f160u: goto label_17f160;
        default: break;
    }

    ctx->pc = 0x17f050u;

label_17f050:
    // 0x17f050: 0x9c820008  lwu         $v0, 0x8($a0)
    ctx->pc = 0x17f050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f058: 0x3e00008  jr          $ra
    ctx->pc = 0x17F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F058u;
            // 0x17f05c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F060u;
    // 0x17f060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f064: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17f064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f06c: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x17F06Cu;
    {
        const bool branch_taken_0x17f06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F06Cu;
            // 0x17f070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f06c) {
            ctx->pc = 0x17F170u;
            goto label_17f170;
        }
    }
    ctx->pc = 0x17F074u;
    // 0x17f074: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x17f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x17f078: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17F078u;
    {
        const bool branch_taken_0x17f078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F078u;
            // 0x17f07c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f078) {
            ctx->pc = 0x17F128u;
            goto label_17f128;
        }
    }
    ctx->pc = 0x17F080u;
    // 0x17f080: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F080u;
    {
        const bool branch_taken_0x17f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F080u;
            // 0x17f084: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f080) {
            ctx->pc = 0x17F0C8u;
            goto label_17f0c8;
        }
    }
    ctx->pc = 0x17F088u;
    // 0x17f088: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x17f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x17f08c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17F08Cu;
    {
        const bool branch_taken_0x17f08c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F08Cu;
            // 0x17f090: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f08c) {
            ctx->pc = 0x17F118u;
            goto label_17f118;
        }
    }
    ctx->pc = 0x17F094u;
    // 0x17f094: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F094u;
    {
        const bool branch_taken_0x17f094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F094u;
            // 0x17f098: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f094) {
            ctx->pc = 0x17F0B0u;
            goto label_17f0b0;
        }
    }
    ctx->pc = 0x17F09Cu;
    // 0x17f09c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x17f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x17f0a0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17F0A0u;
    {
        const bool branch_taken_0x17f0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0A0u;
            // 0x17f0a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0a0) {
            ctx->pc = 0x17F108u;
            goto label_17f108;
        }
    }
    ctx->pc = 0x17F0A8u;
    // 0x17f0a8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x17F0A8u;
    {
        const bool branch_taken_0x17f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0A8u;
            // 0x17f0ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0a8) {
            ctx->pc = 0x17F174u;
            goto label_17f174;
        }
    }
    ctx->pc = 0x17F0B0u;
label_17f0b0:
    // 0x17f0b0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17F0B0u;
    {
        const bool branch_taken_0x17f0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0B0u;
            // 0x17f0b4: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0b0) {
            ctx->pc = 0x17F128u;
            goto label_17f128;
        }
    }
    ctx->pc = 0x17F0B8u;
    // 0x17f0b8: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17F0B8u;
    {
        const bool branch_taken_0x17f0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0B8u;
            // 0x17f0bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0b8) {
            ctx->pc = 0x17F138u;
            goto label_17f138;
        }
    }
    ctx->pc = 0x17F0C0u;
    // 0x17f0c0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17F0C0u;
    {
        const bool branch_taken_0x17f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0C0u;
            // 0x17f0c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c0) {
            ctx->pc = 0x17F174u;
            goto label_17f174;
        }
    }
    ctx->pc = 0x17F0C8u;
label_17f0c8:
    // 0x17f0c8: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17F0C8u;
    {
        const bool branch_taken_0x17f0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0C8u;
            // 0x17f0cc: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c8) {
            ctx->pc = 0x17F168u;
            goto label_17f168;
        }
    }
    ctx->pc = 0x17F0D0u;
    // 0x17f0d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F0D0u;
    {
        const bool branch_taken_0x17f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0D0u;
            // 0x17f0d4: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0d0) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0D8u;
    // 0x17f0d8: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x17f0dc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17F0DCu;
    {
        const bool branch_taken_0x17f0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0DCu;
            // 0x17f0e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0dc) {
            ctx->pc = 0x17F138u;
            goto label_17f138;
        }
    }
    ctx->pc = 0x17F0E4u;
    // 0x17f0e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0E4u;
            // 0x17f0e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F174u;
            goto label_17f174;
        }
    }
    ctx->pc = 0x17F0ECu;
    // 0x17f0ec: 0x0  nop
    ctx->pc = 0x17f0ecu;
    // NOP
label_17f0f0:
    // 0x17f0f0: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17F0F0u;
    {
        const bool branch_taken_0x17f0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0F0u;
            // 0x17f0f4: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0f0) {
            ctx->pc = 0x17F148u;
            goto label_17f148;
        }
    }
    ctx->pc = 0x17F0F8u;
    // 0x17f0f8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F0F8u;
    {
        const bool branch_taken_0x17f0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0F8u;
            // 0x17f0fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0f8) {
            ctx->pc = 0x17F158u;
            goto label_17f158;
        }
    }
    ctx->pc = 0x17F100u;
    // 0x17f100: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17F100u;
    {
        const bool branch_taken_0x17f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F100u;
            // 0x17f104: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f100) {
            ctx->pc = 0x17F174u;
            goto label_17f174;
        }
    }
    ctx->pc = 0x17F108u;
label_17f108:
    // 0x17f108: 0xc05fbe8  jal         func_17EFA0
    ctx->pc = 0x17F108u;
    SET_GPR_U32(ctx, 31, 0x17F110u);
    ctx->pc = 0x17EFA0u;
    if (runtime->hasFunction(0x17EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x17EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F110u; }
        if (ctx->pc != 0x17F110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EFA0_0x17efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F110u; }
        if (ctx->pc != 0x17F110u) { return; }
    }
    ctx->pc = 0x17F110u;
label_17f110:
    // 0x17f110: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17F110u;
    {
        const bool branch_taken_0x17f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F110u;
            // 0x17f114: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f110) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F118u;
label_17f118:
    // 0x17f118: 0xc05fbf0  jal         func_17EFC0
    ctx->pc = 0x17F118u;
    SET_GPR_U32(ctx, 31, 0x17F120u);
    ctx->pc = 0x17EFC0u;
    if (runtime->hasFunction(0x17EFC0u)) {
        auto targetFn = runtime->lookupFunction(0x17EFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F120u; }
        if (ctx->pc != 0x17F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EFC0_0x17efc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F120u; }
        if (ctx->pc != 0x17F120u) { return; }
    }
    ctx->pc = 0x17F120u;
label_17f120:
    // 0x17f120: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17F120u;
    {
        const bool branch_taken_0x17f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F120u;
            // 0x17f124: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f120) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F128u;
label_17f128:
    // 0x17f128: 0xc05fbfc  jal         func_17EFF0
    ctx->pc = 0x17F128u;
    SET_GPR_U32(ctx, 31, 0x17F130u);
    ctx->pc = 0x17EFF0u;
    if (runtime->hasFunction(0x17EFF0u)) {
        auto targetFn = runtime->lookupFunction(0x17EFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F130u; }
        if (ctx->pc != 0x17F130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EFF0_0x17eff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F130u; }
        if (ctx->pc != 0x17F130u) { return; }
    }
    ctx->pc = 0x17F130u;
label_17f130:
    // 0x17f130: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F130u;
    {
        const bool branch_taken_0x17f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F130u;
            // 0x17f134: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f130) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F138u;
label_17f138:
    // 0x17f138: 0xc05fc04  jal         func_17F010
    ctx->pc = 0x17F138u;
    SET_GPR_U32(ctx, 31, 0x17F140u);
    ctx->pc = 0x17F010u;
    if (runtime->hasFunction(0x17F010u)) {
        auto targetFn = runtime->lookupFunction(0x17F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F140u; }
        if (ctx->pc != 0x17F140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F010_0x17f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F140u; }
        if (ctx->pc != 0x17F140u) { return; }
    }
    ctx->pc = 0x17F140u;
label_17f140:
    // 0x17f140: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F140u;
    {
        const bool branch_taken_0x17f140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F140u;
            // 0x17f144: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f140) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F148u;
label_17f148:
    // 0x17f148: 0xc05fc10  jal         func_17F040
    ctx->pc = 0x17F148u;
    SET_GPR_U32(ctx, 31, 0x17F150u);
    ctx->pc = 0x17F040u;
    if (runtime->hasFunction(0x17F040u)) {
        auto targetFn = runtime->lookupFunction(0x17F040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F150u; }
        if (ctx->pc != 0x17F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F040_0x17f040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F150u; }
        if (ctx->pc != 0x17F150u) { return; }
    }
    ctx->pc = 0x17F150u;
label_17f150:
    // 0x17f150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17F150u;
    {
        const bool branch_taken_0x17f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F150u;
            // 0x17f154: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f150) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F158u;
label_17f158:
    // 0x17f158: 0xc05fc14  jal         func_17F050
    ctx->pc = 0x17F158u;
    SET_GPR_U32(ctx, 31, 0x17F160u);
    ctx->pc = 0x17F050u;
    goto label_17f050;
    ctx->pc = 0x17F160u;
label_17f160:
    // 0x17f160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F160u;
    {
        const bool branch_taken_0x17f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F160u;
            // 0x17f164: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f160) {
            ctx->pc = 0x17F16Cu;
            goto label_17f16c;
        }
    }
    ctx->pc = 0x17F168u;
label_17f168:
    // 0x17f168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f16c:
    // 0x17f16c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17f170:
    // 0x17f170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f174:
    // 0x17f174: 0x3e00008  jr          $ra
    ctx->pc = 0x17F174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F174u;
            // 0x17f178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F17Cu;
    // 0x17f17c: 0x0  nop
    ctx->pc = 0x17f17cu;
    // NOP
}
