#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A420
// Address: 0x21a420 - 0x21a740
void sub_0021A420_0x21a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A420_0x21a420");
#endif

    switch (ctx->pc) {
        case 0x21a430u: goto label_21a430;
        case 0x21a460u: goto label_21a460;
        case 0x21a4c0u: goto label_21a4c0;
        case 0x21a520u: goto label_21a520;
        case 0x21a580u: goto label_21a580;
        case 0x21a5e0u: goto label_21a5e0;
        case 0x21a648u: goto label_21a648;
        case 0x21a6a0u: goto label_21a6a0;
        case 0x21a71cu: goto label_21a71c;
        default: break;
    }

    ctx->pc = 0x21a420u;

    // 0x21a420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21a424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21a424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21a428: 0xc047ee8  jal         func_11FBA0
    ctx->pc = 0x21A428u;
    SET_GPR_U32(ctx, 31, 0x21A430u);
    ctx->pc = 0x21A42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A428u;
            // 0x21a42c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FBA0u;
    if (runtime->hasFunction(0x11FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x11FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A430u; }
        if (ctx->pc != 0x21A430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FBA0_0x11fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A430u; }
        if (ctx->pc != 0x21A430u) { return; }
    }
    ctx->pc = 0x21A430u;
label_21a430:
    // 0x21a430: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x21a430u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x21a434: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a43c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x21a43cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21a440: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a448: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21a448u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x21a44c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A44Cu;
    {
        const bool branch_taken_0x21a44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A44Cu;
            // 0x21a450: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a44c) {
            ctx->pc = 0x21A490u;
            goto label_21a490;
        }
    }
    ctx->pc = 0x21A454u;
    // 0x21a454: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a458: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x21a458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21a45c: 0x0  nop
    ctx->pc = 0x21a45cu;
    // NOP
label_21a460:
    // 0x21a460: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21a460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a464: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x21a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21a468: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a468u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a46c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a46cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a474: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a478: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a47c: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x21a47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a480: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x21a480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21a484: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21a484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a488: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A488u;
    {
        const bool branch_taken_0x21a488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A488u;
            // 0x21a48c: 0xc83018  mult        $a2, $a2, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a488) {
            ctx->pc = 0x21A460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a460;
        }
    }
    ctx->pc = 0x21A490u;
label_21a490:
    // 0x21a490: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x21a490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21a494: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x21a494u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x21a498: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a49c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a4a0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a4a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4a8: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x21a4a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x21a4ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a4b0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A4B0u;
    {
        const bool branch_taken_0x21a4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4B0u;
            // 0x21a4b4: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4b0) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4B8u;
    // 0x21a4b8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a4b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a4bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a4c0:
    // 0x21a4c0: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21a4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a4c4: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x21a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21a4c8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a4c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a4cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a4ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a4d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a4d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a4d8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a4dc: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x21a4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a4e0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x21a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21a4e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21a4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4e8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A4E8u;
    {
        const bool branch_taken_0x21a4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4E8u;
            // 0x21a4ec: 0xc43018  mult        $a2, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e8) {
            ctx->pc = 0x21A4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a4c0;
        }
    }
    ctx->pc = 0x21A4F0u;
label_21a4f0:
    // 0x21a4f0: 0xe82018  mult        $a0, $a3, $t0
    ctx->pc = 0x21a4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21a4f4: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x21a4f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x21a4f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a4fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a500: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a508: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x21a508u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x21a50c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a510: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A510u;
    {
        const bool branch_taken_0x21a510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A510u;
            // 0x21a514: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a510) {
            ctx->pc = 0x21A550u;
            goto label_21a550;
        }
    }
    ctx->pc = 0x21A518u;
    // 0x21a518: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a51c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a520:
    // 0x21a520: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21a520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a524: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x21a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21a528: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a528u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a52c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a534: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a538: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a53c: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x21a53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a540: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x21a540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21a544: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21a544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a548: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A548u;
    {
        const bool branch_taken_0x21a548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A548u;
            // 0x21a54c: 0xc43018  mult        $a2, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a548) {
            ctx->pc = 0x21A520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a520;
        }
    }
    ctx->pc = 0x21A550u;
label_21a550:
    // 0x21a550: 0xe82018  mult        $a0, $a3, $t0
    ctx->pc = 0x21a550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21a554: 0x93a50005  lbu         $a1, 0x5($sp)
    ctx->pc = 0x21a554u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x21a558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a55c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a560: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a568: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x21a568u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x21a56c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a570: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A570u;
    {
        const bool branch_taken_0x21a570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A570u;
            // 0x21a574: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a570) {
            ctx->pc = 0x21A5B0u;
            goto label_21a5b0;
        }
    }
    ctx->pc = 0x21A578u;
    // 0x21a578: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a57c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a580:
    // 0x21a580: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a584: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x21a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21a588: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a588u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a58c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a58cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a590: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a594: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a598: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a59c: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x21a59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a5a0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x21a5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21a5a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21a5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5a8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A5A8u;
    {
        const bool branch_taken_0x21a5a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5A8u;
            // 0x21a5ac: 0xc43018  mult        $a2, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5a8) {
            ctx->pc = 0x21A580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a580;
        }
    }
    ctx->pc = 0x21A5B0u;
label_21a5b0:
    // 0x21a5b0: 0xe82018  mult        $a0, $a3, $t0
    ctx->pc = 0x21a5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21a5b4: 0x93a50006  lbu         $a1, 0x6($sp)
    ctx->pc = 0x21a5b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x21a5b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a5bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a5c0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a5c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5c8: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x21a5c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x21a5cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a5d0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21A5D0u;
    {
        const bool branch_taken_0x21a5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5D0u;
            // 0x21a5d4: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5d0) {
            ctx->pc = 0x21A610u;
            goto label_21a610;
        }
    }
    ctx->pc = 0x21A5D8u;
    // 0x21a5d8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a5dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a5e0:
    // 0x21a5e0: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21a5e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a5e4: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x21a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21a5e8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a5e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a5ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a5ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a5f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5f4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a5f8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x21a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a5fc: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x21a5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a600: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x21a600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21a604: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21a604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a608: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A608u;
    {
        const bool branch_taken_0x21a608 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A608u;
            // 0x21a60c: 0xc43018  mult        $a2, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a608) {
            ctx->pc = 0x21A5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a5e0;
        }
    }
    ctx->pc = 0x21A610u;
label_21a610:
    // 0x21a610: 0xe81818  mult        $v1, $a3, $t0
    ctx->pc = 0x21a610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21a614: 0x93a60007  lbu         $a2, 0x7($sp)
    ctx->pc = 0x21a614u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x21a618: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a620: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x21a620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21a624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a628: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x21a628u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x21a62c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21a630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a634: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A634u;
    {
        const bool branch_taken_0x21a634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A634u;
            // 0x21a638: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a634) {
            ctx->pc = 0x21A678u;
            goto label_21a678;
        }
    }
    ctx->pc = 0x21A63Cu;
    // 0x21a63c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x21a63cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a640: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x21a640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21a644: 0x0  nop
    ctx->pc = 0x21a644u;
    // NOP
label_21a648:
    // 0x21a648: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x21a648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21a64c: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x21a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x21a650: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x21a650u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x21a654: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21a654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21a658: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a65c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a660: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21a664: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x21a664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x21a668: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21a66c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21a66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a670: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A670u;
    {
        const bool branch_taken_0x21a670 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A670u;
            // 0x21a674: 0x882018  mult        $a0, $a0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a670) {
            ctx->pc = 0x21A648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a648;
        }
    }
    ctx->pc = 0x21A678u;
label_21a678:
    // 0x21a678: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x21a678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21a67c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a680: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x21a680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x21a684: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x21a688: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x21a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a68c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x21a68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a690: 0x24a20064  addiu       $v0, $a1, 0x64
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x21a694: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21a694u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21a698: 0xc04a674  jal         func_1299D0
    ctx->pc = 0x21A698u;
    SET_GPR_U32(ctx, 31, 0x21A6A0u);
    ctx->pc = 0x21A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A698u;
            // 0x21a69c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1299D0u;
    if (runtime->hasFunction(0x1299D0u)) {
        auto targetFn = runtime->lookupFunction(0x1299D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6A0u; }
        if (ctx->pc != 0x21A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001299D0_0x1299d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6A0u; }
        if (ctx->pc != 0x21A6A0u) { return; }
    }
    ctx->pc = 0x21A6A0u;
label_21a6a0:
    // 0x21a6a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6A4u;
            // 0x21a6a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A6ACu;
    // 0x21a6ac: 0x0  nop
    ctx->pc = 0x21a6acu;
    // NOP
    // 0x21a6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6c0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21A6C0u;
    {
        const bool branch_taken_0x21a6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a6c0) {
            ctx->pc = 0x21A6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6C0u;
            // 0x21a6c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A720u;
            goto label_21a720;
        }
    }
    ctx->pc = 0x21A6C8u;
    // 0x21a6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a6cc: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x21a6d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A6D0u;
    {
        const bool branch_taken_0x21a6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6D0u;
            // 0x21a6d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6d0) {
            ctx->pc = 0x21A6F4u;
            goto label_21a6f4;
        }
    }
    ctx->pc = 0x21A6D8u;
    // 0x21a6d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a6dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21a6e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A6E0u;
    {
        const bool branch_taken_0x21a6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6E0u;
            // 0x21a6e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6e0) {
            ctx->pc = 0x21A6F4u;
            goto label_21a6f4;
        }
    }
    ctx->pc = 0x21A6E8u;
    // 0x21a6e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a6ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21a6f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a6f4:
    // 0x21a6f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21a6f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21a6f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21a6fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A6FCu;
    {
        const bool branch_taken_0x21a6fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21a6fc) {
            ctx->pc = 0x21A71Cu;
            goto label_21a71c;
        }
    }
    ctx->pc = 0x21A704u;
    // 0x21a704: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21a708: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21a708u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21a70c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21a710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a714: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21A714u;
    SET_GPR_U32(ctx, 31, 0x21A71Cu);
    ctx->pc = 0x21A718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A714u;
            // 0x21a718: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A71Cu; }
        if (ctx->pc != 0x21A71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A71Cu; }
        if (ctx->pc != 0x21A71Cu) { return; }
    }
    ctx->pc = 0x21A71Cu;
label_21a71c:
    // 0x21a71c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a720:
    // 0x21a720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a728: 0x3e00008  jr          $ra
    ctx->pc = 0x21A728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A728u;
            // 0x21a72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A730u;
    // 0x21a730: 0x3e00008  jr          $ra
    ctx->pc = 0x21A730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A738u;
    // 0x21a738: 0x0  nop
    ctx->pc = 0x21a738u;
    // NOP
    // 0x21a73c: 0x0  nop
    ctx->pc = 0x21a73cu;
    // NOP
}
