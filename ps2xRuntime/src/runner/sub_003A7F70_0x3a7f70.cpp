#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7F70
// Address: 0x3a7f70 - 0x3a8270
void sub_003A7F70_0x3a7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7F70_0x3a7f70");
#endif

    switch (ctx->pc) {
        case 0x3a7fe0u: goto label_3a7fe0;
        case 0x3a8200u: goto label_3a8200;
        case 0x3a8248u: goto label_3a8248;
        case 0x3a8254u: goto label_3a8254;
        default: break;
    }

    ctx->pc = 0x3a7f70u;

    // 0x3a7f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a7f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a7f74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a7f78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a7f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a7f7c: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x3a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x3a7f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a7f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7f8c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3a7f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a7f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a7f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a7f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a7f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3a7f9c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3a7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x3a7fa0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7fa4: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3a7fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7fa8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3a7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3a7fac: 0xa086000d  sb          $a2, 0xD($a0)
    ctx->pc = 0x3a7facu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a7fb0: 0xc441a2a8  lwc1        $f1, -0x5D58($v0)
    ctx->pc = 0x3a7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7fb4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3a7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3a7fb8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3a7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3a7fbc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a7fc0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3a7fc4: 0xc440a2ac  lwc1        $f0, -0x5D54($v0)
    ctx->pc = 0x3a7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a7fcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7fd0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3a7fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3a7fd4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a7fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3a7fd8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7FD8u;
    {
        const bool branch_taken_0x3a7fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7FD8u;
            // 0x3a7fdc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fd8) {
            ctx->pc = 0x3A7FFCu;
            goto label_3a7ffc;
        }
    }
    ctx->pc = 0x3A7FE0u;
label_3a7fe0:
    // 0x3a7fe0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a7fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7fe4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a7fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7fec: 0x0  nop
    ctx->pc = 0x3a7fecu;
    // NOP
    // 0x3a7ff0: 0x0  nop
    ctx->pc = 0x3a7ff0u;
    // NOP
    // 0x3a7ff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A7FF4u;
    {
        const bool branch_taken_0x3a7ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7ff4) {
            ctx->pc = 0x3A7FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a7fe0;
        }
    }
    ctx->pc = 0x3A7FFCu;
label_3a7ffc:
    // 0x3a7ffc: 0x8ca30110  lw          $v1, 0x110($a1)
    ctx->pc = 0x3a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x3a8000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a8000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a8004: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A8004u;
    {
        const bool branch_taken_0x3a8004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8004) {
            ctx->pc = 0x3A8008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8004u;
            // 0x3a8008: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8164u;
            goto label_3a8164;
        }
    }
    ctx->pc = 0x3A800Cu;
    // 0x3a800c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a8010: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3A8010u;
    {
        const bool branch_taken_0x3a8010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8010) {
            ctx->pc = 0x3A8160u;
            goto label_3a8160;
        }
    }
    ctx->pc = 0x3A8018u;
    // 0x3a8018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a801c: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A801Cu;
    {
        const bool branch_taken_0x3a801c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a801c) {
            ctx->pc = 0x3A8020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A801Cu;
            // 0x3a8020: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A80D0u;
            goto label_3a80d0;
        }
    }
    ctx->pc = 0x3A8024u;
    // 0x3a8024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8028: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8028u;
    {
        const bool branch_taken_0x3a8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8028) {
            ctx->pc = 0x3A802Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8028u;
            // 0x3a802c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8038u;
            goto label_3a8038;
        }
    }
    ctx->pc = 0x3A8030u;
    // 0x3a8030: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3A8030u;
    {
        const bool branch_taken_0x3a8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8030u;
            // 0x3a8034: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8030) {
            ctx->pc = 0x3A81ECu;
            goto label_3a81ec;
        }
    }
    ctx->pc = 0x3A8038u;
label_3a8038:
    // 0x3a8038: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a803c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a8040: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3a8040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3a8044: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x3a8044u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3a8048: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x3a8048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a804c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a8050: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x3a8050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x3a8054: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3a8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a8058: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x3a8058u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a805c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3a805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3a8060: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x3a8064: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8064u;
    {
        const bool branch_taken_0x3a8064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8064) {
            ctx->pc = 0x3A8074u;
            goto label_3a8074;
        }
    }
    ctx->pc = 0x3A806Cu;
    // 0x3a806c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A806Cu;
    {
        const bool branch_taken_0x3a806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A806Cu;
            // 0x3a8070: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a806c) {
            ctx->pc = 0x3A809Cu;
            goto label_3a809c;
        }
    }
    ctx->pc = 0x3A8074u;
label_3a8074:
    // 0x3a8074: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a8074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a8078: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a8078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a807c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a8080: 0x24637770  addiu       $v1, $v1, 0x7770
    ctx->pc = 0x3a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30576));
    // 0x3a8084: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a8088: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a8088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a808c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a8090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a8090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a8094: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8094u;
    {
        const bool branch_taken_0x3a8094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8094u;
            // 0x3a8098: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8094) {
            ctx->pc = 0x3A80BCu;
            goto label_3a80bc;
        }
    }
    ctx->pc = 0x3A809Cu;
label_3a809c:
    // 0x3a809c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a809cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a80a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a80a4: 0x24637770  addiu       $v1, $v1, 0x7770
    ctx->pc = 0x3a80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30576));
    // 0x3a80a8: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a80ac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a80b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a80b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a80b8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3a80b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a80bc:
    // 0x3a80bc: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x3a80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3a80c0: 0x2402fff4  addiu       $v0, $zero, -0xC
    ctx->pc = 0x3a80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x3a80c4: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x3a80c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a80c8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3A80C8u;
    {
        const bool branch_taken_0x3a80c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A80CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A80C8u;
            // 0x3a80cc: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a80c8) {
            ctx->pc = 0x3A81E8u;
            goto label_3a81e8;
        }
    }
    ctx->pc = 0x3A80D0u;
label_3a80d0:
    // 0x3a80d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a80d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a80d8: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3a80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3a80dc: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x3a80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3a80e0: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x3a80e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a80e4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a80e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a80e8: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x3a80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3a80ec: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x3a80ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a80f0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3a80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3a80f4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3a80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x3a80f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A80F8u;
    {
        const bool branch_taken_0x3a80f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a80f8) {
            ctx->pc = 0x3A8108u;
            goto label_3a8108;
        }
    }
    ctx->pc = 0x3A8100u;
    // 0x3a8100: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A8100u;
    {
        const bool branch_taken_0x3a8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8100u;
            // 0x3a8104: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8100) {
            ctx->pc = 0x3A8130u;
            goto label_3a8130;
        }
    }
    ctx->pc = 0x3A8108u;
label_3a8108:
    // 0x3a8108: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a8108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a810c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a810cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a8110: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a8114: 0x24637950  addiu       $v1, $v1, 0x7950
    ctx->pc = 0x3a8114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31056));
    // 0x3a8118: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a8118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a811c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a8120: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a8124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a8124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a8128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8128u;
    {
        const bool branch_taken_0x3a8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8128u;
            // 0x3a812c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8128) {
            ctx->pc = 0x3A8150u;
            goto label_3a8150;
        }
    }
    ctx->pc = 0x3A8130u;
label_3a8130:
    // 0x3a8130: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a8134: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a8138: 0x24637950  addiu       $v1, $v1, 0x7950
    ctx->pc = 0x3a8138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31056));
    // 0x3a813c: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a8140: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a8140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a8144: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a8148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a8148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a814c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3a814cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a8150:
    // 0x3a8150: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x3a8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3a8154: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3a8154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8158: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A8158u;
    {
        const bool branch_taken_0x3a8158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8158u;
            // 0x3a815c: 0xa6200010  sh          $zero, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8158) {
            ctx->pc = 0x3A81E8u;
            goto label_3a81e8;
        }
    }
    ctx->pc = 0x3A8160u;
label_3a8160:
    // 0x3a8160: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a8160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a8164:
    // 0x3a8164: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a8168: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a8168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a816c: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x3a816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3a8170: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x3a8170u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a8174: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a8174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a8178: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x3a8178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3a817c: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x3a817cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a8180: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3a8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3a8184: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3a8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x3a8188: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8188u;
    {
        const bool branch_taken_0x3a8188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8188) {
            ctx->pc = 0x3A8198u;
            goto label_3a8198;
        }
    }
    ctx->pc = 0x3A8190u;
    // 0x3a8190: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A8190u;
    {
        const bool branch_taken_0x3a8190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8190u;
            // 0x3a8194: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8190) {
            ctx->pc = 0x3A81C0u;
            goto label_3a81c0;
        }
    }
    ctx->pc = 0x3A8198u;
label_3a8198:
    // 0x3a8198: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a8198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a819c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a81a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a81a4: 0x24637b30  addiu       $v1, $v1, 0x7B30
    ctx->pc = 0x3a81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31536));
    // 0x3a81a8: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a81ac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a81b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a81b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a81b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A81B8u;
    {
        const bool branch_taken_0x3a81b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A81B8u;
            // 0x3a81bc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81b8) {
            ctx->pc = 0x3A81E0u;
            goto label_3a81e0;
        }
    }
    ctx->pc = 0x3A81C0u;
label_3a81c0:
    // 0x3a81c0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a81c4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3a81c8: 0x24637b30  addiu       $v1, $v1, 0x7B30
    ctx->pc = 0x3a81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31536));
    // 0x3a81cc: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x3a81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3a81d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a81d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a81d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a81dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3a81dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a81e0:
    // 0x3a81e0: 0xa620000e  sh          $zero, 0xE($s1)
    ctx->pc = 0x3a81e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a81e4: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x3a81e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
label_3a81e8:
    // 0x3a81e8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3a81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a81ec:
    // 0x3a81ec: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3a81ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3a81f0: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x3a81f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3a81f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3a81f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3a81f8: 0xc04f3f4  jal         func_13CFD0
    ctx->pc = 0x3A81F8u;
    SET_GPR_U32(ctx, 31, 0x3A8200u);
    ctx->pc = 0x3A81FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A81F8u;
            // 0x3a81fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8200u; }
        if (ctx->pc != 0x3A8200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8200u; }
        if (ctx->pc != 0x3A8200u) { return; }
    }
    ctx->pc = 0x3A8200u;
label_3a8200:
    // 0x3a8200: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3a8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x3a8204: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3a8204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3a8208: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3a8208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x3a820c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3a820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a8210: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3a8210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a8214: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3a8214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a8218: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3a8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a821c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a821cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a8220: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3a8220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3a8224: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3a8224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3a8228: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a822c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a822cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a8230: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a8234: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a8234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3a8238: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3a8238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3a823c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3a823cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3a8240: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x3A8240u;
    SET_GPR_U32(ctx, 31, 0x3A8248u);
    ctx->pc = 0x3A8244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8240u;
            // 0x3a8244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8248u; }
        if (ctx->pc != 0x3A8248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8248u; }
        if (ctx->pc != 0x3A8248u) { return; }
    }
    ctx->pc = 0x3A8248u;
label_3a8248:
    // 0x3a8248: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3a8248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3a824c: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x3A824Cu;
    SET_GPR_U32(ctx, 31, 0x3A8254u);
    ctx->pc = 0x3A8250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A824Cu;
            // 0x3a8250: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8254u; }
        if (ctx->pc != 0x3A8254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8254u; }
        if (ctx->pc != 0x3A8254u) { return; }
    }
    ctx->pc = 0x3A8254u;
label_3a8254:
    // 0x3a8254: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a8254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a8258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a825c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a825cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a8260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a8264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8268: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8268u;
            // 0x3a826c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A8270u;
}
