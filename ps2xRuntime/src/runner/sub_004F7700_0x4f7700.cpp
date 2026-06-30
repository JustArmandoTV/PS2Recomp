#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F7700
// Address: 0x4f7700 - 0x4f7cc0
void sub_004F7700_0x4f7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7700_0x4f7700");
#endif

    switch (ctx->pc) {
        case 0x4f772cu: goto label_4f772c;
        case 0x4f77e0u: goto label_4f77e0;
        case 0x4f77f8u: goto label_4f77f8;
        case 0x4f7884u: goto label_4f7884;
        case 0x4f791cu: goto label_4f791c;
        case 0x4f7a0cu: goto label_4f7a0c;
        case 0x4f7bc4u: goto label_4f7bc4;
        case 0x4f7bdcu: goto label_4f7bdc;
        default: break;
    }

    ctx->pc = 0x4f7700u;

    // 0x4f7700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f7704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4f7704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4f7708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f770c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4f7710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f7710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f7714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f7714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7718: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f7718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f771c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f771cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4f7720: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4f7720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4f7724: 0x10a0015c  beqz        $a1, . + 4 + (0x15C << 2)
    ctx->pc = 0x4F7724u;
    {
        const bool branch_taken_0x4f7724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7724u;
            // 0x4f7728: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7724) {
            ctx->pc = 0x4F7C98u;
            goto label_4f7c98;
        }
    }
    ctx->pc = 0x4F772Cu;
label_4f772c:
    // 0x4f772c: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x4f772cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4f7730: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4f7730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4f7734: 0x50400155  beql        $v0, $zero, . + 4 + (0x155 << 2)
    ctx->pc = 0x4F7734u;
    {
        const bool branch_taken_0x4f7734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7734) {
            ctx->pc = 0x4F7738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7734u;
            // 0x4f7738: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7C8Cu;
            goto label_4f7c8c;
        }
    }
    ctx->pc = 0x4F773Cu;
    // 0x4f773c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f773cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7740: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4f7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4f7744: 0x2241804  sllv        $v1, $a0, $s1
    ctx->pc = 0x4f7744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x4f7748: 0x1062014f  beq         $v1, $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x4F7748u;
    {
        const bool branch_taken_0x4f7748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7748) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7750u;
    // 0x4f7750: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4f7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4f7754: 0x10620144  beq         $v1, $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x4F7754u;
    {
        const bool branch_taken_0x4f7754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7754) {
            ctx->pc = 0x4F7C68u;
            goto label_4f7c68;
        }
    }
    ctx->pc = 0x4F775Cu;
    // 0x4f775c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4f775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4f7760: 0x1062010b  beq         $v1, $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x4F7760u;
    {
        const bool branch_taken_0x4f7760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7760) {
            ctx->pc = 0x4F7B90u;
            goto label_4f7b90;
        }
    }
    ctx->pc = 0x4F7768u;
    // 0x4f7768: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x4f7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4f776c: 0x10620146  beq         $v1, $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x4F776Cu;
    {
        const bool branch_taken_0x4f776c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f776c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7774u;
    // 0x4f7774: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4f7774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4f7778: 0x10620143  beq         $v1, $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x4F7778u;
    {
        const bool branch_taken_0x4f7778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7778) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7780u;
    // 0x4f7780: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4f7780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4f7784: 0x106200c8  beq         $v1, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x4F7784u;
    {
        const bool branch_taken_0x4f7784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7784) {
            ctx->pc = 0x4F7AA8u;
            goto label_4f7aa8;
        }
    }
    ctx->pc = 0x4F778Cu;
    // 0x4f778c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4f778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4f7790: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x4F7790u;
    {
        const bool branch_taken_0x4f7790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7790) {
            ctx->pc = 0x4F7A00u;
            goto label_4f7a00;
        }
    }
    ctx->pc = 0x4F7798u;
    // 0x4f7798: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f7798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f779c: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x4F779Cu;
    {
        const bool branch_taken_0x4f779c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f779c) {
            ctx->pc = 0x4F7910u;
            goto label_4f7910;
        }
    }
    ctx->pc = 0x4F77A4u;
    // 0x4f77a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f77a8: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4F77A8u;
    {
        const bool branch_taken_0x4f77a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f77a8) {
            ctx->pc = 0x4F7878u;
            goto label_4f7878;
        }
    }
    ctx->pc = 0x4F77B0u;
    // 0x4f77b0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F77B0u;
    {
        const bool branch_taken_0x4f77b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f77b0) {
            ctx->pc = 0x4F77C0u;
            goto label_4f77c0;
        }
    }
    ctx->pc = 0x4F77B8u;
    // 0x4f77b8: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x4F77B8u;
    {
        const bool branch_taken_0x4f77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f77b8) {
            ctx->pc = 0x4F7C7Cu;
            goto label_4f7c7c;
        }
    }
    ctx->pc = 0x4F77C0u;
label_4f77c0:
    // 0x4f77c0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4f77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f77c4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4f77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4f77c8: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x4f77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x4f77cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f77ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f77d0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4F77D0u;
    {
        const bool branch_taken_0x4f77d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f77d0) {
            ctx->pc = 0x4F7828u;
            goto label_4f7828;
        }
    }
    ctx->pc = 0x4F77D8u;
    // 0x4f77d8: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F77D8u;
    SET_GPR_U32(ctx, 31, 0x4F77E0u);
    ctx->pc = 0x4F77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F77D8u;
            // 0x4f77dc: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F77E0u; }
        if (ctx->pc != 0x4F77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F77E0u; }
        if (ctx->pc != 0x4F77E0u) { return; }
    }
    ctx->pc = 0x4F77E0u;
label_4f77e0:
    // 0x4f77e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f77e4: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F77E4u;
    {
        const bool branch_taken_0x4f77e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f77e4) {
            ctx->pc = 0x4F7828u;
            goto label_4f7828;
        }
    }
    ctx->pc = 0x4F77ECu;
    // 0x4f77ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f77f0: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F77F0u;
    SET_GPR_U32(ctx, 31, 0x4F77F8u);
    ctx->pc = 0x4F77F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F77F0u;
            // 0x4f77f4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F77F8u; }
        if (ctx->pc != 0x4F77F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F77F8u; }
        if (ctx->pc != 0x4F77F8u) { return; }
    }
    ctx->pc = 0x4F77F8u;
label_4f77f8:
    // 0x4f77f8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4f77f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f77fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f7800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f7800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7804: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7804u;
    {
        const bool branch_taken_0x4f7804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7804) {
            ctx->pc = 0x4F7828u;
            goto label_4f7828;
        }
    }
    ctx->pc = 0x4F780Cu;
    // 0x4f780c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7810: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f7810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f7814: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x4f7814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x4f7818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f7818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f781c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F781Cu;
    {
        const bool branch_taken_0x4f781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f781c) {
            ctx->pc = 0x4F7820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F781Cu;
            // 0x4f7820: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7834u;
            goto label_4f7834;
        }
    }
    ctx->pc = 0x4F7824u;
    // 0x4f7824: 0x0  nop
    ctx->pc = 0x4f7824u;
    // NOP
label_4f7828:
    // 0x4f7828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f782c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x4F782Cu;
    {
        const bool branch_taken_0x4f782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F782Cu;
            // 0x4f7830: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f782c) {
            ctx->pc = 0x4F7CA0u;
            goto label_4f7ca0;
        }
    }
    ctx->pc = 0x4F7834u;
label_4f7834:
    // 0x4f7834: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7834u;
    {
        const bool branch_taken_0x4f7834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7834) {
            ctx->pc = 0x4F7860u;
            goto label_4f7860;
        }
    }
    ctx->pc = 0x4F783Cu;
    // 0x4f783c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7840: 0x10620111  beq         $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x4F7840u;
    {
        const bool branch_taken_0x4f7840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7840) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7848u;
    // 0x4f7848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f7848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f784c: 0x1062010e  beq         $v1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x4F784Cu;
    {
        const bool branch_taken_0x4f784c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f784c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7854u;
    // 0x4f7854: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x4F7854u;
    {
        const bool branch_taken_0x4f7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7854) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F785Cu;
    // 0x4f785c: 0x0  nop
    ctx->pc = 0x4f785cu;
    // NOP
label_4f7860:
    // 0x4f7860: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4f7860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x4f7864: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f7864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f786c: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x4F786Cu;
    {
        const bool branch_taken_0x4f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F786Cu;
            // 0x4f7870: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f786c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7874u;
    // 0x4f7874: 0x0  nop
    ctx->pc = 0x4f7874u;
    // NOP
label_4f7878:
    // 0x4f7878: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f787c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F787Cu;
    SET_GPR_U32(ctx, 31, 0x4F7884u);
    ctx->pc = 0x4F7880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F787Cu;
            // 0x4f7880: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7884u; }
        if (ctx->pc != 0x4F7884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7884u; }
        if (ctx->pc != 0x4F7884u) { return; }
    }
    ctx->pc = 0x4F7884u;
label_4f7884:
    // 0x4f7884: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4f7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7888: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4f7888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4f788c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F788Cu;
    {
        const bool branch_taken_0x4f788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f788c) {
            ctx->pc = 0x4F78A8u;
            goto label_4f78a8;
        }
    }
    ctx->pc = 0x4F7894u;
    // 0x4f7894: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7898: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x4f7898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4f789c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4f78a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F78A0u;
    {
        const bool branch_taken_0x4f78a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f78a0) {
            ctx->pc = 0x4F78A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F78A0u;
            // 0x4f78a4: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F78B4u;
            goto label_4f78b4;
        }
    }
    ctx->pc = 0x4F78A8u;
label_4f78a8:
    // 0x4f78a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f78a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f78ac: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x4F78ACu;
    {
        const bool branch_taken_0x4f78ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f78ac) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F78B4u;
label_4f78b4:
    // 0x4f78b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F78B4u;
    {
        const bool branch_taken_0x4f78b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f78b4) {
            ctx->pc = 0x4F78F8u;
            goto label_4f78f8;
        }
    }
    ctx->pc = 0x4F78BCu;
    // 0x4f78bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f78c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F78C0u;
    {
        const bool branch_taken_0x4f78c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f78c0) {
            ctx->pc = 0x4F78E0u;
            goto label_4f78e0;
        }
    }
    ctx->pc = 0x4F78C8u;
    // 0x4f78c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f78cc: 0x106200ee  beq         $v1, $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x4F78CCu;
    {
        const bool branch_taken_0x4f78cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f78cc) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F78D4u;
    // 0x4f78d4: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x4F78D4u;
    {
        const bool branch_taken_0x4f78d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f78d4) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F78DCu;
    // 0x4f78dc: 0x0  nop
    ctx->pc = 0x4f78dcu;
    // NOP
label_4f78e0:
    // 0x4f78e0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4f78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x4f78e4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4f78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f78e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f78e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f78ec: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x4F78ECu;
    {
        const bool branch_taken_0x4f78ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F78F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F78ECu;
            // 0x4f78f0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f78ec) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F78F4u;
    // 0x4f78f4: 0x0  nop
    ctx->pc = 0x4f78f4u;
    // NOP
label_4f78f8:
    // 0x4f78f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4f78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x4f78fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7904: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x4F7904u;
    {
        const bool branch_taken_0x4f7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7904u;
            // 0x4f7908: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7904) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F790Cu;
    // 0x4f790c: 0x0  nop
    ctx->pc = 0x4f790cu;
    // NOP
label_4f7910:
    // 0x4f7910: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7914: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F7914u;
    SET_GPR_U32(ctx, 31, 0x4F791Cu);
    ctx->pc = 0x4F7918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7914u;
            // 0x4f7918: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F791Cu; }
        if (ctx->pc != 0x4F791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F791Cu; }
        if (ctx->pc != 0x4F791Cu) { return; }
    }
    ctx->pc = 0x4F791Cu;
label_4f791c:
    // 0x4f791c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4f791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7920: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4f7920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4f7924: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7924u;
    {
        const bool branch_taken_0x4f7924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7924) {
            ctx->pc = 0x4F7950u;
            goto label_4f7950;
        }
    }
    ctx->pc = 0x4F792Cu;
    // 0x4f792c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7930: 0x8ca20da0  lw          $v0, 0xDA0($a1)
    ctx->pc = 0x4f7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
    // 0x4f7934: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4f7938: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7938u;
    {
        const bool branch_taken_0x4f7938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7938) {
            ctx->pc = 0x4F7950u;
            goto label_4f7950;
        }
    }
    ctx->pc = 0x4F7940u;
    // 0x4f7940: 0x8ca20db0  lw          $v0, 0xDB0($a1)
    ctx->pc = 0x4f7940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x4f7944: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4f7944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4f7948: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7948u;
    {
        const bool branch_taken_0x4f7948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f7948) {
            ctx->pc = 0x4F794Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7948u;
            // 0x4f794c: 0x8ca20d78  lw          $v0, 0xD78($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F795Cu;
            goto label_4f795c;
        }
    }
    ctx->pc = 0x4F7950u;
label_4f7950:
    // 0x4f7950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7954: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x4F7954u;
    {
        const bool branch_taken_0x4f7954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7954) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F795Cu;
label_4f795c:
    // 0x4f795c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4f795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7960: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4f7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4f7964: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F7964u;
    {
        const bool branch_taken_0x4f7964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f7964) {
            ctx->pc = 0x4F7968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7964u;
            // 0x4f7968: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F79A8u;
            goto label_4f79a8;
        }
    }
    ctx->pc = 0x4F796Cu;
    // 0x4f796c: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x4f796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x4f7970: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F7970u;
    {
        const bool branch_taken_0x4f7970 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f7970) {
            ctx->pc = 0x4F79A4u;
            goto label_4f79a4;
        }
    }
    ctx->pc = 0x4F7978u;
    // 0x4f7978: 0x8ca20d6c  lw          $v0, 0xD6C($a1)
    ctx->pc = 0x4f7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
    // 0x4f797c: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x4f797cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f7980: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7980u;
    {
        const bool branch_taken_0x4f7980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f7980) {
            ctx->pc = 0x4F7984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7980u;
            // 0x4f7984: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7994u;
            goto label_4f7994;
        }
    }
    ctx->pc = 0x4F7988u;
    // 0x4f7988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f798c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x4F798Cu;
    {
        const bool branch_taken_0x4f798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f798c) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7994u;
label_4f7994:
    // 0x4f7994: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f7994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f799c: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x4F799Cu;
    {
        const bool branch_taken_0x4f799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F79A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F799Cu;
            // 0x4f79a0: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f799c) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F79A4u;
label_4f79a4:
    // 0x4f79a4: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x4f79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_4f79a8:
    // 0x4f79a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4F79A8u;
    {
        const bool branch_taken_0x4f79a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f79a8) {
            ctx->pc = 0x4F79E8u;
            goto label_4f79e8;
        }
    }
    ctx->pc = 0x4F79B0u;
    // 0x4f79b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f79b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F79B4u;
    {
        const bool branch_taken_0x4f79b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f79b4) {
            ctx->pc = 0x4F79D0u;
            goto label_4f79d0;
        }
    }
    ctx->pc = 0x4F79BCu;
    // 0x4f79bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f79c0: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x4F79C0u;
    {
        const bool branch_taken_0x4f79c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f79c0) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F79C8u;
    // 0x4f79c8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x4F79C8u;
    {
        const bool branch_taken_0x4f79c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f79c8) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F79D0u;
label_4f79d0:
    // 0x4f79d0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4f79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x4f79d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4f79d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f79d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f79d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f79dc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x4F79DCu;
    {
        const bool branch_taken_0x4f79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F79E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F79DCu;
            // 0x4f79e0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f79dc) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F79E4u;
    // 0x4f79e4: 0x0  nop
    ctx->pc = 0x4f79e4u;
    // NOP
label_4f79e8:
    // 0x4f79e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4f79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x4f79ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f79f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f79f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f79f4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x4F79F4u;
    {
        const bool branch_taken_0x4f79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F79F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F79F4u;
            // 0x4f79f8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f79f4) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F79FCu;
    // 0x4f79fc: 0x0  nop
    ctx->pc = 0x4f79fcu;
    // NOP
label_4f7a00:
    // 0x4f7a00: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7a04: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F7A04u;
    SET_GPR_U32(ctx, 31, 0x4F7A0Cu);
    ctx->pc = 0x4F7A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7A04u;
            // 0x4f7a08: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7A0Cu; }
        if (ctx->pc != 0x4F7A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7A0Cu; }
        if (ctx->pc != 0x4F7A0Cu) { return; }
    }
    ctx->pc = 0x4F7A0Cu;
label_4f7a0c:
    // 0x4f7a0c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4f7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f7a14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7A14u;
    {
        const bool branch_taken_0x4f7a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7a14) {
            ctx->pc = 0x4F7A40u;
            goto label_4f7a40;
        }
    }
    ctx->pc = 0x4F7A1Cu;
    // 0x4f7a1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7a20: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x4f7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x4f7a24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f7a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4f7a28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7A28u;
    {
        const bool branch_taken_0x4f7a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7a28) {
            ctx->pc = 0x4F7A40u;
            goto label_4f7a40;
        }
    }
    ctx->pc = 0x4F7A30u;
    // 0x4f7a30: 0x8c630db0  lw          $v1, 0xDB0($v1)
    ctx->pc = 0x4f7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
    // 0x4f7a34: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4f7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4f7a38: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7A38u;
    {
        const bool branch_taken_0x4f7a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f7a38) {
            ctx->pc = 0x4F7A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7A38u;
            // 0x4f7a3c: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7A4Cu;
            goto label_4f7a4c;
        }
    }
    ctx->pc = 0x4F7A40u;
label_4f7a40:
    // 0x4f7a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7a44: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x4F7A44u;
    {
        const bool branch_taken_0x4f7a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7a44) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7A4Cu;
label_4f7a4c:
    // 0x4f7a4c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F7A4Cu;
    {
        const bool branch_taken_0x4f7a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7a4c) {
            ctx->pc = 0x4F7A90u;
            goto label_4f7a90;
        }
    }
    ctx->pc = 0x4F7A54u;
    // 0x4f7a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7a58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F7A58u;
    {
        const bool branch_taken_0x4f7a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7a58) {
            ctx->pc = 0x4F7A78u;
            goto label_4f7a78;
        }
    }
    ctx->pc = 0x4F7A60u;
    // 0x4f7a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7a64: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x4F7A64u;
    {
        const bool branch_taken_0x4f7a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7a64) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7A6Cu;
    // 0x4f7a6c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x4F7A6Cu;
    {
        const bool branch_taken_0x4f7a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7a6c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7A74u;
    // 0x4f7a74: 0x0  nop
    ctx->pc = 0x4f7a74u;
    // NOP
label_4f7a78:
    // 0x4f7a78: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4f7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x4f7a7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4f7a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f7a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7a84: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x4F7A84u;
    {
        const bool branch_taken_0x4f7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7A84u;
            // 0x4f7a88: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7a84) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7A8Cu;
    // 0x4f7a8c: 0x0  nop
    ctx->pc = 0x4f7a8cu;
    // NOP
label_4f7a90:
    // 0x4f7a90: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4f7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x4f7a94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f7a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7a9c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x4F7A9Cu;
    {
        const bool branch_taken_0x4f7a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7A9Cu;
            // 0x4f7aa0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7a9c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7AA4u;
    // 0x4f7aa4: 0x0  nop
    ctx->pc = 0x4f7aa4u;
    // NOP
label_4f7aa8:
    // 0x4f7aa8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4f7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7aac: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x4f7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x4f7ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7ab4: 0xc4810a7c  lwc1        $f1, 0xA7C($a0)
    ctx->pc = 0x4f7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f7ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4f7ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7abc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7ABCu;
    {
        const bool branch_taken_0x4f7abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7abc) {
            ctx->pc = 0x4F7AD8u;
            goto label_4f7ad8;
        }
    }
    ctx->pc = 0x4F7AC4u;
    // 0x4f7ac4: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x4f7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x4f7ac8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f7ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4f7acc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7ACCu;
    {
        const bool branch_taken_0x4f7acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7acc) {
            ctx->pc = 0x4F7AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7ACCu;
            // 0x4f7ad0: 0x8c820d78  lw          $v0, 0xD78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7AE4u;
            goto label_4f7ae4;
        }
    }
    ctx->pc = 0x4F7AD4u;
    // 0x4f7ad4: 0x0  nop
    ctx->pc = 0x4f7ad4u;
    // NOP
label_4f7ad8:
    // 0x4f7ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7adc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x4F7ADCu;
    {
        const bool branch_taken_0x4f7adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7adc) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7AE4u;
label_4f7ae4:
    // 0x4f7ae4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4f7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7ae8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4f7aec: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4F7AECu;
    {
        const bool branch_taken_0x4f7aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f7aec) {
            ctx->pc = 0x4F7AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7AECu;
            // 0x4f7af0: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7B34u;
            goto label_4f7b34;
        }
    }
    ctx->pc = 0x4F7AF4u;
    // 0x4f7af4: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x4f7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x4f7af8: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4F7AF8u;
    {
        const bool branch_taken_0x4f7af8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f7af8) {
            ctx->pc = 0x4F7B30u;
            goto label_4f7b30;
        }
    }
    ctx->pc = 0x4F7B00u;
    // 0x4f7b00: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x4f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x4f7b04: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4f7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4f7b08: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4f7b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4f7b0c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7B0Cu;
    {
        const bool branch_taken_0x4f7b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f7b0c) {
            ctx->pc = 0x4F7B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7B0Cu;
            // 0x4f7b10: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7B20u;
            goto label_4f7b20;
        }
    }
    ctx->pc = 0x4F7B14u;
    // 0x4f7b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7b18: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4F7B18u;
    {
        const bool branch_taken_0x4f7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7b18) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7B20u;
label_4f7b20:
    // 0x4f7b20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f7b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7b28: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x4F7B28u;
    {
        const bool branch_taken_0x4f7b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7B28u;
            // 0x4f7b2c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7b28) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7B30u;
label_4f7b30:
    // 0x4f7b30: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x4f7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_4f7b34:
    // 0x4f7b34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F7B34u;
    {
        const bool branch_taken_0x4f7b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7b34) {
            ctx->pc = 0x4F7B78u;
            goto label_4f7b78;
        }
    }
    ctx->pc = 0x4F7B3Cu;
    // 0x4f7b3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7b40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F7B40u;
    {
        const bool branch_taken_0x4f7b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7b40) {
            ctx->pc = 0x4F7B60u;
            goto label_4f7b60;
        }
    }
    ctx->pc = 0x4F7B48u;
    // 0x4f7b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7b4c: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x4F7B4Cu;
    {
        const bool branch_taken_0x4f7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7b4c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7B54u;
    // 0x4f7b54: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x4F7B54u;
    {
        const bool branch_taken_0x4f7b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7b54) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7B5Cu;
    // 0x4f7b5c: 0x0  nop
    ctx->pc = 0x4f7b5cu;
    // NOP
label_4f7b60:
    // 0x4f7b60: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4f7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x4f7b64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4f7b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f7b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7b6c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x4F7B6Cu;
    {
        const bool branch_taken_0x4f7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7B6Cu;
            // 0x4f7b70: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7b6c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7B74u;
    // 0x4f7b74: 0x0  nop
    ctx->pc = 0x4f7b74u;
    // NOP
label_4f7b78:
    // 0x4f7b78: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x4f7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x4f7b7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4f7b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f7b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7b84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x4F7B84u;
    {
        const bool branch_taken_0x4f7b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7B84u;
            // 0x4f7b88: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7b84) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7B8Cu;
    // 0x4f7b8c: 0x0  nop
    ctx->pc = 0x4f7b8cu;
    // NOP
label_4f7b90:
    // 0x4f7b90: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4f7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7b94: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x4f7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x4f7b98: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x4f7b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x4f7b9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7B9Cu;
    {
        const bool branch_taken_0x4f7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7b9c) {
            ctx->pc = 0x4F7BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7B9Cu;
            // 0x4f7ba0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7BB0u;
            goto label_4f7bb0;
        }
    }
    ctx->pc = 0x4F7BA4u;
    // 0x4f7ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7ba8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x4F7BA8u;
    {
        const bool branch_taken_0x4f7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7ba8) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7BB0u;
label_4f7bb0:
    // 0x4f7bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f7bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7bb4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4F7BB4u;
    {
        const bool branch_taken_0x4f7bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7bb4) {
            ctx->pc = 0x4F7C18u;
            goto label_4f7c18;
        }
    }
    ctx->pc = 0x4F7BBCu;
    // 0x4f7bbc: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F7BBCu;
    SET_GPR_U32(ctx, 31, 0x4F7BC4u);
    ctx->pc = 0x4F7BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7BBCu;
            // 0x4f7bc0: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7BC4u; }
        if (ctx->pc != 0x4F7BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7BC4u; }
        if (ctx->pc != 0x4F7BC4u) { return; }
    }
    ctx->pc = 0x4F7BC4u;
label_4f7bc4:
    // 0x4f7bc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f7bc8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4F7BC8u;
    {
        const bool branch_taken_0x4f7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f7bc8) {
            ctx->pc = 0x4F7C18u;
            goto label_4f7c18;
        }
    }
    ctx->pc = 0x4F7BD0u;
    // 0x4f7bd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7bd4: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F7BD4u;
    SET_GPR_U32(ctx, 31, 0x4F7BDCu);
    ctx->pc = 0x4F7BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7BD4u;
            // 0x4f7bd8: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7BDCu; }
        if (ctx->pc != 0x4F7BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7BDCu; }
        if (ctx->pc != 0x4F7BDCu) { return; }
    }
    ctx->pc = 0x4F7BDCu;
label_4f7bdc:
    // 0x4f7bdc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4f7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7be0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f7be4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f7be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7be8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F7BE8u;
    {
        const bool branch_taken_0x4f7be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7be8) {
            ctx->pc = 0x4F7C18u;
            goto label_4f7c18;
        }
    }
    ctx->pc = 0x4F7BF0u;
    // 0x4f7bf0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4f7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f7bf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f7bf8: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x4f7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x4f7bfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f7bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7c00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7C00u;
    {
        const bool branch_taken_0x4f7c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c00) {
            ctx->pc = 0x4F7C18u;
            goto label_4f7c18;
        }
    }
    ctx->pc = 0x4F7C08u;
    // 0x4f7c08: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x4f7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
    // 0x4f7c0c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4f7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4f7c10: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7C10u;
    {
        const bool branch_taken_0x4f7c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f7c10) {
            ctx->pc = 0x4F7C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7C10u;
            // 0x4f7c14: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7C24u;
            goto label_4f7c24;
        }
    }
    ctx->pc = 0x4F7C18u;
label_4f7c18:
    // 0x4f7c18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7c1c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4F7C1Cu;
    {
        const bool branch_taken_0x4f7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c1c) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7C24u;
label_4f7c24:
    // 0x4f7c24: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7C24u;
    {
        const bool branch_taken_0x4f7c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c24) {
            ctx->pc = 0x4F7C50u;
            goto label_4f7c50;
        }
    }
    ctx->pc = 0x4F7C2Cu;
    // 0x4f7c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7c30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4F7C30u;
    {
        const bool branch_taken_0x4f7c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7c30) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7C38u;
    // 0x4f7c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7c3c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F7C3Cu;
    {
        const bool branch_taken_0x4f7c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f7c3c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7C44u;
    // 0x4f7c44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4F7C44u;
    {
        const bool branch_taken_0x4f7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c44) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7C4Cu;
    // 0x4f7c4c: 0x0  nop
    ctx->pc = 0x4f7c4cu;
    // NOP
label_4f7c50:
    // 0x4f7c50: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4f7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x4f7c54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f7c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7c5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4F7C5Cu;
    {
        const bool branch_taken_0x4f7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7C5Cu;
            // 0x4f7c60: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7c5c) {
            ctx->pc = 0x4F7C88u;
            goto label_4f7c88;
        }
    }
    ctx->pc = 0x4F7C64u;
    // 0x4f7c64: 0x0  nop
    ctx->pc = 0x4f7c64u;
    // NOP
label_4f7c68:
    // 0x4f7c68: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x4f7c6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4f7c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4f7c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7c74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4F7C74u;
    {
        const bool branch_taken_0x4f7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c74) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7C7Cu;
label_4f7c7c:
    // 0x4f7c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f7c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7c80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7C80u;
    {
        const bool branch_taken_0x4f7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7c80) {
            ctx->pc = 0x4F7C9Cu;
            goto label_4f7c9c;
        }
    }
    ctx->pc = 0x4F7C88u;
label_4f7c88:
    // 0x4f7c88: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x4f7c88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
label_4f7c8c:
    // 0x4f7c8c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4f7c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f7c90: 0x14a0fea6  bnez        $a1, . + 4 + (-0x15A << 2)
    ctx->pc = 0x4F7C90u;
    {
        const bool branch_taken_0x4f7c90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F7C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7C90u;
            // 0x4f7c94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7c90) {
            ctx->pc = 0x4F772Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f772c;
        }
    }
    ctx->pc = 0x4F7C98u;
label_4f7c98:
    // 0x4f7c98: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x4f7c98u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_4f7c9c:
    // 0x4f7c9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f7c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f7ca0:
    // 0x4f7ca0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f7ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4f7ca4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f7ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f7ca8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f7ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7cac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f7cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F7CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F7CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7CB0u;
            // 0x4f7cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F7CB8u;
    // 0x4f7cb8: 0x0  nop
    ctx->pc = 0x4f7cb8u;
    // NOP
    // 0x4f7cbc: 0x0  nop
    ctx->pc = 0x4f7cbcu;
    // NOP
}
