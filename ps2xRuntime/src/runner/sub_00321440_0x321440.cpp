#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00321440
// Address: 0x321440 - 0x3214c0
void sub_00321440_0x321440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321440_0x321440");
#endif

    switch (ctx->pc) {
        case 0x321440u: goto label_321440;
        case 0x321444u: goto label_321444;
        case 0x321448u: goto label_321448;
        case 0x32144cu: goto label_32144c;
        case 0x321450u: goto label_321450;
        case 0x321454u: goto label_321454;
        case 0x321458u: goto label_321458;
        case 0x32145cu: goto label_32145c;
        case 0x321460u: goto label_321460;
        case 0x321464u: goto label_321464;
        case 0x321468u: goto label_321468;
        case 0x32146cu: goto label_32146c;
        case 0x321470u: goto label_321470;
        case 0x321474u: goto label_321474;
        case 0x321478u: goto label_321478;
        case 0x32147cu: goto label_32147c;
        case 0x321480u: goto label_321480;
        case 0x321484u: goto label_321484;
        case 0x321488u: goto label_321488;
        case 0x32148cu: goto label_32148c;
        case 0x321490u: goto label_321490;
        case 0x321494u: goto label_321494;
        case 0x321498u: goto label_321498;
        case 0x32149cu: goto label_32149c;
        case 0x3214a0u: goto label_3214a0;
        case 0x3214a4u: goto label_3214a4;
        case 0x3214a8u: goto label_3214a8;
        case 0x3214acu: goto label_3214ac;
        case 0x3214b0u: goto label_3214b0;
        case 0x3214b4u: goto label_3214b4;
        case 0x3214b8u: goto label_3214b8;
        case 0x3214bcu: goto label_3214bc;
        default: break;
    }

    ctx->pc = 0x321440u;

label_321440:
    // 0x321440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321444:
    // 0x321444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321448:
    // 0x321448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32144c:
    // 0x32144c: 0x8c830238  lw          $v1, 0x238($a0)
    ctx->pc = 0x32144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
label_321450:
    // 0x321450: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_321454:
    if (ctx->pc == 0x321454u) {
        ctx->pc = 0x321454u;
            // 0x321454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321458u;
        goto label_321458;
    }
    ctx->pc = 0x321450u;
    {
        const bool branch_taken_0x321450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x321454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321450u;
            // 0x321454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321450) {
            ctx->pc = 0x3214B0u;
            goto label_3214b0;
        }
    }
    ctx->pc = 0x321458u;
label_321458:
    // 0x321458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32145c:
    // 0x32145c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x32145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_321460:
    // 0x321460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321464:
    // 0x321464: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x321464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_321468:
    // 0x321468: 0x320f809  jalr        $t9
label_32146c:
    if (ctx->pc == 0x32146Cu) {
        ctx->pc = 0x321470u;
        goto label_321470;
    }
    ctx->pc = 0x321468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x321470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321470u; }
            if (ctx->pc != 0x321470u) { return; }
        }
        }
    }
    ctx->pc = 0x321470u;
label_321470:
    // 0x321470: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
label_321474:
    // 0x321474: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_321478:
    if (ctx->pc == 0x321478u) {
        ctx->pc = 0x321478u;
            // 0x321478: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x32147Cu;
        goto label_32147c;
    }
    ctx->pc = 0x321474u;
    {
        const bool branch_taken_0x321474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321474) {
            ctx->pc = 0x321478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321474u;
            // 0x321478: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3214B4u;
            goto label_3214b4;
        }
    }
    ctx->pc = 0x32147Cu;
label_32147c:
    // 0x32147c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321480:
    // 0x321480: 0x3c043f26  lui         $a0, 0x3F26
    ctx->pc = 0x321480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16166 << 16));
label_321484:
    // 0x321484: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_321488:
    // 0x321488: 0x34856666  ori         $a1, $a0, 0x6666
    ctx->pc = 0x321488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_32148c:
    // 0x32148c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_321490:
    // 0x321490: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_321494:
    // 0x321494: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_321498:
    // 0x321498: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_32149c:
    // 0x32149c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x32149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3214a0:
    // 0x3214a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3214a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3214a4:
    // 0x3214a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3214a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3214a8:
    // 0x3214a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3214a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3214ac:
    // 0x3214ac: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x3214acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_3214b0:
    // 0x3214b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3214b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3214b4:
    // 0x3214b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3214b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3214b8:
    // 0x3214b8: 0x3e00008  jr          $ra
label_3214bc:
    if (ctx->pc == 0x3214BCu) {
        ctx->pc = 0x3214BCu;
            // 0x3214bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3214C0u;
        goto label_fallthrough_0x3214b8;
    }
    ctx->pc = 0x3214B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3214BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3214B8u;
            // 0x3214bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3214b8:
    ctx->pc = 0x3214C0u;
}
