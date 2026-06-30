#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295210
// Address: 0x295210 - 0x295290
void sub_00295210_0x295210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295210_0x295210");
#endif

    switch (ctx->pc) {
        case 0x295210u: goto label_295210;
        case 0x295214u: goto label_295214;
        case 0x295218u: goto label_295218;
        case 0x29521cu: goto label_29521c;
        case 0x295220u: goto label_295220;
        case 0x295224u: goto label_295224;
        case 0x295228u: goto label_295228;
        case 0x29522cu: goto label_29522c;
        case 0x295230u: goto label_295230;
        case 0x295234u: goto label_295234;
        case 0x295238u: goto label_295238;
        case 0x29523cu: goto label_29523c;
        case 0x295240u: goto label_295240;
        case 0x295244u: goto label_295244;
        case 0x295248u: goto label_295248;
        case 0x29524cu: goto label_29524c;
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        default: break;
    }

    ctx->pc = 0x295210u;

label_295210:
    // 0x295210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_295214:
    // 0x295214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x295214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_295218:
    // 0x295218: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29521c:
    // 0x29521c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_295220:
    // 0x295220: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x295220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295224:
    // 0x295224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_295228:
    // 0x295228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29522c:
    // 0x29522c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x29522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_295230:
    // 0x295230: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x295230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_295234:
    // 0x295234: 0x620000c  bltz        $s1, . + 4 + (0xC << 2)
label_295238:
    if (ctx->pc == 0x295238u) {
        ctx->pc = 0x295238u;
            // 0x295238: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29523Cu;
        goto label_29523c;
    }
    ctx->pc = 0x295234u;
    {
        const bool branch_taken_0x295234 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x295238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295234u;
            // 0x295238: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295234) {
            ctx->pc = 0x295268u;
            goto label_295268;
        }
    }
    ctx->pc = 0x29523Cu;
label_29523c:
    // 0x29523c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29523cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_295240:
    // 0x295240: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x295240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_295244:
    // 0x295244: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x295244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_295248:
    // 0x295248: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29524c:
    // 0x29524c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29524cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_295250:
    // 0x295250: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x295250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_295254:
    // 0x295254: 0x320f809  jalr        $t9
label_295258:
    if (ctx->pc == 0x295258u) {
        ctx->pc = 0x295258u;
            // 0x295258: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29525Cu;
        goto label_29525c;
    }
    ctx->pc = 0x295254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29525Cu);
        ctx->pc = 0x295258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295254u;
            // 0x295258: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29525Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29525Cu; }
            if (ctx->pc != 0x29525Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29525Cu;
label_29525c:
    // 0x29525c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29525cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_295260:
    // 0x295260: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_295264:
    if (ctx->pc == 0x295264u) {
        ctx->pc = 0x295264u;
            // 0x295264: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x295268u;
        goto label_295268;
    }
    ctx->pc = 0x295260u;
    {
        const bool branch_taken_0x295260 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x295264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295260u;
            // 0x295264: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295260) {
            ctx->pc = 0x295240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295240;
        }
    }
    ctx->pc = 0x295268u;
label_295268:
    // 0x295268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x295268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29526c:
    // 0x29526c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29526cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_295270:
    // 0x295270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295274:
    // 0x295274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295278:
    // 0x295278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x295278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29527c:
    // 0x29527c: 0x3e00008  jr          $ra
label_295280:
    if (ctx->pc == 0x295280u) {
        ctx->pc = 0x295280u;
            // 0x295280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x295284u;
        goto label_295284;
    }
    ctx->pc = 0x29527Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29527Cu;
            // 0x295280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295284u;
label_295284:
    // 0x295284: 0x0  nop
    ctx->pc = 0x295284u;
    // NOP
label_295288:
    // 0x295288: 0x0  nop
    ctx->pc = 0x295288u;
    // NOP
label_29528c:
    // 0x29528c: 0x0  nop
    ctx->pc = 0x29528cu;
    // NOP
}
