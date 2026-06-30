#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C070
// Address: 0x15c070 - 0x15c2b0
void sub_0015C070_0x15c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C070_0x15c070");
#endif

    switch (ctx->pc) {
        case 0x15c140u: goto label_15c140;
        case 0x15c1bcu: goto label_15c1bc;
        case 0x15c1e4u: goto label_15c1e4;
        default: break;
    }

    ctx->pc = 0x15c070u;

    // 0x15c070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15c074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15c078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15c07c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15c080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15c084: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x15c084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c088: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c08c: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x15c090: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c094: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x15c098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c09c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15c0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c0a4: 0x24424e90  addiu       $v0, $v0, 0x4E90
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20112));
    // 0x15c0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c0ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15c0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c0b4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x15c0b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0b8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c0bc: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x15c0bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0c0: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x15c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x15c0c4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c0c8: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x15c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x15c0cc: 0x14940009  bne         $a0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C0CCu;
    {
        const bool branch_taken_0x15c0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x15C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0CCu;
            // 0x15c0d0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0cc) {
            ctx->pc = 0x15C0F4u;
            goto label_15c0f4;
        }
    }
    ctx->pc = 0x15C0D4u;
    // 0x15c0d4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15c0d8: 0x24940020  addiu       $s4, $a0, 0x20
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x15c0dc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x15c0dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15c0e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x15c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x15c0e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15c0e8: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x15c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x15c0ec: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x15c0ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15c0f0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x15c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_15c0f4:
    // 0x15c0f4: 0x1091818  mult        $v1, $t0, $t1
    ctx->pc = 0x15c0f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c0f8: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x15c0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x15c0fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x15c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15c100: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x15c100u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15c104: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x15c104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x15c108: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x15c10c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x15c10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c110: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x15c114: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x15c118: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x15c118u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c11c: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x15c11cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x15c120: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x15C120u;
    {
        const bool branch_taken_0x15c120 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C120u;
            // 0x15c124: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c120) {
            ctx->pc = 0x15C17Cu;
            goto label_15c17c;
        }
    }
    ctx->pc = 0x15C128u;
    // 0x15c128: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x15c128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x15c12c: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x15c130: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15c130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x15c134: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x15c134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x15c138: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C138u;
    {
        const bool branch_taken_0x15c138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c138) {
            ctx->pc = 0x15C160u;
            goto label_15c160;
        }
    }
    ctx->pc = 0x15C140u;
label_15c140:
    // 0x15c140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c144: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x15c148: 0x2321006  srlv        $v0, $s2, $s1
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
    // 0x15c14c: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15c14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x15c150: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x15c150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x15c154: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C154u;
    {
        const bool branch_taken_0x15c154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c154) {
            ctx->pc = 0x15C140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C15Cu;
    // 0x15c15c: 0x0  nop
    ctx->pc = 0x15c15cu;
    // NOP
label_15c160:
    // 0x15c160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c164: 0x2228804  sllv        $s1, $v0, $s1
    ctx->pc = 0x15c164u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x15c168: 0x211001b  divu        $zero, $s0, $s1
    ctx->pc = 0x15c168u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x15c16c: 0x8012  mflo        $s0
    ctx->pc = 0x15c16cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x15c170: 0x1101018  mult        $v0, $t0, $s0
    ctx->pc = 0x15c170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c174: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x15c174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c178: 0x290c2  srl         $s2, $v0, 3
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_15c17c:
    // 0x15c17c: 0x1101018  mult        $v0, $t0, $s0
    ctx->pc = 0x15c17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c180: 0x88f006  srlv        $fp, $t0, $a0
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x15c184: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x15c184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c188: 0x17c00002  bnez        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C188u;
    {
        const bool branch_taken_0x15c188 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C188u;
            // 0x15c18c: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c188) {
            ctx->pc = 0x15C194u;
            goto label_15c194;
        }
    }
    ctx->pc = 0x15C190u;
    // 0x15c190: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c194:
    // 0x15c194: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x15C194u;
    {
        const bool branch_taken_0x15c194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C194u;
            // 0x15c198: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c194) {
            ctx->pc = 0x15C260u;
            goto label_15c260;
        }
    }
    ctx->pc = 0x15C19Cu;
    // 0x15c19c: 0x244300ff  addiu       $v1, $v0, 0xFF
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x15c1a0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x15c1a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c1a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x15c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x15c1ac: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x15c1b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15c1b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c1b8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_15c1bc:
    // 0x15c1bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15c1c0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x15c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x15c1c4: 0x8fa900c8  lw          $t1, 0xC8($sp)
    ctx->pc = 0x15c1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15c1c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1cc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15c1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1d0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x15c1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1d4: 0x535821  addu        $t3, $v0, $s3
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15c1d8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15c1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1dc: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15C1DCu;
    SET_GPR_U32(ctx, 31, 0x15C1E4u);
    ctx->pc = 0x15C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1DCu;
            // 0x15c1e0: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    if (runtime->hasFunction(0x15BF80u)) {
        auto targetFn = runtime->lookupFunction(0x15BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1E4u; }
        if (ctx->pc != 0x15C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BF80_0x15bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1E4u; }
        if (ctx->pc != 0x15C1E4u) { return; }
    }
    ctx->pc = 0x15C1E4u;
label_15c1e4:
    // 0x15c1e4: 0x96840010  lhu         $a0, 0x10($s4)
    ctx->pc = 0x15c1e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15c1e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c1ec: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15c1f0: 0x3c075100  lui         $a3, 0x5100
    ctx->pc = 0x15c1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20736 << 16));
    // 0x15c1f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x15c1f8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x15c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15c1fc: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x15c1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x15c200: 0x7e800000  sq          $zero, 0x0($s4)
    ctx->pc = 0x15c200u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 0));
    // 0x15c204: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x15c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x15c208: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15c208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15c20c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x15c20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15c210: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x15c210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x15c214: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x15c214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x15c218: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15c218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15c21c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x15c21cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15c220: 0xae86000c  sw          $a2, 0xC($s4)
    ctx->pc = 0x15c220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 6));
    // 0x15c224: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x15c224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15c228: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x15c228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15c22c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x15c22cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x15c230: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x15c230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c234: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15c238: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x15c238u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x15c23c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x15c23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15c240: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x15c240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x15c244: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x15c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x15c248: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x15c248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x15c24c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x15c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x15c250: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x15c250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c254: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x15C254u;
    {
        const bool branch_taken_0x15c254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C254u;
            // 0x15c258: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c254) {
            ctx->pc = 0x15C1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c1bc;
        }
    }
    ctx->pc = 0x15C25Cu;
    // 0x15c25c: 0x0  nop
    ctx->pc = 0x15c25cu;
    // NOP
label_15c260:
    // 0x15c260: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x15c260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x15c264: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15c264u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15c268: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x15c268u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x15c26c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15c26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c270: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x15c274: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x15c274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x15c278: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15c27c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15c27cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15c280: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c284: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c28c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2A0u;
            // 0x15c2a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C2A8u;
    // 0x15c2a8: 0x0  nop
    ctx->pc = 0x15c2a8u;
    // NOP
    // 0x15c2ac: 0x0  nop
    ctx->pc = 0x15c2acu;
    // NOP
}
