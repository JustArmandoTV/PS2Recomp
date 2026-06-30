#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185118
// Address: 0x185118 - 0x185208
void sub_00185118_0x185118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185118_0x185118");
#endif

    switch (ctx->pc) {
        case 0x185118u: goto label_185118;
        case 0x18511cu: goto label_18511c;
        case 0x185120u: goto label_185120;
        case 0x185124u: goto label_185124;
        case 0x185128u: goto label_185128;
        case 0x18512cu: goto label_18512c;
        case 0x185130u: goto label_185130;
        case 0x185134u: goto label_185134;
        case 0x185138u: goto label_185138;
        case 0x18513cu: goto label_18513c;
        case 0x185140u: goto label_185140;
        case 0x185144u: goto label_185144;
        case 0x185148u: goto label_185148;
        case 0x18514cu: goto label_18514c;
        case 0x185150u: goto label_185150;
        case 0x185154u: goto label_185154;
        case 0x185158u: goto label_185158;
        case 0x18515cu: goto label_18515c;
        case 0x185160u: goto label_185160;
        case 0x185164u: goto label_185164;
        case 0x185168u: goto label_185168;
        case 0x18516cu: goto label_18516c;
        case 0x185170u: goto label_185170;
        case 0x185174u: goto label_185174;
        case 0x185178u: goto label_185178;
        case 0x18517cu: goto label_18517c;
        case 0x185180u: goto label_185180;
        case 0x185184u: goto label_185184;
        case 0x185188u: goto label_185188;
        case 0x18518cu: goto label_18518c;
        case 0x185190u: goto label_185190;
        case 0x185194u: goto label_185194;
        case 0x185198u: goto label_185198;
        case 0x18519cu: goto label_18519c;
        case 0x1851a0u: goto label_1851a0;
        case 0x1851a4u: goto label_1851a4;
        case 0x1851a8u: goto label_1851a8;
        case 0x1851acu: goto label_1851ac;
        case 0x1851b0u: goto label_1851b0;
        case 0x1851b4u: goto label_1851b4;
        case 0x1851b8u: goto label_1851b8;
        case 0x1851bcu: goto label_1851bc;
        case 0x1851c0u: goto label_1851c0;
        case 0x1851c4u: goto label_1851c4;
        case 0x1851c8u: goto label_1851c8;
        case 0x1851ccu: goto label_1851cc;
        case 0x1851d0u: goto label_1851d0;
        case 0x1851d4u: goto label_1851d4;
        case 0x1851d8u: goto label_1851d8;
        case 0x1851dcu: goto label_1851dc;
        case 0x1851e0u: goto label_1851e0;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851e8u: goto label_1851e8;
        case 0x1851ecu: goto label_1851ec;
        case 0x1851f0u: goto label_1851f0;
        case 0x1851f4u: goto label_1851f4;
        case 0x1851f8u: goto label_1851f8;
        case 0x1851fcu: goto label_1851fc;
        case 0x185200u: goto label_185200;
        case 0x185204u: goto label_185204;
        default: break;
    }

    ctx->pc = 0x185118u;

label_185118:
    // 0x185118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18511c:
    // 0x18511c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_185120:
    if (ctx->pc == 0x185120u) {
        ctx->pc = 0x185120u;
            // 0x185120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x185124u;
        goto label_185124;
    }
    ctx->pc = 0x18511Cu;
    {
        const bool branch_taken_0x18511c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x185120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18511Cu;
            // 0x185120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18511c) {
            ctx->pc = 0x185140u;
            goto label_185140;
        }
    }
    ctx->pc = 0x185124u;
label_185124:
    // 0x185124: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185128:
    // 0x185128: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_18512c:
    // 0x18512c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185130:
    // 0x185130: 0x24847a58  addiu       $a0, $a0, 0x7A58
    ctx->pc = 0x185130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31320));
label_185134:
    // 0x185134: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x185134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
label_185138:
    // 0x185138: 0x8061296  j           func_184A58
label_18513c:
    if (ctx->pc == 0x18513Cu) {
        ctx->pc = 0x18513Cu;
            // 0x18513c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185140u;
        goto label_185140;
    }
    ctx->pc = 0x185138u;
    ctx->pc = 0x18513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185138u;
            // 0x18513c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185140u;
label_185140:
    // 0x185140: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_185144:
    // 0x185144: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_185148:
    if (ctx->pc == 0x185148u) {
        ctx->pc = 0x185148u;
            // 0x185148: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->pc = 0x18514Cu;
        goto label_18514c;
    }
    ctx->pc = 0x185144u;
    {
        const bool branch_taken_0x185144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185144) {
            ctx->pc = 0x185148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185144u;
            // 0x185148: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185168u;
            goto label_185168;
        }
    }
    ctx->pc = 0x18514Cu;
label_18514c:
    // 0x18514c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185150:
    // 0x185150: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185154:
    // 0x185154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185158:
    // 0x185158: 0x24847a68  addiu       $a0, $a0, 0x7A68
    ctx->pc = 0x185158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31336));
label_18515c:
    // 0x18515c: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_185160:
    // 0x185160: 0x8061296  j           func_184A58
label_185164:
    if (ctx->pc == 0x185164u) {
        ctx->pc = 0x185164u;
            // 0x185164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185168u;
        goto label_185168;
    }
    ctx->pc = 0x185160u;
    ctx->pc = 0x185164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185160u;
            // 0x185164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185168u;
label_185168:
    // 0x185168: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_18516c:
    if (ctx->pc == 0x18516Cu) {
        ctx->pc = 0x18516Cu;
            // 0x18516c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185170u;
        goto label_185170;
    }
    ctx->pc = 0x185168u;
    {
        const bool branch_taken_0x185168 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185168u;
            // 0x18516c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185168) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x185170u;
label_185170:
    // 0x185170: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185174:
    // 0x185174: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_185178:
    if (ctx->pc == 0x185178u) {
        ctx->pc = 0x18517Cu;
        goto label_18517c;
    }
    ctx->pc = 0x185174u;
    {
        const bool branch_taken_0x185174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185174) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x18517Cu;
label_18517c:
    // 0x18517c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_185180:
    if (ctx->pc == 0x185180u) {
        ctx->pc = 0x185180u;
            // 0x185180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x185184u;
        goto label_185184;
    }
    ctx->pc = 0x18517Cu;
    {
        const bool branch_taken_0x18517c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18517Cu;
            // 0x185180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18517c) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x185184u;
label_185184:
    // 0x185184: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_185188:
    if (ctx->pc == 0x185188u) {
        ctx->pc = 0x18518Cu;
        goto label_18518c;
    }
    ctx->pc = 0x185184u;
    {
        const bool branch_taken_0x185184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x185184) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x18518Cu;
label_18518c:
    // 0x18518c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_185190:
    // 0x185190: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x185190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_185194:
    // 0x185194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_185198:
    if (ctx->pc == 0x185198u) {
        ctx->pc = 0x185198u;
            // 0x185198: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x18519Cu;
        goto label_18519c;
    }
    ctx->pc = 0x185194u;
    {
        const bool branch_taken_0x185194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185194u;
            // 0x185198: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185194) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x18519Cu;
label_18519c:
    // 0x18519c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x18519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1851a0:
    // 0x1851a0: 0x40f809  jalr        $v0
label_1851a4:
    if (ctx->pc == 0x1851A4u) {
        ctx->pc = 0x1851A4u;
            // 0x1851a4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1851A8u;
        goto label_1851a8;
    }
    ctx->pc = 0x1851A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1851A8u);
        ctx->pc = 0x1851A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1851A0u;
            // 0x1851a4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1851A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1851A8u; }
            if (ctx->pc != 0x1851A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1851A8u;
label_1851a8:
    // 0x1851a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1851a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1851ac:
    // 0x1851ac: 0x3e00008  jr          $ra
label_1851b0:
    if (ctx->pc == 0x1851B0u) {
        ctx->pc = 0x1851B0u;
            // 0x1851b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1851B4u;
        goto label_1851b4;
    }
    ctx->pc = 0x1851ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1851B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1851ACu;
            // 0x1851b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1851B4u;
label_1851b4:
    // 0x1851b4: 0x0  nop
    ctx->pc = 0x1851b4u;
    // NOP
label_1851b8:
    // 0x1851b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1851b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1851bc:
    // 0x1851bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1851bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1851c0:
    // 0x1851c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1851c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1851c4:
    // 0x1851c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1851c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1851c8:
    // 0x1851c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1851c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1851cc:
    // 0x1851cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1851ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1851d0:
    // 0x1851d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1851d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1851d4:
    // 0x1851d4: 0xc06127c  jal         func_1849F0
label_1851d8:
    if (ctx->pc == 0x1851D8u) {
        ctx->pc = 0x1851D8u;
            // 0x1851d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1851DCu;
        goto label_1851dc;
    }
    ctx->pc = 0x1851D4u;
    SET_GPR_U32(ctx, 31, 0x1851DCu);
    ctx->pc = 0x1851D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851D4u;
            // 0x1851d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851DCu; }
        if (ctx->pc != 0x1851DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851DCu; }
        if (ctx->pc != 0x1851DCu) { return; }
    }
    ctx->pc = 0x1851DCu;
label_1851dc:
    // 0x1851dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1851dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1851e0:
    // 0x1851e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1851e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1851e4:
    // 0x1851e4: 0xc061482  jal         func_185208
label_1851e8:
    if (ctx->pc == 0x1851E8u) {
        ctx->pc = 0x1851E8u;
            // 0x1851e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1851ECu;
        goto label_1851ec;
    }
    ctx->pc = 0x1851E4u;
    SET_GPR_U32(ctx, 31, 0x1851ECu);
    ctx->pc = 0x1851E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851E4u;
            // 0x1851e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185208u;
    if (runtime->hasFunction(0x185208u)) {
        auto targetFn = runtime->lookupFunction(0x185208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851ECu; }
        if (ctx->pc != 0x1851ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185208_0x185208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851ECu; }
        if (ctx->pc != 0x1851ECu) { return; }
    }
    ctx->pc = 0x1851ECu;
label_1851ec:
    // 0x1851ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1851ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1851f0:
    // 0x1851f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1851f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1851f4:
    // 0x1851f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1851f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1851f8:
    // 0x1851f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1851fc:
    // 0x1851fc: 0x8061282  j           func_184A08
label_185200:
    if (ctx->pc == 0x185200u) {
        ctx->pc = 0x185200u;
            // 0x185200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185204u;
        goto label_185204;
    }
    ctx->pc = 0x1851FCu;
    ctx->pc = 0x185200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851FCu;
            // 0x185200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185204u;
label_185204:
    // 0x185204: 0x0  nop
    ctx->pc = 0x185204u;
    // NOP
}
