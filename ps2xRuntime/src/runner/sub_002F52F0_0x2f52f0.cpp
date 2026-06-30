#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F52F0
// Address: 0x2f52f0 - 0x2f5510
void sub_002F52F0_0x2f52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52F0_0x2f52f0");
#endif

    switch (ctx->pc) {
        case 0x2f536cu: goto label_2f536c;
        case 0x2f5388u: goto label_2f5388;
        case 0x2f540cu: goto label_2f540c;
        default: break;
    }

    ctx->pc = 0x2f52f0u;

    // 0x2f52f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f52f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f52f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f52f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2f52fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f52fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f5300: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f5304: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f5308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f530c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f5310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5318: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f531c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F531Cu;
    {
        const bool branch_taken_0x2f531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F531Cu;
            // 0x2f5320: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f531c) {
            ctx->pc = 0x2F532Cu;
            goto label_2f532c;
        }
    }
    ctx->pc = 0x2F5324u;
    // 0x2f5324: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2F5324u;
    {
        const bool branch_taken_0x2f5324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5324u;
            // 0x2f5328: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5324) {
            ctx->pc = 0x2F54E4u;
            goto label_2f54e4;
        }
    }
    ctx->pc = 0x2F532Cu;
label_2f532c:
    // 0x2f532c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2f532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5330: 0x94570000  lhu         $s7, 0x0($v0)
    ctx->pc = 0x2f5330u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5334: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2f5334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5338: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2f5338u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f533c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2f533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5340: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x2f5340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2f5344: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f5348: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x2f5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2f534c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f534cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5350: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f5358: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x2f5358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2f535c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2f535cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2f5360: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2f5360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2f5364: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5364u;
    {
        const bool branch_taken_0x2f5364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5364u;
            // 0x2f5368: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5364) {
            ctx->pc = 0x2F5388u;
            goto label_2f5388;
        }
    }
    ctx->pc = 0x2F536Cu;
label_2f536c:
    // 0x2f536c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f536cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5378: 0x0  nop
    ctx->pc = 0x2f5378u;
    // NOP
    // 0x2f537c: 0x0  nop
    ctx->pc = 0x2f537cu;
    // NOP
    // 0x2f5380: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F5380u;
    {
        const bool branch_taken_0x2f5380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5380) {
            ctx->pc = 0x2F536Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f536c;
        }
    }
    ctx->pc = 0x2F5388u;
label_2f5388:
    // 0x2f5388: 0x82a3000d  lb          $v1, 0xD($s5)
    ctx->pc = 0x2f5388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
    // 0x2f538c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5390: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F5390u;
    {
        const bool branch_taken_0x2f5390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5390) {
            ctx->pc = 0x2F5394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5390u;
            // 0x2f5394: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5400u;
            goto label_2f5400;
        }
    }
    ctx->pc = 0x2F5398u;
    // 0x2f5398: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2f5398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f539c: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x2f539cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f53a0: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x2F53A0u;
    {
        const bool branch_taken_0x2f53a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53a0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53A8u;
    // 0x2f53a8: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x2f53a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x2f53ac: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x2f53acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f53b0: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F53B0u;
    {
        const bool branch_taken_0x2f53b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53b0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53B8u;
    // 0x2f53b8: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x2f53b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2f53bc: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2f53bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f53c0: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F53C0u;
    {
        const bool branch_taken_0x2f53c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53c0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53C8u;
    // 0x2f53c8: 0x86a20008  lh          $v0, 0x8($s5)
    ctx->pc = 0x2f53c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2f53cc: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2f53ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f53d0: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F53D0u;
    {
        const bool branch_taken_0x2f53d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53d0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53D8u;
    // 0x2f53d8: 0x86a20004  lh          $v0, 0x4($s5)
    ctx->pc = 0x2f53d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2f53dc: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x2f53dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f53e0: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F53E0u;
    {
        const bool branch_taken_0x2f53e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53e0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53E8u;
    // 0x2f53e8: 0x86a2000a  lh          $v0, 0xA($s5)
    ctx->pc = 0x2f53e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x2f53ec: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2f53ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2f53f0: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F53F0u;
    {
        const bool branch_taken_0x2f53f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53f0) {
            ctx->pc = 0x2F54D0u;
            goto label_2f54d0;
        }
    }
    ctx->pc = 0x2F53F8u;
    // 0x2f53f8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2F53F8u;
    {
        const bool branch_taken_0x2f53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F53F8u;
            // 0x2f53fc: 0x92a2000c  lbu         $v0, 0xC($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53f8) {
            ctx->pc = 0x2F54E4u;
            goto label_2f54e4;
        }
    }
    ctx->pc = 0x2F5400u;
label_2f5400:
    // 0x2f5400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f5400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5404: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2F5404u;
    SET_GPR_U32(ctx, 31, 0x2F540Cu);
    ctx->pc = 0x2F5408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5404u;
            // 0x2f5408: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F540Cu; }
        if (ctx->pc != 0x2F540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F540Cu; }
        if (ctx->pc != 0x2F540Cu) { return; }
    }
    ctx->pc = 0x2F540Cu;
label_2f540c:
    // 0x2f540c: 0x86620040  lh          $v0, 0x40($s3)
    ctx->pc = 0x2f540cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2f5410: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2f5410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5418: 0x0  nop
    ctx->pc = 0x2f5418u;
    // NOP
    // 0x2f541c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f541cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5420: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f5420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5424: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x2F5424u;
    {
        const bool branch_taken_0x2f5424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5424) {
            ctx->pc = 0x2F5428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5424u;
            // 0x2f5428: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F54CCu;
            goto label_2f54cc;
        }
    }
    ctx->pc = 0x2F542Cu;
    // 0x2f542c: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x2f542cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x2f5430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5434: 0x0  nop
    ctx->pc = 0x2f5434u;
    // NOP
    // 0x2f5438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f543c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f543cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5440: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2F5440u;
    {
        const bool branch_taken_0x2f5440 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5440) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F5448u;
    // 0x2f5448: 0x86620042  lh          $v0, 0x42($s3)
    ctx->pc = 0x2f5448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x2f544c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2f544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5454: 0x0  nop
    ctx->pc = 0x2f5454u;
    // NOP
    // 0x2f5458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f545c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f545cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5460: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5460u;
    {
        const bool branch_taken_0x2f5460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5460) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F5468u;
    // 0x2f5468: 0x86620048  lh          $v0, 0x48($s3)
    ctx->pc = 0x2f5468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2f546c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5470: 0x0  nop
    ctx->pc = 0x2f5470u;
    // NOP
    // 0x2f5474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5478: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f547c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2F547Cu;
    {
        const bool branch_taken_0x2f547c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f547c) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F5484u;
    // 0x2f5484: 0x86620044  lh          $v0, 0x44($s3)
    ctx->pc = 0x2f5484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2f5488: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2f5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5490: 0x0  nop
    ctx->pc = 0x2f5490u;
    // NOP
    // 0x2f5494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5498: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f5498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f549c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2F549Cu;
    {
        const bool branch_taken_0x2f549c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f549c) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F54A4u;
    // 0x2f54a4: 0x8662004a  lh          $v0, 0x4A($s3)
    ctx->pc = 0x2f54a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
    // 0x2f54a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f54a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54ac: 0x0  nop
    ctx->pc = 0x2f54acu;
    // NOP
    // 0x2f54b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f54b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f54b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f54b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f54b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F54B8u;
    {
        const bool branch_taken_0x2f54b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f54b8) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F54C0u;
    // 0x2f54c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F54C0u;
    {
        const bool branch_taken_0x2f54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F54C0u;
            // 0x2f54c4: 0x92a2000c  lbu         $v0, 0xC($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54c0) {
            ctx->pc = 0x2F54E4u;
            goto label_2f54e4;
        }
    }
    ctx->pc = 0x2F54C8u;
label_2f54c8:
    // 0x2f54c8: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x2f54c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_2f54cc:
    // 0x2f54cc: 0x0  nop
    ctx->pc = 0x2f54ccu;
    // NOP
label_2f54d0:
    // 0x2f54d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f54d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f54d4: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x2f54d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2f54d8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2F54D8u;
    {
        const bool branch_taken_0x2f54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F54DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F54D8u;
            // 0x2f54dc: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54d8) {
            ctx->pc = 0x2F5388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5388;
        }
    }
    ctx->pc = 0x2F54E0u;
    // 0x2f54e0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2f54e4:
    // 0x2f54e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f54e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f54e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f54e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f54ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f54ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f54f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f54f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f54f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f54f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f54f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f54f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f54fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f54fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5508: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5508u;
            // 0x2f550c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5510u;
}
