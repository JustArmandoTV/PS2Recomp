#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0330
// Address: 0x2f0330 - 0x2f0380
void sub_002F0330_0x2f0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0330_0x2f0330");
#endif

    switch (ctx->pc) {
        case 0x2f0330u: goto label_2f0330;
        case 0x2f0334u: goto label_2f0334;
        case 0x2f0338u: goto label_2f0338;
        case 0x2f033cu: goto label_2f033c;
        case 0x2f0340u: goto label_2f0340;
        case 0x2f0344u: goto label_2f0344;
        case 0x2f0348u: goto label_2f0348;
        case 0x2f034cu: goto label_2f034c;
        case 0x2f0350u: goto label_2f0350;
        case 0x2f0354u: goto label_2f0354;
        case 0x2f0358u: goto label_2f0358;
        case 0x2f035cu: goto label_2f035c;
        case 0x2f0360u: goto label_2f0360;
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0368u: goto label_2f0368;
        case 0x2f036cu: goto label_2f036c;
        case 0x2f0370u: goto label_2f0370;
        case 0x2f0374u: goto label_2f0374;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f037cu: goto label_2f037c;
        default: break;
    }

    ctx->pc = 0x2f0330u;

label_2f0330:
    // 0x2f0330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f0334:
    // 0x2f0334: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f0338:
    // 0x2f0338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f033c:
    // 0x2f033c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x2f033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_2f0340:
    // 0x2f0340: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f0340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0344:
    // 0x2f0344: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x2f0344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_2f0348:
    // 0x2f0348: 0x320f809  jalr        $t9
label_2f034c:
    if (ctx->pc == 0x2F034Cu) {
        ctx->pc = 0x2F0350u;
        goto label_2f0350;
    }
    ctx->pc = 0x2F0348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0350u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0350u; }
            if (ctx->pc != 0x2F0350u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0350u;
label_2f0350:
    // 0x2f0350: 0x3c0243c2  lui         $v0, 0x43C2
    ctx->pc = 0x2f0350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17346 << 16));
label_2f0354:
    // 0x2f0354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0358:
    // 0x2f0358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f035c:
    // 0x2f035c: 0x0  nop
    ctx->pc = 0x2f035cu;
    // NOP
label_2f0360:
    // 0x2f0360: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f0364:
    // 0x2f0364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f0368:
    // 0x2f0368: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f036c:
    // 0x2f036c: 0x3e00008  jr          $ra
label_2f0370:
    if (ctx->pc == 0x2F0370u) {
        ctx->pc = 0x2F0370u;
            // 0x2f0370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2F0374u;
        goto label_2f0374;
    }
    ctx->pc = 0x2F036Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F036Cu;
            // 0x2f0370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0374u;
label_2f0374:
    // 0x2f0374: 0x0  nop
    ctx->pc = 0x2f0374u;
    // NOP
label_2f0378:
    // 0x2f0378: 0x0  nop
    ctx->pc = 0x2f0378u;
    // NOP
label_2f037c:
    // 0x2f037c: 0x0  nop
    ctx->pc = 0x2f037cu;
    // NOP
}
