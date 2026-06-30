#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA200
// Address: 0x4ca200 - 0x4ca260
void sub_004CA200_0x4ca200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA200_0x4ca200");
#endif

    switch (ctx->pc) {
        case 0x4ca244u: goto label_4ca244;
        case 0x4ca254u: goto label_4ca254;
        default: break;
    }

    ctx->pc = 0x4ca200u;

    // 0x4ca200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ca200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ca204: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ca208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ca20c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4ca20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca210: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4ca210u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4ca214: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x4CA214u;
    {
        const bool branch_taken_0x4ca214 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4CA218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA214u;
            // 0x4ca218: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca214) {
            ctx->pc = 0x4CA254u;
            goto label_4ca254;
        }
    }
    ctx->pc = 0x4CA21Cu;
    // 0x4ca21c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4ca224: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x4ca224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x4ca228: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4ca228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x4ca22c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4ca22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4ca230: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x4ca230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ca234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CA234u;
    {
        const bool branch_taken_0x4ca234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca234) {
            ctx->pc = 0x4CA24Cu;
            goto label_4ca24c;
        }
    }
    ctx->pc = 0x4CA23Cu;
    // 0x4ca23c: 0xc055754  jal         func_155D50
    ctx->pc = 0x4CA23Cu;
    SET_GPR_U32(ctx, 31, 0x4CA244u);
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA244u; }
        if (ctx->pc != 0x4CA244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA244u; }
        if (ctx->pc != 0x4CA244u) { return; }
    }
    ctx->pc = 0x4CA244u;
label_4ca244:
    // 0x4ca244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CA244u;
    {
        const bool branch_taken_0x4ca244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA244u;
            // 0x4ca248: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca244) {
            ctx->pc = 0x4CA258u;
            goto label_4ca258;
        }
    }
    ctx->pc = 0x4CA24Cu;
label_4ca24c:
    // 0x4ca24c: 0xc055990  jal         func_156640
    ctx->pc = 0x4CA24Cu;
    SET_GPR_U32(ctx, 31, 0x4CA254u);
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA254u; }
        if (ctx->pc != 0x4CA254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA254u; }
        if (ctx->pc != 0x4CA254u) { return; }
    }
    ctx->pc = 0x4CA254u;
label_4ca254:
    // 0x4ca254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca258:
    // 0x4ca258: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA258u;
            // 0x4ca25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA260u;
}
