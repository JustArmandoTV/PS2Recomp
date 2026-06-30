#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150210
// Address: 0x150210 - 0x150b60
void sub_00150210_0x150210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150210_0x150210");
#endif

    switch (ctx->pc) {
        case 0x1502d4u: goto label_1502d4;
        case 0x150314u: goto label_150314;
        case 0x150330u: goto label_150330;
        case 0x1506d8u: goto label_1506d8;
        case 0x1506e0u: goto label_1506e0;
        case 0x150724u: goto label_150724;
        case 0x150758u: goto label_150758;
        case 0x150ac0u: goto label_150ac0;
        case 0x150b30u: goto label_150b30;
        default: break;
    }

    ctx->pc = 0x150210u;

    // 0x150210: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x150214: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x150214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x150218: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x150218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15021c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x150220: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x150220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x150224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x150224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x150228: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15022c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x150230: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x150230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150238: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x150238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15023c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150248: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15024c: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x15024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
    // 0x150250: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x150250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x150254: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x150254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x150258: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x150258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x15025c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x15025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x150260: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x150260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x150264: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x150264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x150268: 0xa3a0013f  sb          $zero, 0x13F($sp)
    ctx->pc = 0x150268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x15026c: 0xa3a0013e  sb          $zero, 0x13E($sp)
    ctx->pc = 0x15026cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x150270: 0xa3a0013d  sb          $zero, 0x13D($sp)
    ctx->pc = 0x150270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x150274: 0xa3a0013c  sb          $zero, 0x13C($sp)
    ctx->pc = 0x150274u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x150278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150278u;
    {
        const bool branch_taken_0x150278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150278u;
            // 0x15027c: 0xa3a0013b  sb          $zero, 0x13B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150278) {
            ctx->pc = 0x15028Cu;
            goto label_15028c;
        }
    }
    ctx->pc = 0x150280u;
    // 0x150280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x150280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150284u;
    {
        const bool branch_taken_0x150284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150284u;
            // 0x150288: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150284) {
            ctx->pc = 0x150294u;
            goto label_150294;
        }
    }
    ctx->pc = 0x15028Cu;
label_15028c:
    // 0x15028c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150290: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x150290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_150294:
    // 0x150294: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x150294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150298: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x150298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15029c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1502a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1502A0u;
    {
        const bool branch_taken_0x1502a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1502a0) {
            ctx->pc = 0x1502A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1502A0u;
            // 0x1502a4: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1502C0u;
            goto label_1502c0;
        }
    }
    ctx->pc = 0x1502A8u;
    // 0x1502a8: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x1502a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1502ac: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1502acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1502b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1502b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1502b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1502B4u;
    {
        const bool branch_taken_0x1502b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502b4) {
            ctx->pc = 0x1502B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1502B4u;
            // 0x1502b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1502CCu;
            goto label_1502cc;
        }
    }
    ctx->pc = 0x1502BCu;
    // 0x1502bc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1502c0:
    // 0x1502c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1502c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1502c4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1502c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1502c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1502cc:
    // 0x1502cc: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x1502CCu;
    SET_GPR_U32(ctx, 31, 0x1502D4u);
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502D4u; }
        if (ctx->pc != 0x1502D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502D4u; }
        if (ctx->pc != 0x1502D4u) { return; }
    }
    ctx->pc = 0x1502D4u;
label_1502d4:
    // 0x1502d4: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1502d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1502d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502dc: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1502e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1502e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502e4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1502e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1502e8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1502e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1502ec: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1502ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x1502f0: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x1502f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1502f4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1502f8: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1502fc: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x1502fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150300: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x150300u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x150304: 0x64080008  daddiu      $t0, $zero, 0x8
    ctx->pc = 0x150304u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x150308: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x150308u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x15030c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x15030Cu;
    {
        const bool branch_taken_0x15030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15030Cu;
            // 0x150310: 0x640c0018  daddiu      $t4, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15030c) {
            ctx->pc = 0x150680u;
            goto label_150680;
        }
    }
    ctx->pc = 0x150314u;
label_150314:
    // 0x150314: 0x8e7804  sllv        $t7, $t6, $a0
    ctx->pc = 0x150314u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x150318: 0xef7824  and         $t7, $a3, $t7
    ctx->pc = 0x150318u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x15031c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x15031cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x150320: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x150320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x150324: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x150324u;
    {
        const bool branch_taken_0x150324 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x150324) {
            ctx->pc = 0x150350u;
            goto label_150350;
        }
    }
    ctx->pc = 0x15032Cu;
    // 0x15032c: 0x0  nop
    ctx->pc = 0x15032cu;
    // NOP
label_150330:
    // 0x150330: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150334: 0x8e7804  sllv        $t7, $t6, $a0
    ctx->pc = 0x150334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x150338: 0xef7824  and         $t7, $a3, $t7
    ctx->pc = 0x150338u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x15033c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x15033cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x150340: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x150340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x150344: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x150344u;
    {
        const bool branch_taken_0x150344 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x150344) {
            ctx->pc = 0x150330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150330;
        }
    }
    ctx->pc = 0x15034Cu;
    // 0x15034c: 0x0  nop
    ctx->pc = 0x15034cu;
    // NOP
label_150350:
    // 0x150350: 0x108d00a9  beq         $a0, $t5, . + 4 + (0xA9 << 2)
    ctx->pc = 0x150350u;
    {
        const bool branch_taken_0x150350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        if (branch_taken_0x150350) {
            ctx->pc = 0x1505F8u;
            goto label_1505f8;
        }
    }
    ctx->pc = 0x150358u;
    // 0x150358: 0x1098007f  beq         $a0, $t8, . + 4 + (0x7F << 2)
    ctx->pc = 0x150358u;
    {
        const bool branch_taken_0x150358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        if (branch_taken_0x150358) {
            ctx->pc = 0x150558u;
            goto label_150558;
        }
    }
    ctx->pc = 0x150360u;
    // 0x150360: 0x108e0057  beq         $a0, $t6, . + 4 + (0x57 << 2)
    ctx->pc = 0x150360u;
    {
        const bool branch_taken_0x150360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x150360) {
            ctx->pc = 0x1504C0u;
            goto label_1504c0;
        }
    }
    ctx->pc = 0x150368u;
    // 0x150368: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150368u;
    {
        const bool branch_taken_0x150368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150368) {
            ctx->pc = 0x150378u;
            goto label_150378;
        }
    }
    ctx->pc = 0x150370u;
    // 0x150370: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x150370u;
    {
        const bool branch_taken_0x150370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150370) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150378u;
label_150378:
    // 0x150378: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x15037c: 0x240f1003  addiu       $t7, $zero, 0x1003
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x150380: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150384: 0x10ef0040  beq         $a3, $t7, . + 4 + (0x40 << 2)
    ctx->pc = 0x150384u;
    {
        const bool branch_taken_0x150384 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x150384) {
            ctx->pc = 0x150488u;
            goto label_150488;
        }
    }
    ctx->pc = 0x15038Cu;
    // 0x15038c: 0x240f0403  addiu       $t7, $zero, 0x403
    ctx->pc = 0x15038cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x150390: 0x10ef002f  beq         $a3, $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x150390u;
    {
        const bool branch_taken_0x150390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x150390) {
            ctx->pc = 0x150450u;
            goto label_150450;
        }
    }
    ctx->pc = 0x150398u;
    // 0x150398: 0x10ed0023  beq         $a3, $t5, . + 4 + (0x23 << 2)
    ctx->pc = 0x150398u;
    {
        const bool branch_taken_0x150398 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        if (branch_taken_0x150398) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1503A0u;
    // 0x1503a0: 0x240f1001  addiu       $t7, $zero, 0x1001
    ctx->pc = 0x1503a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1503a4: 0x10ef0016  beq         $a3, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x1503A4u;
    {
        const bool branch_taken_0x1503a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x1503a4) {
            ctx->pc = 0x150400u;
            goto label_150400;
        }
    }
    ctx->pc = 0x1503ACu;
    // 0x1503ac: 0x240f0401  addiu       $t7, $zero, 0x401
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x1503b0: 0x10ef000b  beq         $a3, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1503B0u;
    {
        const bool branch_taken_0x1503b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x1503b0) {
            ctx->pc = 0x1503E0u;
            goto label_1503e0;
        }
    }
    ctx->pc = 0x1503B8u;
    // 0x1503b8: 0x10ee0003  beq         $a3, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1503B8u;
    {
        const bool branch_taken_0x1503b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x1503b8) {
            ctx->pc = 0x1503C8u;
            goto label_1503c8;
        }
    }
    ctx->pc = 0x1503C0u;
    // 0x1503c0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1503C0u;
    {
        const bool branch_taken_0x1503c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503c0) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1503C8u;
label_1503c8:
    // 0x1503c8: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1503c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1503cc: 0xa3b9013f  sb          $t9, 0x13F($sp)
    ctx->pc = 0x1503ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 25));
    // 0x1503d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1503d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503d4: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1503d8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1503D8u;
            // 0x1503dc: 0xafa70180  sw          $a3, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1503E0u;
label_1503e0:
    // 0x1503e0: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1503e4: 0xa3ac013f  sb          $t4, 0x13F($sp)
    ctx->pc = 0x1503e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 12));
    // 0x1503e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1503e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503ec: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1503f0: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x1503f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
    // 0x1503f4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1503f8: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1503F8u;
    {
        const bool branch_taken_0x1503f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1503F8u;
            // 0x1503fc: 0xafa70150  sw          $a3, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503f8) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150400u;
label_150400:
    // 0x150400: 0x6407002c  daddiu      $a3, $zero, 0x2C
    ctx->pc = 0x150400u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)44);
    // 0x150404: 0xa3a7013f  sb          $a3, 0x13F($sp)
    ctx->pc = 0x150404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 7));
    // 0x150408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15040c: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x15040cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150410: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x150410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x150414: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x150414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
    // 0x150418: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x15041c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x15041Cu;
    {
        const bool branch_taken_0x15041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15041Cu;
            // 0x150420: 0xafa70140  sw          $a3, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15041c) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150424u;
    // 0x150424: 0x0  nop
    ctx->pc = 0x150424u;
    // NOP
label_150428:
    // 0x150428: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x15042c: 0xa3ac013f  sb          $t4, 0x13F($sp)
    ctx->pc = 0x15042cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 12));
    // 0x150430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150434: 0xa3ac013e  sb          $t4, 0x13E($sp)
    ctx->pc = 0x150434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 12));
    // 0x150438: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15043c: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x15043cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x150440: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x150440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
    // 0x150444: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x150444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x150448: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x150448u;
    {
        const bool branch_taken_0x150448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150448u;
            // 0x15044c: 0xafa70170  sw          $a3, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150448) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150450u;
label_150450:
    // 0x150450: 0x64070024  daddiu      $a3, $zero, 0x24
    ctx->pc = 0x150450u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)36);
    // 0x150454: 0xa3a7013f  sb          $a3, 0x13F($sp)
    ctx->pc = 0x150454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 7));
    // 0x150458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15045c: 0xa3a7013e  sb          $a3, 0x13E($sp)
    ctx->pc = 0x15045cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 7));
    // 0x150460: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x150460u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150464: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150468: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15046c: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x15046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
    // 0x150470: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x150470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x150474: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x150474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x150478: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15047c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x15047cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x150480: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x150480u;
    {
        const bool branch_taken_0x150480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150480u;
            // 0x150484: 0xafa70150  sw          $a3, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150480) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150488u;
label_150488:
    // 0x150488: 0x64070038  daddiu      $a3, $zero, 0x38
    ctx->pc = 0x150488u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)56);
    // 0x15048c: 0xa3a7013f  sb          $a3, 0x13F($sp)
    ctx->pc = 0x15048cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 7));
    // 0x150490: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150494: 0xa3a7013e  sb          $a3, 0x13E($sp)
    ctx->pc = 0x150494u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 7));
    // 0x150498: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x150498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15049c: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x15049cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1504a0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1504a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1504a4: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x1504a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
    // 0x1504a8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1504a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1504ac: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x1504acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x1504b0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1504b4: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x1504b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x1504b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1504B8u;
    {
        const bool branch_taken_0x1504b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1504BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1504B8u;
            // 0x1504bc: 0xafa70140  sw          $a3, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504b8) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1504C0u;
label_1504c0:
    // 0x1504c0: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1504c4: 0x8cef0010  lw          $t7, 0x10($a3)
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1504c8: 0x11eb001b  beq         $t7, $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1504C8u;
    {
        const bool branch_taken_0x1504c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x1504c8) {
            ctx->pc = 0x150538u;
            goto label_150538;
        }
    }
    ctx->pc = 0x1504D0u;
    // 0x1504d0: 0x11ea0015  beq         $t7, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1504D0u;
    {
        const bool branch_taken_0x1504d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        if (branch_taken_0x1504d0) {
            ctx->pc = 0x150528u;
            goto label_150528;
        }
    }
    ctx->pc = 0x1504D8u;
    // 0x1504d8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1504d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1504dc: 0x11e7000c  beq         $t7, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1504DCu;
    {
        const bool branch_taken_0x1504dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 7));
        if (branch_taken_0x1504dc) {
            ctx->pc = 0x150510u;
            goto label_150510;
        }
    }
    ctx->pc = 0x1504E4u;
    // 0x1504e4: 0x11f80004  beq         $t7, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x1504E4u;
    {
        const bool branch_taken_0x1504e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 24));
        if (branch_taken_0x1504e4) {
            ctx->pc = 0x1504F8u;
            goto label_1504f8;
        }
    }
    ctx->pc = 0x1504ECu;
    // 0x1504ec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1504ECu;
    {
        const bool branch_taken_0x1504ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1504ec) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1504F4u;
    // 0x1504f4: 0x0  nop
    ctx->pc = 0x1504f4u;
    // NOP
label_1504f8:
    // 0x1504f8: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1504fc: 0xa3b9013e  sb          $t9, 0x13E($sp)
    ctx->pc = 0x1504fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 25));
    // 0x150500: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x150500u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150504: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x150508: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x150508u;
    {
        const bool branch_taken_0x150508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150508u;
            // 0x15050c: 0xafa70170  sw          $a3, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150508) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150510u;
label_150510:
    // 0x150510: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150514: 0xa3a9013d  sb          $t1, 0x13D($sp)
    ctx->pc = 0x150514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 317), (uint8_t)GPR_U32(ctx, 9));
    // 0x150518: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x150518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x15051c: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x150520: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x150520u;
    {
        const bool branch_taken_0x150520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150520u;
            // 0x150524: 0xafa70160  sw          $a3, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150520) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150528u;
label_150528:
    // 0x150528: 0x8cf6001c  lw          $s6, 0x1C($a3)
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x15052c: 0xa3a8013c  sb          $t0, 0x13C($sp)
    ctx->pc = 0x15052cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 8));
    // 0x150530: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x150530u;
    {
        const bool branch_taken_0x150530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150530u;
            // 0x150534: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150530) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150538u;
label_150538:
    // 0x150538: 0x8cf6001c  lw          $s6, 0x1C($a3)
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x15053c: 0xa3a9013c  sb          $t1, 0x13C($sp)
    ctx->pc = 0x15053cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 9));
    // 0x150540: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x150540u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150544: 0xa3a9013b  sb          $t1, 0x13B($sp)
    ctx->pc = 0x150544u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 9));
    // 0x150548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x150548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15054c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x15054Cu;
    {
        const bool branch_taken_0x15054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15054Cu;
            // 0x150550: 0x26d40008  addiu       $s4, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15054c) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150554u;
    // 0x150554: 0x0  nop
    ctx->pc = 0x150554u;
    // NOP
label_150558:
    // 0x150558: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x15055c: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x15055cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x150560: 0x10eb001d  beq         $a3, $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x150560u;
    {
        const bool branch_taken_0x150560 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x150560) {
            ctx->pc = 0x1505D8u;
            goto label_1505d8;
        }
    }
    ctx->pc = 0x150568u;
    // 0x150568: 0x240f0040  addiu       $t7, $zero, 0x40
    ctx->pc = 0x150568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15056c: 0x10ef0014  beq         $a3, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x15056Cu;
    {
        const bool branch_taken_0x15056c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x15056c) {
            ctx->pc = 0x1505C0u;
            goto label_1505c0;
        }
    }
    ctx->pc = 0x150574u;
    // 0x150574: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x150574u;
    {
        const bool branch_taken_0x150574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x150574) {
            ctx->pc = 0x1505A8u;
            goto label_1505a8;
        }
    }
    ctx->pc = 0x15057Cu;
    // 0x15057c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x15057cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x150580: 0x10ef0003  beq         $a3, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x150580u;
    {
        const bool branch_taken_0x150580 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x150580) {
            ctx->pc = 0x150590u;
            goto label_150590;
        }
    }
    ctx->pc = 0x150588u;
    // 0x150588: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x150588u;
    {
        const bool branch_taken_0x150588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150588) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150590u;
label_150590:
    // 0x150590: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150594: 0xa3a9013d  sb          $t1, 0x13D($sp)
    ctx->pc = 0x150594u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 317), (uint8_t)GPR_U32(ctx, 9));
    // 0x150598: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x150598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x15059c: 0x8ce7002c  lw          $a3, 0x2C($a3)
    ctx->pc = 0x15059cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1505a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1505A0u;
    {
        const bool branch_taken_0x1505a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505A0u;
            // 0x1505a4: 0xafa70160  sw          $a3, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505a0) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1505A8u;
label_1505a8:
    // 0x1505a8: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1505a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1505ac: 0xa3a8013c  sb          $t0, 0x13C($sp)
    ctx->pc = 0x1505acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 8));
    // 0x1505b0: 0x8cf6002c  lw          $s6, 0x2C($a3)
    ctx->pc = 0x1505b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1505b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1505B4u;
    {
        const bool branch_taken_0x1505b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505B4u;
            // 0x1505b8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505b4) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1505BCu;
    // 0x1505bc: 0x0  nop
    ctx->pc = 0x1505bcu;
    // NOP
label_1505c0:
    // 0x1505c0: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1505c4: 0xa3a8013b  sb          $t0, 0x13B($sp)
    ctx->pc = 0x1505c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 8));
    // 0x1505c8: 0x8cf4002c  lw          $s4, 0x2C($a3)
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1505cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1505CCu;
    {
        const bool branch_taken_0x1505cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505CCu;
            // 0x1505d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505cc) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1505D4u;
    // 0x1505d4: 0x0  nop
    ctx->pc = 0x1505d4u;
    // NOP
label_1505d8:
    // 0x1505d8: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1505dc: 0xa3a9013c  sb          $t1, 0x13C($sp)
    ctx->pc = 0x1505dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 9));
    // 0x1505e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1505e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505e4: 0xa3a9013b  sb          $t1, 0x13B($sp)
    ctx->pc = 0x1505e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 9));
    // 0x1505e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1505e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505ec: 0x8cf6002c  lw          $s6, 0x2C($a3)
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1505f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1505F0u;
    {
        const bool branch_taken_0x1505f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505F0u;
            // 0x1505f4: 0x26d40008  addiu       $s4, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505f0) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x1505F8u;
label_1505f8:
    // 0x1505f8: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1505fc: 0x8cef0030  lw          $t7, 0x30($a3)
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x150600: 0x11eb0015  beq         $t7, $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x150600u;
    {
        const bool branch_taken_0x150600 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x150600) {
            ctx->pc = 0x150658u;
            goto label_150658;
        }
    }
    ctx->pc = 0x150608u;
    // 0x150608: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15060c: 0x11e7000c  beq         $t7, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x15060Cu;
    {
        const bool branch_taken_0x15060c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 7));
        if (branch_taken_0x15060c) {
            ctx->pc = 0x150640u;
            goto label_150640;
        }
    }
    ctx->pc = 0x150614u;
    // 0x150614: 0x11ea0004  beq         $t7, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x150614u;
    {
        const bool branch_taken_0x150614 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        if (branch_taken_0x150614) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x15061Cu;
    // 0x15061c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15061Cu;
    {
        const bool branch_taken_0x15061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15061c) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150624u;
    // 0x150624: 0x0  nop
    ctx->pc = 0x150624u;
    // NOP
label_150628:
    // 0x150628: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x15062c: 0xa3a8013c  sb          $t0, 0x13C($sp)
    ctx->pc = 0x15062cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 8));
    // 0x150630: 0x8cf6003c  lw          $s6, 0x3C($a3)
    ctx->pc = 0x150630u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x150634: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x150634u;
    {
        const bool branch_taken_0x150634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150634u;
            // 0x150638: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150634) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x15063Cu;
    // 0x15063c: 0x0  nop
    ctx->pc = 0x15063cu;
    // NOP
label_150640:
    // 0x150640: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x150644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x150644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150648: 0x8cf4003c  lw          $s4, 0x3C($a3)
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x15064c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15064Cu;
    {
        const bool branch_taken_0x15064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15064Cu;
            // 0x150650: 0xa3a8013b  sb          $t0, 0x13B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15064c) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150654u;
    // 0x150654: 0x0  nop
    ctx->pc = 0x150654u;
    // NOP
label_150658:
    // 0x150658: 0x8cf6003c  lw          $s6, 0x3C($a3)
    ctx->pc = 0x150658u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x15065c: 0xa3a9013c  sb          $t1, 0x13C($sp)
    ctx->pc = 0x15065cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 9));
    // 0x150660: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x150660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150664: 0xa3a9013b  sb          $t1, 0x13B($sp)
    ctx->pc = 0x150664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 9));
    // 0x150668: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x150668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15066c: 0x26d40008  addiu       $s4, $s6, 0x8
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_150670:
    // 0x150670: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150674: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x150674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x150678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15067c: 0x0  nop
    ctx->pc = 0x15067cu;
    // NOP
label_150680:
    // 0x150680: 0xc3382a  slt         $a3, $a2, $v1
    ctx->pc = 0x150680u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x150684: 0x54e0ff23  bnel        $a3, $zero, . + 4 + (-0xDD << 2)
    ctx->pc = 0x150684u;
    {
        const bool branch_taken_0x150684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x150684) {
            ctx->pc = 0x150688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150684u;
            // 0x150688: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150314;
        }
    }
    ctx->pc = 0x15068Cu;
    // 0x15068c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x15068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x150690: 0x18600125  blez        $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x150690u;
    {
        const bool branch_taken_0x150690 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x150694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150690u;
            // 0x150694: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150690) {
            ctx->pc = 0x150B28u;
            goto label_150b28;
        }
    }
    ctx->pc = 0x150698u;
    // 0x150698: 0x93a3013f  lbu         $v1, 0x13F($sp)
    ctx->pc = 0x150698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
    // 0x15069c: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x15069cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506a0: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x1506a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x1506a4: 0x93a3013e  lbu         $v1, 0x13E($sp)
    ctx->pc = 0x1506a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 318)));
    // 0x1506a8: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1506a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506ac: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1506acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1506b0: 0x93a3013d  lbu         $v1, 0x13D($sp)
    ctx->pc = 0x1506b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 317)));
    // 0x1506b4: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1506b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506b8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1506b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1506bc: 0x93a3013c  lbu         $v1, 0x13C($sp)
    ctx->pc = 0x1506bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1506c0: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1506c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506c4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1506c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1506c8: 0x93a3013b  lbu         $v1, 0x13B($sp)
    ctx->pc = 0x1506c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 315)));
    // 0x1506cc: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1506ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506d0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1506d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1506d4: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1506d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1506d8:
    // 0x1506d8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1506d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1506dc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1506dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_1506e0:
    // 0x1506e0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1506e4: 0x2861001b  slti        $at, $v1, 0x1B
    ctx->pc = 0x1506e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1506e8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1506E8u;
    {
        const bool branch_taken_0x1506e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1506e8) {
            ctx->pc = 0x150708u;
            goto label_150708;
        }
    }
    ctx->pc = 0x1506F0u;
    // 0x1506f0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1506f4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1506f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1506f8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1506fc: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x150700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150700u;
    {
        const bool branch_taken_0x150700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150700u;
            // 0x150704: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150700) {
            ctx->pc = 0x150710u;
            goto label_150710;
        }
    }
    ctx->pc = 0x150708u;
label_150708:
    // 0x150708: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x150708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x15070c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x15070cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_150710:
    // 0x150710: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x150710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150714: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15071c: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x15071Cu;
    SET_GPR_U32(ctx, 31, 0x150724u);
    ctx->pc = 0x150720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15071Cu;
            // 0x150720: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150724u; }
        if (ctx->pc != 0x150724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150724u; }
        if (ctx->pc != 0x150724u) { return; }
    }
    ctx->pc = 0x150724u;
label_150724:
    // 0x150724: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150728: 0x186000e3  blez        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x150728u;
    {
        const bool branch_taken_0x150728 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150728u;
            // 0x15072c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150728) {
            ctx->pc = 0x150AB8u;
            goto label_150ab8;
        }
    }
    ctx->pc = 0x150730u;
    // 0x150730: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x150734: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x150734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x150738: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x150738u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15073c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15073cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x150740: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x150740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x150744: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x150748: 0x24637a80  addiu       $v1, $v1, 0x7A80
    ctx->pc = 0x150748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31360));
    // 0x15074c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15074cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x150750: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x150750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x150754: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x150754u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_150758:
    // 0x150758: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x150758u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15075c: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x15075cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x150760: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x150760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x150764: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150768: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15076c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150770: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x150774: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x150774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150778: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x150778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15077c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x15077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150780: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x150780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x150784: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x150784u;
    {
        const bool branch_taken_0x150784 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x150788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150784u;
            // 0x150788: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150784) {
            ctx->pc = 0x1507B0u;
            goto label_1507b0;
        }
    }
    ctx->pc = 0x15078Cu;
    // 0x15078c: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x15078cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150790: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x150790u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x150794: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x150794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x150798: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x150798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15079c: 0xe89821  addu        $s3, $a3, $t0
    ctx->pc = 0x15079cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1507a0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1507a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1507A4u;
    {
        const bool branch_taken_0x1507a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1507A4u;
            // 0x1507a8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507a4) {
            ctx->pc = 0x1507E0u;
            goto label_1507e0;
        }
    }
    ctx->pc = 0x1507ACu;
    // 0x1507ac: 0x0  nop
    ctx->pc = 0x1507acu;
    // NOP
label_1507b0:
    // 0x1507b0: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x1507b0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1507b4: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x1507b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1507b8: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x1507b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1507bc: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1507c0: 0xe89021  addu        $s2, $a3, $t0
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1507c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1507c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507c8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1507c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1507cc: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1507ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507d0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1507d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1507d4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1507d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507d8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1507d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1507dc: 0x0  nop
    ctx->pc = 0x1507dcu;
    // NOP
label_1507e0:
    // 0x1507e0: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x1507e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1507e4: 0x74840  sll         $t1, $a3, 1
    ctx->pc = 0x1507e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1507e8: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x1507e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1507ec: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1507ECu;
    {
        const bool branch_taken_0x1507ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1507ECu;
            // 0x1507f0: 0x2298821  addu        $s1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507ec) {
            ctx->pc = 0x150828u;
            goto label_150828;
        }
    }
    ctx->pc = 0x1507F4u;
    // 0x1507f4: 0x97c80000  lhu         $t0, 0x0($fp)
    ctx->pc = 0x1507f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1507f8: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x1507f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1507fc: 0x3c9f021  addu        $fp, $fp, $t1
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x150800: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x150800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x150804: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x150804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x150808: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x150808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15080c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x15080cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x150810: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x150810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x150814: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x150818: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x150818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x15081c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x150820: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x150820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x150824: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x150824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_150828:
    // 0x150828: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x150828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15082c: 0x10e00052  beqz        $a3, . + 4 + (0x52 << 2)
    ctx->pc = 0x15082Cu;
    {
        const bool branch_taken_0x15082c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15082c) {
            ctx->pc = 0x150978u;
            goto label_150978;
        }
    }
    ctx->pc = 0x150834u;
    // 0x150834: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x150834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x150838: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x150838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15083c: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x15083cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150840: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x150844: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x150844u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150848: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x150848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15084c: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x150850: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x150854: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x150854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
    // 0x150858: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15085c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x150860: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x150860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150864: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x150864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x150868: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x150868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15086c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15086Cu;
    {
        const bool branch_taken_0x15086c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15086c) {
            ctx->pc = 0x150870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15086Cu;
            // 0x150870: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x150884u;
            goto label_150884;
        }
    }
    ctx->pc = 0x150874u;
    // 0x150874: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150878: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x150878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x15087c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15087Cu;
    {
        const bool branch_taken_0x15087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15087Cu;
            // 0x150880: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15087c) {
            ctx->pc = 0x150898u;
            goto label_150898;
        }
    }
    ctx->pc = 0x150884u;
label_150884:
    // 0x150884: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150888: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x150888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x15088c: 0x0  nop
    ctx->pc = 0x15088cu;
    // NOP
    // 0x150890: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x150890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x150894: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x150894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150898:
    // 0x150898: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x150898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15089c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15089cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1508A0u;
    {
        const bool branch_taken_0x1508a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1508a0) {
            ctx->pc = 0x1508A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1508A0u;
            // 0x1508a4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1508B8u;
            goto label_1508b8;
        }
    }
    ctx->pc = 0x1508A8u;
    // 0x1508a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1508a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1508ac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1508acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1508b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1508B0u;
    {
        const bool branch_taken_0x1508b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508B0u;
            // 0x1508b4: 0xc5200008  lwc1        $f0, 0x8($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508b0) {
            ctx->pc = 0x1508CCu;
            goto label_1508cc;
        }
    }
    ctx->pc = 0x1508B8u;
label_1508b8:
    // 0x1508b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1508b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1508bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1508bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1508c0: 0x0  nop
    ctx->pc = 0x1508c0u;
    // NOP
    // 0x1508c4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1508c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1508c8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1508c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1508cc:
    // 0x1508cc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1508ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1508d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1508d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1508D4u;
    {
        const bool branch_taken_0x1508d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1508d4) {
            ctx->pc = 0x1508D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1508D4u;
            // 0x1508d8: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1508ECu;
            goto label_1508ec;
        }
    }
    ctx->pc = 0x1508DCu;
    // 0x1508dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1508dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1508e0: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x1508e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1508e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1508E4u;
    {
        const bool branch_taken_0x1508e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508E4u;
            // 0x1508e8: 0xc520000c  lwc1        $f0, 0xC($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508e4) {
            ctx->pc = 0x150900u;
            goto label_150900;
        }
    }
    ctx->pc = 0x1508ECu;
label_1508ec:
    // 0x1508ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1508ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1508f0: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x1508f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1508f4: 0x0  nop
    ctx->pc = 0x1508f4u;
    // NOP
    // 0x1508f8: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x1508f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x1508fc: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x1508fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150900:
    // 0x150900: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x150900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150904: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x150904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150908: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x150908u;
    {
        const bool branch_taken_0x150908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150908) {
            ctx->pc = 0x15090Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150908u;
            // 0x15090c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x150920u;
            goto label_150920;
        }
    }
    ctx->pc = 0x150910u;
    // 0x150910: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150914: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x150914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x150918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150918u;
    {
        const bool branch_taken_0x150918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150918) {
            ctx->pc = 0x150930u;
            goto label_150930;
        }
    }
    ctx->pc = 0x150920u;
label_150920:
    // 0x150920: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150924: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x150924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x150928: 0x0  nop
    ctx->pc = 0x150928u;
    // NOP
    // 0x15092c: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x15092cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
label_150930:
    // 0x150930: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x150930u;
    {
        const bool branch_taken_0x150930 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150930) {
            ctx->pc = 0x150968u;
            goto label_150968;
        }
    }
    ctx->pc = 0x150938u;
    // 0x150938: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x150938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15093c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x150940: 0x84842  srl         $t1, $t0, 1
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x150944: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x150948: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x150948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x15094c: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x150950: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x150950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x150954: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x150954u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x150958: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x150958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x15095c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15095Cu;
    {
        const bool branch_taken_0x15095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15095Cu;
            // 0x150960: 0xac4a001c  sw          $t2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15095c) {
            ctx->pc = 0x150978u;
            goto label_150978;
        }
    }
    ctx->pc = 0x150964u;
    // 0x150964: 0x0  nop
    ctx->pc = 0x150964u;
    // NOP
label_150968:
    // 0x150968: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x150968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x15096c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x15096cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x150970: 0xac4b0018  sw          $t3, 0x18($v0)
    ctx->pc = 0x150970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 11));
    // 0x150974: 0xac4a001c  sw          $t2, 0x1C($v0)
    ctx->pc = 0x150974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 10));
label_150978:
    // 0x150978: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x150978u;
    {
        const bool branch_taken_0x150978 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150978) {
            ctx->pc = 0x1509B0u;
            goto label_1509b0;
        }
    }
    ctx->pc = 0x150980u;
    // 0x150980: 0x96e90000  lhu         $t1, 0x0($s7)
    ctx->pc = 0x150980u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x150984: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x150984u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150988: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15098c: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x15098cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x150990: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x150994: 0x2e7b821  addu        $s7, $s7, $a3
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x150998: 0x2c93821  addu        $a3, $s6, $t1
    ctx->pc = 0x150998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x15099c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509a0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1509a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1509a4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1509a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509a8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1509a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1509ac: 0x0  nop
    ctx->pc = 0x1509acu;
    // NOP
label_1509b0:
    // 0x1509b0: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1509b4: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1509B4u;
    {
        const bool branch_taken_0x1509b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1509b4) {
            ctx->pc = 0x150A20u;
            goto label_150a20;
        }
    }
    ctx->pc = 0x1509BCu;
    // 0x1509bc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1509c0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1509c4: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1509c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1509c8: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x1509c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x1509cc: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1509ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1509d0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1509d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1509d4: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1509d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1509d8: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1509D8u;
    {
        const bool branch_taken_0x1509d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1509D8u;
            // 0x1509dc: 0xac47002c  sw          $a3, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509d8) {
            ctx->pc = 0x150A18u;
            goto label_150a18;
        }
    }
    ctx->pc = 0x1509E0u;
    // 0x1509e0: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x1509e0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1509e4: 0x7ba700a0  lq          $a3, 0xA0($sp)
    ctx->pc = 0x1509e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1509e8: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1509ec: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x1509ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1509f0: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1509f4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x1509f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1509f8: 0x2893821  addu        $a3, $s4, $t1
    ctx->pc = 0x1509f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x1509fc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1509fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a00: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x150a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x150a04: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x150a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a08: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x150a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x150a0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x150A0Cu;
    {
        const bool branch_taken_0x150a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A0Cu;
            // 0x150a10: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a0c) {
            ctx->pc = 0x150AA0u;
            goto label_150aa0;
        }
    }
    ctx->pc = 0x150A14u;
    // 0x150a14: 0x0  nop
    ctx->pc = 0x150a14u;
    // NOP
label_150a18:
    // 0x150a18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x150A18u;
    {
        const bool branch_taken_0x150a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A18u;
            // 0x150a1c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a18) {
            ctx->pc = 0x150AA0u;
            goto label_150aa0;
        }
    }
    ctx->pc = 0x150A20u;
label_150a20:
    // 0x150a20: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x150a24: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150a28: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150a2c: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x150a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x150a30: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x150a34: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150a38: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150a38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150a3c: 0xac47002c  sw          $a3, 0x2C($v0)
    ctx->pc = 0x150a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
    // 0x150a40: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x150a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x150a44: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150a48: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150a4c: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x150a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
    // 0x150a50: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x150a54: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150a58: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150a5c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x150A5Cu;
    {
        const bool branch_taken_0x150a5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A5Cu;
            // 0x150a60: 0xac47003c  sw          $a3, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a5c) {
            ctx->pc = 0x150A98u;
            goto label_150a98;
        }
    }
    ctx->pc = 0x150A64u;
    // 0x150a64: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x150a64u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150a68: 0x7ba700a0  lq          $a3, 0xA0($sp)
    ctx->pc = 0x150a68u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150a6c: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150a70: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x150a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x150a74: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x150a74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x150a78: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x150a7c: 0x2893821  addu        $a3, $s4, $t1
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x150a80: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a84: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x150a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x150a88: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x150a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x150a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x150a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150A90u;
    {
        const bool branch_taken_0x150a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A90u;
            // 0x150a94: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a90) {
            ctx->pc = 0x150AA0u;
            goto label_150aa0;
        }
    }
    ctx->pc = 0x150A98u;
label_150a98:
    // 0x150a98: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x150a9c: 0x0  nop
    ctx->pc = 0x150a9cu;
    // NOP
label_150aa0:
    // 0x150aa0: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150aa8: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x150aa8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x150aac: 0x14e0ff2a  bnez        $a3, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x150AACu;
    {
        const bool branch_taken_0x150aac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x150aac) {
            ctx->pc = 0x150758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150758;
        }
    }
    ctx->pc = 0x150AB4u;
    // 0x150ab4: 0x0  nop
    ctx->pc = 0x150ab4u;
    // NOP
label_150ab8:
    // 0x150ab8: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x150AB8u;
    SET_GPR_U32(ctx, 31, 0x150AC0u);
    ctx->pc = 0x150ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150AB8u;
            // 0x150abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150AC0u; }
        if (ctx->pc != 0x150AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150AC0u; }
        if (ctx->pc != 0x150AC0u) { return; }
    }
    ctx->pc = 0x150AC0u;
label_150ac0:
    // 0x150ac0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150ac4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x150AC4u;
    {
        const bool branch_taken_0x150ac4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x150ac4) {
            ctx->pc = 0x150AF0u;
            goto label_150af0;
        }
    }
    ctx->pc = 0x150ACCu;
    // 0x150acc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150ad0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150ad4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x150ad8: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x150adc: 0x3c4f023  subu        $fp, $fp, $a0
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x150ae0: 0x2e4b823  subu        $s7, $s7, $a0
    ctx->pc = 0x150ae0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x150ae4: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x150ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x150ae8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150aec: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x150aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_150af0:
    // 0x150af0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150af4: 0x1c60fefa  bgtz        $v1, . + 4 + (-0x106 << 2)
    ctx->pc = 0x150AF4u;
    {
        const bool branch_taken_0x150af4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x150af4) {
            ctx->pc = 0x1506E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1506e0;
        }
    }
    ctx->pc = 0x150AFCu;
    // 0x150afc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x150b00: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x150b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x150b04: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x150b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x150b08: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x150b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x150b0c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x150b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150b14: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x150b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x150b18: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x150b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x150b1c: 0x5460feee  bnel        $v1, $zero, . + 4 + (-0x112 << 2)
    ctx->pc = 0x150B1Cu;
    {
        const bool branch_taken_0x150b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150b1c) {
            ctx->pc = 0x150B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150B1Cu;
            // 0x150b20: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1506D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1506d8;
        }
    }
    ctx->pc = 0x150B24u;
    // 0x150b24: 0x0  nop
    ctx->pc = 0x150b24u;
    // NOP
label_150b28:
    // 0x150b28: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x150B28u;
    SET_GPR_U32(ctx, 31, 0x150B30u);
    ctx->pc = 0x150B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B28u;
            // 0x150b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B30u; }
        if (ctx->pc != 0x150B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B30u; }
        if (ctx->pc != 0x150B30u) { return; }
    }
    ctx->pc = 0x150B30u;
label_150b30:
    // 0x150b30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x150b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150b34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x150b34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150b38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x150b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150b3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x150b3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150b40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x150b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150b44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x150b44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150b48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b58: 0x3e00008  jr          $ra
    ctx->pc = 0x150B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B58u;
            // 0x150b5c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150B60u;
}
