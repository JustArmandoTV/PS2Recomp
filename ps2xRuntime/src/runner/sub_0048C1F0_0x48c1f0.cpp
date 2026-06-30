#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C1F0
// Address: 0x48c1f0 - 0x48c2b0
void sub_0048C1F0_0x48c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C1F0_0x48c1f0");
#endif

    switch (ctx->pc) {
        case 0x48c1f0u: goto label_48c1f0;
        case 0x48c1f4u: goto label_48c1f4;
        case 0x48c1f8u: goto label_48c1f8;
        case 0x48c1fcu: goto label_48c1fc;
        case 0x48c200u: goto label_48c200;
        case 0x48c204u: goto label_48c204;
        case 0x48c208u: goto label_48c208;
        case 0x48c20cu: goto label_48c20c;
        case 0x48c210u: goto label_48c210;
        case 0x48c214u: goto label_48c214;
        case 0x48c218u: goto label_48c218;
        case 0x48c21cu: goto label_48c21c;
        case 0x48c220u: goto label_48c220;
        case 0x48c224u: goto label_48c224;
        case 0x48c228u: goto label_48c228;
        case 0x48c22cu: goto label_48c22c;
        case 0x48c230u: goto label_48c230;
        case 0x48c234u: goto label_48c234;
        case 0x48c238u: goto label_48c238;
        case 0x48c23cu: goto label_48c23c;
        case 0x48c240u: goto label_48c240;
        case 0x48c244u: goto label_48c244;
        case 0x48c248u: goto label_48c248;
        case 0x48c24cu: goto label_48c24c;
        case 0x48c250u: goto label_48c250;
        case 0x48c254u: goto label_48c254;
        case 0x48c258u: goto label_48c258;
        case 0x48c25cu: goto label_48c25c;
        case 0x48c260u: goto label_48c260;
        case 0x48c264u: goto label_48c264;
        case 0x48c268u: goto label_48c268;
        case 0x48c26cu: goto label_48c26c;
        case 0x48c270u: goto label_48c270;
        case 0x48c274u: goto label_48c274;
        case 0x48c278u: goto label_48c278;
        case 0x48c27cu: goto label_48c27c;
        case 0x48c280u: goto label_48c280;
        case 0x48c284u: goto label_48c284;
        case 0x48c288u: goto label_48c288;
        case 0x48c28cu: goto label_48c28c;
        case 0x48c290u: goto label_48c290;
        case 0x48c294u: goto label_48c294;
        case 0x48c298u: goto label_48c298;
        case 0x48c29cu: goto label_48c29c;
        case 0x48c2a0u: goto label_48c2a0;
        case 0x48c2a4u: goto label_48c2a4;
        case 0x48c2a8u: goto label_48c2a8;
        case 0x48c2acu: goto label_48c2ac;
        default: break;
    }

    ctx->pc = 0x48c1f0u;

label_48c1f0:
    // 0x48c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48c1f4:
    // 0x48c1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48c1f8:
    // 0x48c1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c1fc:
    // 0x48c1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c200:
    // 0x48c200: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c204:
    // 0x48c204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48c204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c208:
    // 0x48c208: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x48c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_48c20c:
    // 0x48c20c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c210:
    // 0x48c210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c214:
    // 0x48c214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c218:
    // 0x48c218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c21c:
    // 0x48c21c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c220:
    // 0x48c220: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x48c220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_48c224:
    // 0x48c224: 0x320f809  jalr        $t9
label_48c228:
    if (ctx->pc == 0x48C228u) {
        ctx->pc = 0x48C22Cu;
        goto label_48c22c;
    }
    ctx->pc = 0x48C224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C22Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C22Cu; }
            if (ctx->pc != 0x48C22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48C22Cu;
label_48c22c:
    // 0x48c22c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x48c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c230:
    // 0x48c230: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x48c230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c234:
    // 0x48c234: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x48c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c238:
    // 0x48c238: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48c23c:
    // 0x48c23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48c240:
    // 0x48c240: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x48c240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c244:
    // 0x48c244: 0x922300c0  lbu         $v1, 0xC0($s1)
    ctx->pc = 0x48c244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
label_48c248:
    // 0x48c248: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_48c24c:
    if (ctx->pc == 0x48C24Cu) {
        ctx->pc = 0x48C24Cu;
            // 0x48c24c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x48C250u;
        goto label_48c250;
    }
    ctx->pc = 0x48C248u;
    {
        const bool branch_taken_0x48c248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c248) {
            ctx->pc = 0x48C24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C248u;
            // 0x48c24c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C270u;
            goto label_48c270;
        }
    }
    ctx->pc = 0x48C250u;
label_48c250:
    // 0x48c250: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48c254:
    // 0x48c254: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x48c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_48c258:
    // 0x48c258: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x48c258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_48c25c:
    // 0x48c25c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c260:
    // 0x48c260: 0xc04a508  jal         func_129420
label_48c264:
    if (ctx->pc == 0x48C264u) {
        ctx->pc = 0x48C264u;
            // 0x48c264: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48C268u;
        goto label_48c268;
    }
    ctx->pc = 0x48C260u;
    SET_GPR_U32(ctx, 31, 0x48C268u);
    ctx->pc = 0x48C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C260u;
            // 0x48c264: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C268u; }
        if (ctx->pc != 0x48C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C268u; }
        if (ctx->pc != 0x48C268u) { return; }
    }
    ctx->pc = 0x48C268u;
label_48c268:
    // 0x48c268: 0xa22000c0  sb          $zero, 0xC0($s1)
    ctx->pc = 0x48c268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 192), (uint8_t)GPR_U32(ctx, 0));
label_48c26c:
    // 0x48c26c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x48c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c270:
    // 0x48c270: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48c270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48c274:
    // 0x48c274: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x48c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c278:
    // 0x48c278: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x48c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c27c:
    // 0x48c27c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48c280:
    // 0x48c280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48c284:
    // 0x48c284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c288:
    // 0x48c288: 0xa4650046  sh          $a1, 0x46($v1)
    ctx->pc = 0x48c288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 5));
label_48c28c:
    // 0x48c28c: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x48c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_48c290:
    // 0x48c290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48c290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48c294:
    // 0x48c294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c298:
    // 0x48c298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c29c:
    // 0x48c29c: 0x3e00008  jr          $ra
label_48c2a0:
    if (ctx->pc == 0x48C2A0u) {
        ctx->pc = 0x48C2A0u;
            // 0x48c2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48C2A4u;
        goto label_48c2a4;
    }
    ctx->pc = 0x48C29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C29Cu;
            // 0x48c2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C2A4u;
label_48c2a4:
    // 0x48c2a4: 0x0  nop
    ctx->pc = 0x48c2a4u;
    // NOP
label_48c2a8:
    // 0x48c2a8: 0x0  nop
    ctx->pc = 0x48c2a8u;
    // NOP
label_48c2ac:
    // 0x48c2ac: 0x0  nop
    ctx->pc = 0x48c2acu;
    // NOP
}
