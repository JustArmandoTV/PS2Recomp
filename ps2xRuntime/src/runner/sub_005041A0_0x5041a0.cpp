#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005041A0
// Address: 0x5041a0 - 0x504310
void sub_005041A0_0x5041a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005041A0_0x5041a0");
#endif

    switch (ctx->pc) {
        case 0x5041a0u: goto label_5041a0;
        case 0x5041a4u: goto label_5041a4;
        case 0x5041a8u: goto label_5041a8;
        case 0x5041acu: goto label_5041ac;
        case 0x5041b0u: goto label_5041b0;
        case 0x5041b4u: goto label_5041b4;
        case 0x5041b8u: goto label_5041b8;
        case 0x5041bcu: goto label_5041bc;
        case 0x5041c0u: goto label_5041c0;
        case 0x5041c4u: goto label_5041c4;
        case 0x5041c8u: goto label_5041c8;
        case 0x5041ccu: goto label_5041cc;
        case 0x5041d0u: goto label_5041d0;
        case 0x5041d4u: goto label_5041d4;
        case 0x5041d8u: goto label_5041d8;
        case 0x5041dcu: goto label_5041dc;
        case 0x5041e0u: goto label_5041e0;
        case 0x5041e4u: goto label_5041e4;
        case 0x5041e8u: goto label_5041e8;
        case 0x5041ecu: goto label_5041ec;
        case 0x5041f0u: goto label_5041f0;
        case 0x5041f4u: goto label_5041f4;
        case 0x5041f8u: goto label_5041f8;
        case 0x5041fcu: goto label_5041fc;
        case 0x504200u: goto label_504200;
        case 0x504204u: goto label_504204;
        case 0x504208u: goto label_504208;
        case 0x50420cu: goto label_50420c;
        case 0x504210u: goto label_504210;
        case 0x504214u: goto label_504214;
        case 0x504218u: goto label_504218;
        case 0x50421cu: goto label_50421c;
        case 0x504220u: goto label_504220;
        case 0x504224u: goto label_504224;
        case 0x504228u: goto label_504228;
        case 0x50422cu: goto label_50422c;
        case 0x504230u: goto label_504230;
        case 0x504234u: goto label_504234;
        case 0x504238u: goto label_504238;
        case 0x50423cu: goto label_50423c;
        case 0x504240u: goto label_504240;
        case 0x504244u: goto label_504244;
        case 0x504248u: goto label_504248;
        case 0x50424cu: goto label_50424c;
        case 0x504250u: goto label_504250;
        case 0x504254u: goto label_504254;
        case 0x504258u: goto label_504258;
        case 0x50425cu: goto label_50425c;
        case 0x504260u: goto label_504260;
        case 0x504264u: goto label_504264;
        case 0x504268u: goto label_504268;
        case 0x50426cu: goto label_50426c;
        case 0x504270u: goto label_504270;
        case 0x504274u: goto label_504274;
        case 0x504278u: goto label_504278;
        case 0x50427cu: goto label_50427c;
        case 0x504280u: goto label_504280;
        case 0x504284u: goto label_504284;
        case 0x504288u: goto label_504288;
        case 0x50428cu: goto label_50428c;
        case 0x504290u: goto label_504290;
        case 0x504294u: goto label_504294;
        case 0x504298u: goto label_504298;
        case 0x50429cu: goto label_50429c;
        case 0x5042a0u: goto label_5042a0;
        case 0x5042a4u: goto label_5042a4;
        case 0x5042a8u: goto label_5042a8;
        case 0x5042acu: goto label_5042ac;
        case 0x5042b0u: goto label_5042b0;
        case 0x5042b4u: goto label_5042b4;
        case 0x5042b8u: goto label_5042b8;
        case 0x5042bcu: goto label_5042bc;
        case 0x5042c0u: goto label_5042c0;
        case 0x5042c4u: goto label_5042c4;
        case 0x5042c8u: goto label_5042c8;
        case 0x5042ccu: goto label_5042cc;
        case 0x5042d0u: goto label_5042d0;
        case 0x5042d4u: goto label_5042d4;
        case 0x5042d8u: goto label_5042d8;
        case 0x5042dcu: goto label_5042dc;
        case 0x5042e0u: goto label_5042e0;
        case 0x5042e4u: goto label_5042e4;
        case 0x5042e8u: goto label_5042e8;
        case 0x5042ecu: goto label_5042ec;
        case 0x5042f0u: goto label_5042f0;
        case 0x5042f4u: goto label_5042f4;
        case 0x5042f8u: goto label_5042f8;
        case 0x5042fcu: goto label_5042fc;
        case 0x504300u: goto label_504300;
        case 0x504304u: goto label_504304;
        case 0x504308u: goto label_504308;
        case 0x50430cu: goto label_50430c;
        default: break;
    }

    ctx->pc = 0x5041a0u;

label_5041a0:
    // 0x5041a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5041a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5041a4:
    // 0x5041a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5041a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5041a8:
    // 0x5041a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5041a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5041ac:
    // 0x5041ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5041acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5041b0:
    // 0x5041b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5041b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5041b4:
    // 0x5041b4: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x5041b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_5041b8:
    // 0x5041b8: 0xc145e6c  jal         func_5179B0
label_5041bc:
    if (ctx->pc == 0x5041BCu) {
        ctx->pc = 0x5041BCu;
            // 0x5041bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5041C0u;
        goto label_5041c0;
    }
    ctx->pc = 0x5041B8u;
    SET_GPR_U32(ctx, 31, 0x5041C0u);
    ctx->pc = 0x5041BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5041B8u;
            // 0x5041bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5179B0u;
    if (runtime->hasFunction(0x5179B0u)) {
        auto targetFn = runtime->lookupFunction(0x5179B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041C0u; }
        if (ctx->pc != 0x5041C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005179B0_0x5179b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041C0u; }
        if (ctx->pc != 0x5041C0u) { return; }
    }
    ctx->pc = 0x5041C0u;
label_5041c0:
    // 0x5041c0: 0xc0e3658  jal         func_38D960
label_5041c4:
    if (ctx->pc == 0x5041C4u) {
        ctx->pc = 0x5041C4u;
            // 0x5041c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5041C8u;
        goto label_5041c8;
    }
    ctx->pc = 0x5041C0u;
    SET_GPR_U32(ctx, 31, 0x5041C8u);
    ctx->pc = 0x5041C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5041C0u;
            // 0x5041c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041C8u; }
        if (ctx->pc != 0x5041C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041C8u; }
        if (ctx->pc != 0x5041C8u) { return; }
    }
    ctx->pc = 0x5041C8u;
label_5041c8:
    // 0x5041c8: 0xc145e44  jal         func_517910
label_5041cc:
    if (ctx->pc == 0x5041CCu) {
        ctx->pc = 0x5041CCu;
            // 0x5041cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5041D0u;
        goto label_5041d0;
    }
    ctx->pc = 0x5041C8u;
    SET_GPR_U32(ctx, 31, 0x5041D0u);
    ctx->pc = 0x5041CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5041C8u;
            // 0x5041cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517910u;
    if (runtime->hasFunction(0x517910u)) {
        auto targetFn = runtime->lookupFunction(0x517910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041D0u; }
        if (ctx->pc != 0x5041D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517910_0x517910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5041D0u; }
        if (ctx->pc != 0x5041D0u) { return; }
    }
    ctx->pc = 0x5041D0u;
label_5041d0:
    // 0x5041d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5041d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5041d4:
    // 0x5041d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5041d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5041d8:
    // 0x5041d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5041d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5041dc:
    // 0x5041dc: 0x3e00008  jr          $ra
label_5041e0:
    if (ctx->pc == 0x5041E0u) {
        ctx->pc = 0x5041E0u;
            // 0x5041e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5041E4u;
        goto label_5041e4;
    }
    ctx->pc = 0x5041DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5041E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5041DCu;
            // 0x5041e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5041E4u;
label_5041e4:
    // 0x5041e4: 0x0  nop
    ctx->pc = 0x5041e4u;
    // NOP
label_5041e8:
    // 0x5041e8: 0x0  nop
    ctx->pc = 0x5041e8u;
    // NOP
label_5041ec:
    // 0x5041ec: 0x0  nop
    ctx->pc = 0x5041ecu;
    // NOP
label_5041f0:
    // 0x5041f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5041f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5041f4:
    // 0x5041f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5041f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5041f8:
    // 0x5041f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5041f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5041fc:
    // 0x5041fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5041fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504200:
    // 0x504200: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x504200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_504204:
    // 0x504204: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_504208:
    if (ctx->pc == 0x504208u) {
        ctx->pc = 0x504208u;
            // 0x504208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50420Cu;
        goto label_50420c;
    }
    ctx->pc = 0x504204u;
    {
        const bool branch_taken_0x504204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x504208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504204u;
            // 0x504208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504204) {
            ctx->pc = 0x504230u;
            goto label_504230;
        }
    }
    ctx->pc = 0x50420Cu;
label_50420c:
    // 0x50420c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_504210:
    if (ctx->pc == 0x504210u) {
        ctx->pc = 0x504210u;
            // 0x504210: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x504214u;
        goto label_504214;
    }
    ctx->pc = 0x50420Cu;
    {
        const bool branch_taken_0x50420c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x50420c) {
            ctx->pc = 0x504210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50420Cu;
            // 0x504210: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50421Cu;
            goto label_50421c;
        }
    }
    ctx->pc = 0x504214u;
label_504214:
    // 0x504214: 0x10000009  b           . + 4 + (0x9 << 2)
label_504218:
    if (ctx->pc == 0x504218u) {
        ctx->pc = 0x504218u;
            // 0x504218: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x50421Cu;
        goto label_50421c;
    }
    ctx->pc = 0x504214u;
    {
        const bool branch_taken_0x504214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x504218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504214u;
            // 0x504218: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504214) {
            ctx->pc = 0x50423Cu;
            goto label_50423c;
        }
    }
    ctx->pc = 0x50421Cu;
label_50421c:
    // 0x50421c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x50421cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_504220:
    // 0x504220: 0x320f809  jalr        $t9
label_504224:
    if (ctx->pc == 0x504224u) {
        ctx->pc = 0x504228u;
        goto label_504228;
    }
    ctx->pc = 0x504220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504228u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x504228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504228u; }
            if (ctx->pc != 0x504228u) { return; }
        }
        }
    }
    ctx->pc = 0x504228u;
label_504228:
    // 0x504228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x504228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50422c:
    // 0x50422c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x50422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_504230:
    // 0x504230: 0xc145c54  jal         func_517150
label_504234:
    if (ctx->pc == 0x504234u) {
        ctx->pc = 0x504234u;
            // 0x504234: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x504238u;
        goto label_504238;
    }
    ctx->pc = 0x504230u;
    SET_GPR_U32(ctx, 31, 0x504238u);
    ctx->pc = 0x504234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504230u;
            // 0x504234: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517150u;
    if (runtime->hasFunction(0x517150u)) {
        auto targetFn = runtime->lookupFunction(0x517150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504238u; }
        if (ctx->pc != 0x504238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517150_0x517150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504238u; }
        if (ctx->pc != 0x504238u) { return; }
    }
    ctx->pc = 0x504238u;
label_504238:
    // 0x504238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50423c:
    // 0x50423c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50423cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504240:
    // 0x504240: 0x3e00008  jr          $ra
label_504244:
    if (ctx->pc == 0x504244u) {
        ctx->pc = 0x504244u;
            // 0x504244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504248u;
        goto label_504248;
    }
    ctx->pc = 0x504240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504240u;
            // 0x504244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504248u;
label_504248:
    // 0x504248: 0x0  nop
    ctx->pc = 0x504248u;
    // NOP
label_50424c:
    // 0x50424c: 0x0  nop
    ctx->pc = 0x50424cu;
    // NOP
label_504250:
    // 0x504250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_504254:
    // 0x504254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_504258:
    // 0x504258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50425c:
    // 0x50425c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50425cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504260:
    // 0x504260: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x504260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_504264:
    // 0x504264: 0x320f809  jalr        $t9
label_504268:
    if (ctx->pc == 0x504268u) {
        ctx->pc = 0x504268u;
            // 0x504268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50426Cu;
        goto label_50426c;
    }
    ctx->pc = 0x504264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50426Cu);
        ctx->pc = 0x504268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504264u;
            // 0x504268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50426Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50426Cu; }
            if (ctx->pc != 0x50426Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50426Cu;
label_50426c:
    // 0x50426c: 0xc145ed8  jal         func_517B60
label_504270:
    if (ctx->pc == 0x504270u) {
        ctx->pc = 0x504270u;
            // 0x504270: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x504274u;
        goto label_504274;
    }
    ctx->pc = 0x50426Cu;
    SET_GPR_U32(ctx, 31, 0x504274u);
    ctx->pc = 0x504270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50426Cu;
            // 0x504270: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517B60u;
    if (runtime->hasFunction(0x517B60u)) {
        auto targetFn = runtime->lookupFunction(0x517B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504274u; }
        if (ctx->pc != 0x504274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517B60_0x517b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504274u; }
        if (ctx->pc != 0x504274u) { return; }
    }
    ctx->pc = 0x504274u;
label_504274:
    // 0x504274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_504278:
    // 0x504278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50427c:
    // 0x50427c: 0x3e00008  jr          $ra
label_504280:
    if (ctx->pc == 0x504280u) {
        ctx->pc = 0x504280u;
            // 0x504280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504284u;
        goto label_504284;
    }
    ctx->pc = 0x50427Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50427Cu;
            // 0x504280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504284u;
label_504284:
    // 0x504284: 0x0  nop
    ctx->pc = 0x504284u;
    // NOP
label_504288:
    // 0x504288: 0x0  nop
    ctx->pc = 0x504288u;
    // NOP
label_50428c:
    // 0x50428c: 0x0  nop
    ctx->pc = 0x50428cu;
    // NOP
label_504290:
    // 0x504290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_504294:
    // 0x504294: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x504294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_504298:
    // 0x504298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50429c:
    // 0x50429c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x50429cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5042a0:
    // 0x5042a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5042a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5042a4:
    // 0x5042a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5042a8:
    // 0x5042a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5042a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5042ac:
    // 0x5042ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5042acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5042b0:
    // 0x5042b0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x5042b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_5042b4:
    // 0x5042b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5042b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5042b8:
    // 0x5042b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5042b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5042bc:
    // 0x5042bc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x5042bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_5042c0:
    // 0x5042c0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5042c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5042c4:
    // 0x5042c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5042c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5042c8:
    // 0x5042c8: 0xc08bff0  jal         func_22FFC0
label_5042cc:
    if (ctx->pc == 0x5042CCu) {
        ctx->pc = 0x5042CCu;
            // 0x5042cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5042D0u;
        goto label_5042d0;
    }
    ctx->pc = 0x5042C8u;
    SET_GPR_U32(ctx, 31, 0x5042D0u);
    ctx->pc = 0x5042CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5042C8u;
            // 0x5042cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042D0u; }
        if (ctx->pc != 0x5042D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042D0u; }
        if (ctx->pc != 0x5042D0u) { return; }
    }
    ctx->pc = 0x5042D0u;
label_5042d0:
    // 0x5042d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5042d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5042d4:
    // 0x5042d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5042d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5042d8:
    // 0x5042d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5042d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5042dc:
    // 0x5042dc: 0xc08914c  jal         func_224530
label_5042e0:
    if (ctx->pc == 0x5042E0u) {
        ctx->pc = 0x5042E0u;
            // 0x5042e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5042E4u;
        goto label_5042e4;
    }
    ctx->pc = 0x5042DCu;
    SET_GPR_U32(ctx, 31, 0x5042E4u);
    ctx->pc = 0x5042E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5042DCu;
            // 0x5042e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042E4u; }
        if (ctx->pc != 0x5042E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042E4u; }
        if (ctx->pc != 0x5042E4u) { return; }
    }
    ctx->pc = 0x5042E4u;
label_5042e4:
    // 0x5042e4: 0xc0e393c  jal         func_38E4F0
label_5042e8:
    if (ctx->pc == 0x5042E8u) {
        ctx->pc = 0x5042E8u;
            // 0x5042e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5042ECu;
        goto label_5042ec;
    }
    ctx->pc = 0x5042E4u;
    SET_GPR_U32(ctx, 31, 0x5042ECu);
    ctx->pc = 0x5042E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5042E4u;
            // 0x5042e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042ECu; }
        if (ctx->pc != 0x5042ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5042ECu; }
        if (ctx->pc != 0x5042ECu) { return; }
    }
    ctx->pc = 0x5042ECu;
label_5042ec:
    // 0x5042ec: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x5042ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_5042f0:
    // 0x5042f0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x5042f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_5042f4:
    // 0x5042f4: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x5042f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_5042f8:
    // 0x5042f8: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x5042f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_5042fc:
    // 0x5042fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5042fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_504300:
    // 0x504300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504304:
    // 0x504304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504308:
    // 0x504308: 0x3e00008  jr          $ra
label_50430c:
    if (ctx->pc == 0x50430Cu) {
        ctx->pc = 0x50430Cu;
            // 0x50430c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x504310u;
        goto label_fallthrough_0x504308;
    }
    ctx->pc = 0x504308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504308u;
            // 0x50430c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x504308:
    ctx->pc = 0x504310u;
}
