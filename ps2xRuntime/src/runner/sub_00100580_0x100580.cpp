#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100580
// Address: 0x100580 - 0x100600
void sub_00100580_0x100580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100580_0x100580");
#endif

    switch (ctx->pc) {
        case 0x1005b4u: goto label_1005b4;
        case 0x1005e0u: goto label_1005e0;
        case 0x1005f4u: goto label_1005f4;
        default: break;
    }

    ctx->pc = 0x100580u;

    // 0x100580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100584: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x100584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x100588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10058c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10058cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100590: 0x8c42e080  lw          $v0, -0x1F80($v0)
    ctx->pc = 0x100590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959232)));
    // 0x100594: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x100594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x100598: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x100598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10059c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10059Cu;
    {
        const bool branch_taken_0x10059c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10059Cu;
            // 0x1005a0: 0x8c647378  lw          $a0, 0x7378($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10059c) {
            ctx->pc = 0x1005BCu;
            goto label_1005bc;
        }
    }
    ctx->pc = 0x1005A4u;
    // 0x1005a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1005a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1005ac: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x1005ACu;
    SET_GPR_U32(ctx, 31, 0x1005B4u);
    ctx->pc = 0x1005B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1005ACu;
            // 0x1005b0: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005B4u; }
        if (ctx->pc != 0x1005B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005B4u; }
        if (ctx->pc != 0x1005B4u) { return; }
    }
    ctx->pc = 0x1005B4u;
label_1005b4:
    // 0x1005b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1005B4u;
    {
        const bool branch_taken_0x1005b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005B4u;
            // 0x1005b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005b4) {
            ctx->pc = 0x1005F8u;
            goto label_1005f8;
        }
    }
    ctx->pc = 0x1005BCu;
label_1005bc:
    // 0x1005bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1005bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1005c0: 0x8c42e088  lw          $v0, -0x1F78($v0)
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959240)));
    // 0x1005c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1005c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1005c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1005C8u;
    {
        const bool branch_taken_0x1005c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005c8) {
            ctx->pc = 0x1005CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1005C8u;
            // 0x1005cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1005E8u;
            goto label_1005e8;
        }
    }
    ctx->pc = 0x1005D0u;
    // 0x1005d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1005d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1005d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1005d8: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1005D8u;
    SET_GPR_U32(ctx, 31, 0x1005E0u);
    ctx->pc = 0x1005DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1005D8u;
            // 0x1005dc: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005E0u; }
        if (ctx->pc != 0x1005E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005E0u; }
        if (ctx->pc != 0x1005E0u) { return; }
    }
    ctx->pc = 0x1005E0u;
label_1005e0:
    // 0x1005e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1005E0u;
    {
        const bool branch_taken_0x1005e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005e0) {
            ctx->pc = 0x1005F4u;
            goto label_1005f4;
        }
    }
    ctx->pc = 0x1005E8u;
label_1005e8:
    // 0x1005e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1005e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1005ec: 0xc0fe41c  jal         func_3F9070
    ctx->pc = 0x1005ECu;
    SET_GPR_U32(ctx, 31, 0x1005F4u);
    ctx->pc = 0x1005F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1005ECu;
            // 0x1005f0: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9070u;
    if (runtime->hasFunction(0x3F9070u)) {
        auto targetFn = runtime->lookupFunction(0x3F9070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005F4u; }
        if (ctx->pc != 0x1005F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9070_0x3f9070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005F4u; }
        if (ctx->pc != 0x1005F4u) { return; }
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1005f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1005f8:
    // 0x1005f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1005F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005F8u;
            // 0x1005fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100600u;
}
