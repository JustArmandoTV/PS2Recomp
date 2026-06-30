#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E500
// Address: 0x23e500 - 0x23e680
void sub_0023E500_0x23e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E500_0x23e500");
#endif

    switch (ctx->pc) {
        case 0x23e53cu: goto label_23e53c;
        case 0x23e57cu: goto label_23e57c;
        case 0x23e5c4u: goto label_23e5c4;
        case 0x23e620u: goto label_23e620;
        default: break;
    }

    ctx->pc = 0x23e500u;

    // 0x23e500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23e504: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23e508: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23e50c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23e510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23e514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23e518: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e520: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23e520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e528: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23e528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e52c: 0x94a301ec  lhu         $v1, 0x1EC($a1)
    ctx->pc = 0x23e52cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 492)));
    // 0x23e530: 0x18600049  blez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x23E530u;
    {
        const bool branch_taken_0x23e530 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E530u;
            // 0x23e534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e530) {
            ctx->pc = 0x23E658u;
            goto label_23e658;
        }
    }
    ctx->pc = 0x23E538u;
    // 0x23e538: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23e538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e53c:
    // 0x23e53c: 0x8e4401e8  lw          $a0, 0x1E8($s2)
    ctx->pc = 0x23e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x23e540: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x23e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23e544: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x23e548: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x23e548u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e54c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x23e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x23e550: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x23E550u;
    {
        const bool branch_taken_0x23e550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e550) {
            ctx->pc = 0x23E640u;
            goto label_23e640;
        }
    }
    ctx->pc = 0x23E558u;
    // 0x23e558: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e55c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e560: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x23e564: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x23e568: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E568u;
    {
        const bool branch_taken_0x23e568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e568) {
            ctx->pc = 0x23E580u;
            goto label_23e580;
        }
    }
    ctx->pc = 0x23E570u;
    // 0x23e570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e574: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x23E574u;
    SET_GPR_U32(ctx, 31, 0x23E57Cu);
    ctx->pc = 0x23E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E574u;
            // 0x23e578: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E57Cu; }
        if (ctx->pc != 0x23E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E57Cu; }
        if (ctx->pc != 0x23E57Cu) { return; }
    }
    ctx->pc = 0x23E57Cu;
label_23e57c:
    // 0x23e57c: 0x0  nop
    ctx->pc = 0x23e57cu;
    // NOP
label_23e580:
    // 0x23e580: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e584: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e588: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x23e588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x23e58c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e590: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e598: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x23e598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x23e59c: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x23e59cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x23e5a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E5A0u;
    {
        const bool branch_taken_0x23e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5a0) {
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E5A8u;
    // 0x23e5a8: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x23e5a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x23e5ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e5b0: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x23e5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e5b4: 0x0  nop
    ctx->pc = 0x23e5b4u;
    // NOP
label_23e5b8:
    // 0x23e5b8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23e5bc: 0xc08b7a4  jal         func_22DE90
    ctx->pc = 0x23E5BCu;
    SET_GPR_U32(ctx, 31, 0x23E5C4u);
    ctx->pc = 0x23E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5BCu;
            // 0x23e5c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE90u;
    if (runtime->hasFunction(0x22DE90u)) {
        auto targetFn = runtime->lookupFunction(0x22DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5C4u; }
        if (ctx->pc != 0x23E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE90_0x22de90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5C4u; }
        if (ctx->pc != 0x23E5C4u) { return; }
    }
    ctx->pc = 0x23E5C4u;
label_23e5c4:
    // 0x23e5c4: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23e5c8: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x23e5cc: 0x64050010  daddiu      $a1, $zero, 0x10
    ctx->pc = 0x23e5ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x23e5d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23e5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e5d4: 0x90e60027  lbu         $a2, 0x27($a3)
    ctx->pc = 0x23e5d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 39)));
    // 0x23e5d8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x23e5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x23e5dc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23e5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x23e5e0: 0xa0e40027  sb          $a0, 0x27($a3)
    ctx->pc = 0x23e5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 39), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e5e4: 0x8e740020  lw          $s4, 0x20($s3)
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23e5e8: 0x96840022  lhu         $a0, 0x22($s4)
    ctx->pc = 0x23e5e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x23e5ec: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23E5ECu;
    {
        const bool branch_taken_0x23e5ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e5ec) {
            ctx->pc = 0x23E640u;
            goto label_23e640;
        }
    }
    ctx->pc = 0x23E5F4u;
    // 0x23e5f4: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x23e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x23e5f8: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x23e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e5fc: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x23e600: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x23e600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x23e604: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23e604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x23e608: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x23e60c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E60Cu;
    {
        const bool branch_taken_0x23e60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e60c) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E614u;
    // 0x23e614: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x23e614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x23e618: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x23E618u;
    SET_GPR_U32(ctx, 31, 0x23E620u);
    ctx->pc = 0x23E61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E618u;
            // 0x23e61c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E620u; }
        if (ctx->pc != 0x23E620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E620u; }
        if (ctx->pc != 0x23E620u) { return; }
    }
    ctx->pc = 0x23E620u;
label_23e620:
    // 0x23e620: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x23e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x23e624: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23e628: 0xae630044  sw          $v1, 0x44($s3)
    ctx->pc = 0x23e628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
    // 0x23e62c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e630: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x23e634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e638: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x23e638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x23e63c: 0x0  nop
    ctx->pc = 0x23e63cu;
    // NOP
label_23e640:
    // 0x23e640: 0x964301ec  lhu         $v1, 0x1EC($s2)
    ctx->pc = 0x23e640u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x23e644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23e644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23e648: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x23e648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e64c: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x23E64Cu;
    {
        const bool branch_taken_0x23e64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E64Cu;
            // 0x23e650: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e64c) {
            ctx->pc = 0x23E53Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e53c;
        }
    }
    ctx->pc = 0x23E654u;
    // 0x23e654: 0x0  nop
    ctx->pc = 0x23e654u;
    // NOP
label_23e658:
    // 0x23e658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23e658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e65c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23e65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23e660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e674: 0x3e00008  jr          $ra
    ctx->pc = 0x23E674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E674u;
            // 0x23e678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E67Cu;
    // 0x23e67c: 0x0  nop
    ctx->pc = 0x23e67cu;
    // NOP
}
