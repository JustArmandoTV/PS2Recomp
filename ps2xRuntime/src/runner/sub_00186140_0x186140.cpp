#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186140
// Address: 0x186140 - 0x186238
void sub_00186140_0x186140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186140_0x186140");
#endif

    switch (ctx->pc) {
        case 0x186140u: goto label_186140;
        case 0x186144u: goto label_186144;
        case 0x186148u: goto label_186148;
        case 0x18614cu: goto label_18614c;
        case 0x186150u: goto label_186150;
        case 0x186154u: goto label_186154;
        case 0x186158u: goto label_186158;
        case 0x18615cu: goto label_18615c;
        case 0x186160u: goto label_186160;
        case 0x186164u: goto label_186164;
        case 0x186168u: goto label_186168;
        case 0x18616cu: goto label_18616c;
        case 0x186170u: goto label_186170;
        case 0x186174u: goto label_186174;
        case 0x186178u: goto label_186178;
        case 0x18617cu: goto label_18617c;
        case 0x186180u: goto label_186180;
        case 0x186184u: goto label_186184;
        case 0x186188u: goto label_186188;
        case 0x18618cu: goto label_18618c;
        case 0x186190u: goto label_186190;
        case 0x186194u: goto label_186194;
        case 0x186198u: goto label_186198;
        case 0x18619cu: goto label_18619c;
        case 0x1861a0u: goto label_1861a0;
        case 0x1861a4u: goto label_1861a4;
        case 0x1861a8u: goto label_1861a8;
        case 0x1861acu: goto label_1861ac;
        case 0x1861b0u: goto label_1861b0;
        case 0x1861b4u: goto label_1861b4;
        case 0x1861b8u: goto label_1861b8;
        case 0x1861bcu: goto label_1861bc;
        case 0x1861c0u: goto label_1861c0;
        case 0x1861c4u: goto label_1861c4;
        case 0x1861c8u: goto label_1861c8;
        case 0x1861ccu: goto label_1861cc;
        case 0x1861d0u: goto label_1861d0;
        case 0x1861d4u: goto label_1861d4;
        case 0x1861d8u: goto label_1861d8;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861e0u: goto label_1861e0;
        case 0x1861e4u: goto label_1861e4;
        case 0x1861e8u: goto label_1861e8;
        case 0x1861ecu: goto label_1861ec;
        case 0x1861f0u: goto label_1861f0;
        case 0x1861f4u: goto label_1861f4;
        case 0x1861f8u: goto label_1861f8;
        case 0x1861fcu: goto label_1861fc;
        case 0x186200u: goto label_186200;
        case 0x186204u: goto label_186204;
        case 0x186208u: goto label_186208;
        case 0x18620cu: goto label_18620c;
        case 0x186210u: goto label_186210;
        case 0x186214u: goto label_186214;
        case 0x186218u: goto label_186218;
        case 0x18621cu: goto label_18621c;
        case 0x186220u: goto label_186220;
        case 0x186224u: goto label_186224;
        case 0x186228u: goto label_186228;
        case 0x18622cu: goto label_18622c;
        case 0x186230u: goto label_186230;
        case 0x186234u: goto label_186234;
        default: break;
    }

    ctx->pc = 0x186140u;

label_186140:
    // 0x186140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186144:
    // 0x186144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186148:
    // 0x186148: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x186148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18614c:
    // 0x18614c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186150:
    // 0x186150: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x186150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_186154:
    // 0x186154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186158:
    // 0x186158: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_18615c:
    if (ctx->pc == 0x18615Cu) {
        ctx->pc = 0x18615Cu;
            // 0x18615c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x186160u;
        goto label_186160;
    }
    ctx->pc = 0x186158u;
    {
        const bool branch_taken_0x186158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186158u;
            // 0x18615c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186158) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186160u;
label_186160:
    // 0x186160: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186164:
    // 0x186164: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186168:
    // 0x186168: 0x24847c40  addiu       $a0, $a0, 0x7C40
    ctx->pc = 0x186168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
label_18616c:
    // 0x18616c: 0x10000009  b           . + 4 + (0x9 << 2)
label_186170:
    if (ctx->pc == 0x186170u) {
        ctx->pc = 0x186170u;
            // 0x186170: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
        ctx->pc = 0x186174u;
        goto label_186174;
    }
    ctx->pc = 0x18616Cu;
    {
        const bool branch_taken_0x18616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18616Cu;
            // 0x186170: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18616c) {
            ctx->pc = 0x186194u;
            goto label_186194;
        }
    }
    ctx->pc = 0x186174u;
label_186174:
    // 0x186174: 0x0  nop
    ctx->pc = 0x186174u;
    // NOP
label_186178:
    // 0x186178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x186178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18617c:
    // 0x18617c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_186180:
    if (ctx->pc == 0x186180u) {
        ctx->pc = 0x186184u;
        goto label_186184;
    }
    ctx->pc = 0x18617Cu;
    {
        const bool branch_taken_0x18617c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18617c) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186184u;
label_186184:
    // 0x186184: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186188:
    // 0x186188: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_18618c:
    // 0x18618c: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x18618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_186190:
    // 0x186190: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_186194:
    // 0x186194: 0xc06151c  jal         func_185470
label_186198:
    if (ctx->pc == 0x186198u) {
        ctx->pc = 0x18619Cu;
        goto label_18619c;
    }
    ctx->pc = 0x186194u;
    SET_GPR_U32(ctx, 31, 0x18619Cu);
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18619Cu; }
        if (ctx->pc != 0x18619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185470_0x185470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18619Cu; }
        if (ctx->pc != 0x18619Cu) { return; }
    }
    ctx->pc = 0x18619Cu;
label_18619c:
    // 0x18619c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1861a0:
    if (ctx->pc == 0x1861A0u) {
        ctx->pc = 0x1861A0u;
            // 0x1861a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1861A4u;
        goto label_1861a4;
    }
    ctx->pc = 0x18619Cu;
    {
        const bool branch_taken_0x18619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18619Cu;
            // 0x1861a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18619c) {
            ctx->pc = 0x186220u;
            goto label_186220;
        }
    }
    ctx->pc = 0x1861A4u;
label_1861a4:
    // 0x1861a4: 0x0  nop
    ctx->pc = 0x1861a4u;
    // NOP
label_1861a8:
    // 0x1861a8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_1861ac:
    if (ctx->pc == 0x1861ACu) {
        ctx->pc = 0x1861ACu;
            // 0x1861ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1861B0u;
        goto label_1861b0;
    }
    ctx->pc = 0x1861A8u;
    {
        const bool branch_taken_0x1861a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861A8u;
            // 0x1861ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a8) {
            ctx->pc = 0x1861C8u;
            goto label_1861c8;
        }
    }
    ctx->pc = 0x1861B0u;
label_1861b0:
    // 0x1861b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1861b4:
    // 0x1861b4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1861b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1861b8:
    // 0x1861b8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1861b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1861bc:
    // 0x1861bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1861bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1861c0:
    // 0x1861c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1861c4:
    if (ctx->pc == 0x1861C4u) {
        ctx->pc = 0x1861C4u;
            // 0x1861c4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x1861C8u;
        goto label_1861c8;
    }
    ctx->pc = 0x1861C0u;
    {
        const bool branch_taken_0x1861c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C0u;
            // 0x1861c4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c0) {
            ctx->pc = 0x1861E4u;
            goto label_1861e4;
        }
    }
    ctx->pc = 0x1861C8u;
label_1861c8:
    // 0x1861c8: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
label_1861cc:
    if (ctx->pc == 0x1861CCu) {
        ctx->pc = 0x1861CCu;
            // 0x1861cc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x1861D0u;
        goto label_1861d0;
    }
    ctx->pc = 0x1861C8u;
    {
        const bool branch_taken_0x1861c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1861c8) {
            ctx->pc = 0x1861CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C8u;
            // 0x1861cc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186200u;
            goto label_186200;
        }
    }
    ctx->pc = 0x1861D0u;
label_1861d0:
    // 0x1861d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1861d4:
    // 0x1861d4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1861d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1861d8:
    // 0x1861d8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1861d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1861dc:
    // 0x1861dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1861e0:
    // 0x1861e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1861e4:
    // 0x1861e4: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1861e8:
    // 0x1861e8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1861ec:
    // 0x1861ec: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x1861ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_1861f0:
    // 0x1861f0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1861f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1861f4:
    // 0x1861f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1861f8:
    if (ctx->pc == 0x1861F8u) {
        ctx->pc = 0x1861F8u;
            // 0x1861f8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->pc = 0x1861FCu;
        goto label_1861fc;
    }
    ctx->pc = 0x1861F4u;
    {
        const bool branch_taken_0x1861f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861F4u;
            // 0x1861f8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861f4) {
            ctx->pc = 0x186214u;
            goto label_186214;
        }
    }
    ctx->pc = 0x1861FCu;
label_1861fc:
    // 0x1861fc: 0x0  nop
    ctx->pc = 0x1861fcu;
    // NOP
label_186200:
    // 0x186200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_186204:
    if (ctx->pc == 0x186204u) {
        ctx->pc = 0x186204u;
            // 0x186204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186208u;
        goto label_186208;
    }
    ctx->pc = 0x186200u;
    {
        const bool branch_taken_0x186200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186200u;
            // 0x186204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186200) {
            ctx->pc = 0x186214u;
            goto label_186214;
        }
    }
    ctx->pc = 0x186208u;
label_186208:
    // 0x186208: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x186208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_18620c:
    // 0x18620c: 0x40f809  jalr        $v0
label_186210:
    if (ctx->pc == 0x186210u) {
        ctx->pc = 0x186210u;
            // 0x186210: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186214u;
        goto label_186214;
    }
    ctx->pc = 0x18620Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186214u);
        ctx->pc = 0x186210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18620Cu;
            // 0x186210: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186214u; }
            if (ctx->pc != 0x186214u) { return; }
        }
        }
    }
    ctx->pc = 0x186214u;
label_186214:
    // 0x186214: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_186218:
    // 0x186218: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x186218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_18621c:
    // 0x18621c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18621cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_186220:
    // 0x186220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186224:
    // 0x186224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186228:
    // 0x186228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18622c:
    // 0x18622c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186230:
    // 0x186230: 0x3e00008  jr          $ra
label_186234:
    if (ctx->pc == 0x186234u) {
        ctx->pc = 0x186234u;
            // 0x186234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x186238u;
        goto label_fallthrough_0x186230;
    }
    ctx->pc = 0x186230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186230u;
            // 0x186234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x186230:
    ctx->pc = 0x186238u;
}
