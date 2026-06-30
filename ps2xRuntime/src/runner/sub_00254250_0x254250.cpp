#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00254250
// Address: 0x254250 - 0x2543d0
void sub_00254250_0x254250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254250_0x254250");
#endif

    switch (ctx->pc) {
        case 0x2542c0u: goto label_2542c0;
        case 0x2542e8u: goto label_2542e8;
        case 0x254350u: goto label_254350;
        default: break;
    }

    ctx->pc = 0x254250u;

    // 0x254250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x254250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x254254: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x254254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x254258: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x254258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25425c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x254260: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x254260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x254268: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x254268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25426c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x254270: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x254270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254278: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x254278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25427c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254280: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x254280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254288: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x254288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25428c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x25428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x254290: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x254290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x254294: 0x24b00002  addiu       $s0, $a1, 0x2
    ctx->pc = 0x254294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x254298: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x254298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x25429c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x25429cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2542a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2542A0u;
    {
        const bool branch_taken_0x2542a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2542A0u;
            // 0x2542a4: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542a0) {
            ctx->pc = 0x2542C0u;
            goto label_2542c0;
        }
    }
    ctx->pc = 0x2542A8u;
    // 0x2542a8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2542a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2542ac: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2542acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2542b0: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x2542b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x2542b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2542b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542b8: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2542B8u;
    SET_GPR_U32(ctx, 31, 0x2542C0u);
    ctx->pc = 0x2542BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2542B8u;
            // 0x2542bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542C0u; }
        if (ctx->pc != 0x2542C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542C0u; }
        if (ctx->pc != 0x2542C0u) { return; }
    }
    ctx->pc = 0x2542C0u;
label_2542c0:
    // 0x2542c0: 0xaed00004  sw          $s0, 0x4($s6)
    ctx->pc = 0x2542c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
    // 0x2542c4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2542c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2542c8: 0x2604fffd  addiu       $a0, $s0, -0x3
    ctx->pc = 0x2542c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x2542cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2542ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2542d0: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x2542d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2542d4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2542d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2542d8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2542d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2542dc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2542dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2542e0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2542E0u;
    {
        const bool branch_taken_0x2542e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2542e0) {
            ctx->pc = 0x254310u;
            goto label_254310;
        }
    }
    ctx->pc = 0x2542E8u;
label_2542e8:
    // 0x2542e8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2542e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2542ec: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x2542ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2542f0: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2542f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2542f4: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x2542f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2542f8: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2542f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2542fc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2542fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254300: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x254300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x254304: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x254304u;
    {
        const bool branch_taken_0x254304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x254304) {
            ctx->pc = 0x2542E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2542e8;
        }
    }
    ctx->pc = 0x25430Cu;
    // 0x25430c: 0x0  nop
    ctx->pc = 0x25430cu;
    // NOP
label_254310:
    // 0x254310: 0xa4d5000a  sh          $s5, 0xA($a2)
    ctx->pc = 0x254310u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 21));
    // 0x254314: 0xa4d30008  sh          $s3, 0x8($a2)
    ctx->pc = 0x254314u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x254318: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x254318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x25431c: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x25431cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x254320: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254320u;
    {
        const bool branch_taken_0x254320 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x254324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254320u;
            // 0x254324: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254320) {
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x254328u;
    // 0x254328: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x254328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x25432c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_254330:
    // 0x254330: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x254330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x254334: 0x3284ffff  andi        $a0, $s4, 0xFFFF
    ctx->pc = 0x254334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x254338: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x254338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25433c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x25433cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254340: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x254340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254344: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x254344u;
    {
        const bool branch_taken_0x254344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x254344) {
            ctx->pc = 0x254378u;
            goto label_254378;
        }
    }
    ctx->pc = 0x25434Cu;
    // 0x25434c: 0x0  nop
    ctx->pc = 0x25434cu;
    // NOP
label_254350:
    // 0x254350: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x254350u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254354: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x254354u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x254358: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x254358u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x25435c: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x25435cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x254360: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x254360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x254364: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x254364u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254368: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x254368u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25436c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25436Cu;
    {
        const bool branch_taken_0x25436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25436c) {
            ctx->pc = 0x254350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254350;
        }
    }
    ctx->pc = 0x254374u;
    // 0x254374: 0x0  nop
    ctx->pc = 0x254374u;
    // NOP
label_254378:
    // 0x254378: 0xa4d40004  sh          $s4, 0x4($a2)
    ctx->pc = 0x254378u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 20));
    // 0x25437c: 0xa4d50006  sh          $s5, 0x6($a2)
    ctx->pc = 0x25437cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 21));
    // 0x254380: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x254380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x254384: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x254384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x254388: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254388u;
    {
        const bool branch_taken_0x254388 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254388u;
            // 0x25438c: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254388) {
            ctx->pc = 0x254398u;
            goto label_254398;
        }
    }
    ctx->pc = 0x254390u;
    // 0x254390: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x254390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x254394: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x254394u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_254398:
    // 0x254398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25439c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x25439cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2543a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2543a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2543a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2543a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2543a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2543a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2543ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2543acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2543b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2543b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2543b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2543b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2543b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2543b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2543bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2543C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2543C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2543C0u;
            // 0x2543c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2543C8u;
    // 0x2543c8: 0x0  nop
    ctx->pc = 0x2543c8u;
    // NOP
    // 0x2543cc: 0x0  nop
    ctx->pc = 0x2543ccu;
    // NOP
}
