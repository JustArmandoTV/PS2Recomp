#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5780
// Address: 0x2a5780 - 0x2a5a60
void sub_002A5780_0x2a5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5780_0x2a5780");
#endif

    switch (ctx->pc) {
        case 0x2a5810u: goto label_2a5810;
        case 0x2a5a4cu: goto label_2a5a4c;
        default: break;
    }

    ctx->pc = 0x2a5780u;

    // 0x2a5780: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a5780u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5784: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2a5784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a5788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a5788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a578c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2a5790: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2a5794: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a5798: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a579c: 0x8c670050  lw          $a3, 0x50($v1)
    ctx->pc = 0x2a579cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2a57a0: 0xc4810290  lwc1        $f1, 0x290($a0)
    ctx->pc = 0x2a57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a57a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a57a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a57a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a57a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a57ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a57acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a57b0: 0x0  nop
    ctx->pc = 0x2a57b0u;
    // NOP
    // 0x2a57b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a57b8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a57bc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A57BCu;
    {
        const bool branch_taken_0x2a57bc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a57bc) {
            ctx->pc = 0x2A57C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57BCu;
            // 0x2a57c0: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A57D0u;
            goto label_2a57d0;
        }
    }
    ctx->pc = 0x2A57C4u;
    // 0x2a57c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a57c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a57c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A57C8u;
    {
        const bool branch_taken_0x2a57c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A57CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57C8u;
            // 0x2a57cc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57c8) {
            ctx->pc = 0x2A57E8u;
            goto label_2a57e8;
        }
    }
    ctx->pc = 0x2A57D0u;
label_2a57d0:
    // 0x2a57d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a57d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a57d4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a57d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a57d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a57dc: 0x0  nop
    ctx->pc = 0x2a57dcu;
    // NOP
    // 0x2a57e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a57e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a57e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a57e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a57e8:
    // 0x2a57e8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a57e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a57ec: 0x0  nop
    ctx->pc = 0x2a57ecu;
    // NOP
    // 0x2a57f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a57f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a57f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a57f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a57f8: 0xc480029c  lwc1        $f0, 0x29C($a0)
    ctx->pc = 0x2a57f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a57fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a5800: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a5800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a5804: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a5804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a5808: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5808u;
            // 0x2a580c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5810u;
label_2a5810:
    // 0x2a5810: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a5810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5814: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a5814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2a5818: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2a5818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a581c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2a581cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2a5820: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a5820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5824: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a5824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a5828: 0x8c660050  lw          $a2, 0x50($v1)
    ctx->pc = 0x2a5828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2a582c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a5830: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a5830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a5834: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5834u;
    {
        const bool branch_taken_0x2a5834 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5834) {
            ctx->pc = 0x2A5838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5834u;
            // 0x2a5838: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5848u;
            goto label_2a5848;
        }
    }
    ctx->pc = 0x2A583Cu;
    // 0x2a583c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a583cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5840u;
    {
        const bool branch_taken_0x2a5840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5840u;
            // 0x2a5844: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5840) {
            ctx->pc = 0x2A5860u;
            goto label_2a5860;
        }
    }
    ctx->pc = 0x2A5848u;
label_2a5848:
    // 0x2a5848: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a5848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a584c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a584cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a5850: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5850u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5854: 0x0  nop
    ctx->pc = 0x2a5854u;
    // NOP
    // 0x2a5858: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a5858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a585c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a585cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a5860:
    // 0x2a5860: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5864: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5864u;
    {
        const bool branch_taken_0x2a5864 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5864) {
            ctx->pc = 0x2A5868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5864u;
            // 0x2a5868: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5878u;
            goto label_2a5878;
        }
    }
    ctx->pc = 0x2A586Cu;
    // 0x2a586c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a586cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5870u;
    {
        const bool branch_taken_0x2a5870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5870u;
            // 0x2a5874: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5870) {
            ctx->pc = 0x2A5890u;
            goto label_2a5890;
        }
    }
    ctx->pc = 0x2A5878u;
label_2a5878:
    // 0x2a5878: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a5878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a587c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a587cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a5880: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5880u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5884: 0x0  nop
    ctx->pc = 0x2a5884u;
    // NOP
    // 0x2a5888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a5888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a588c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a588cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a5890:
    // 0x2a5890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5894: 0xe4400290  swc1        $f0, 0x290($v0)
    ctx->pc = 0x2a5894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 656), bits); }
    // 0x2a5898: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a589c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A589Cu;
    {
        const bool branch_taken_0x2a589c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2a589c) {
            ctx->pc = 0x2A58A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A589Cu;
            // 0x2a58a0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A58B0u;
            goto label_2a58b0;
        }
    }
    ctx->pc = 0x2A58A4u;
    // 0x2a58a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a58a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A58A8u;
    {
        const bool branch_taken_0x2a58a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A58A8u;
            // 0x2a58ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58a8) {
            ctx->pc = 0x2A58C8u;
            goto label_2a58c8;
        }
    }
    ctx->pc = 0x2A58B0u;
label_2a58b0:
    // 0x2a58b0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2a58b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a58b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a58b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a58b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a58b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58bc: 0x0  nop
    ctx->pc = 0x2a58bcu;
    // NOP
    // 0x2a58c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a58c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a58c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a58c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a58c8:
    // 0x2a58c8: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2a58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2a58cc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A58CCu;
    {
        const bool branch_taken_0x2a58cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a58cc) {
            ctx->pc = 0x2A58D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A58CCu;
            // 0x2a58d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A58E0u;
            goto label_2a58e0;
        }
    }
    ctx->pc = 0x2A58D4u;
    // 0x2a58d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a58d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A58D8u;
    {
        const bool branch_taken_0x2a58d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A58DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A58D8u;
            // 0x2a58dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58d8) {
            ctx->pc = 0x2A58F8u;
            goto label_2a58f8;
        }
    }
    ctx->pc = 0x2A58E0u;
label_2a58e0:
    // 0x2a58e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a58e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a58e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a58e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a58e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a58e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58ec: 0x0  nop
    ctx->pc = 0x2a58ecu;
    // NOP
    // 0x2a58f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a58f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a58f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a58f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a58f8:
    // 0x2a58f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a58f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a58fc: 0xe4400294  swc1        $f0, 0x294($v0)
    ctx->pc = 0x2a58fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 660), bits); }
    // 0x2a5900: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a5904: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5904u;
    {
        const bool branch_taken_0x2a5904 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5904) {
            ctx->pc = 0x2A5908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5904u;
            // 0x2a5908: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5918u;
            goto label_2a5918;
        }
    }
    ctx->pc = 0x2A590Cu;
    // 0x2a590c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a590cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5910u;
    {
        const bool branch_taken_0x2a5910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5910u;
            // 0x2a5914: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5910) {
            ctx->pc = 0x2A5930u;
            goto label_2a5930;
        }
    }
    ctx->pc = 0x2A5918u;
label_2a5918:
    // 0x2a5918: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a5918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a591c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a591cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a5920: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5924: 0x0  nop
    ctx->pc = 0x2a5924u;
    // NOP
    // 0x2a5928: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a5928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a592c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a592cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a5930:
    // 0x2a5930: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2a5930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a5934: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a5938: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5938u;
    {
        const bool branch_taken_0x2a5938 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5938) {
            ctx->pc = 0x2A593Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5938u;
            // 0x2a593c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A594Cu;
            goto label_2a594c;
        }
    }
    ctx->pc = 0x2A5940u;
    // 0x2a5940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a5940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5944u;
    {
        const bool branch_taken_0x2a5944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5944u;
            // 0x2a5948: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5944) {
            ctx->pc = 0x2A5964u;
            goto label_2a5964;
        }
    }
    ctx->pc = 0x2A594Cu;
label_2a594c:
    // 0x2a594c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a594cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a5950: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a5950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a5954: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5958: 0x0  nop
    ctx->pc = 0x2a5958u;
    // NOP
    // 0x2a595c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a595cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a5960: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a5960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a5964:
    // 0x2a5964: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a5964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a5968: 0xe440029c  swc1        $f0, 0x29C($v0)
    ctx->pc = 0x2a5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 668), bits); }
    // 0x2a596c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a5970: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5970u;
    {
        const bool branch_taken_0x2a5970 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2a5970) {
            ctx->pc = 0x2A5974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5970u;
            // 0x2a5974: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5984u;
            goto label_2a5984;
        }
    }
    ctx->pc = 0x2A5978u;
    // 0x2a5978: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5978u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a597c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A597Cu;
    {
        const bool branch_taken_0x2a597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A597Cu;
            // 0x2a5980: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a597c) {
            ctx->pc = 0x2A599Cu;
            goto label_2a599c;
        }
    }
    ctx->pc = 0x2A5984u;
label_2a5984:
    // 0x2a5984: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2a5984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a5988: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a5988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a598c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a598cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5990: 0x0  nop
    ctx->pc = 0x2a5990u;
    // NOP
    // 0x2a5994: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a5994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a5998: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a5998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a599c:
    // 0x2a599c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2a59a0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A59A0u;
    {
        const bool branch_taken_0x2a59a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a59a0) {
            ctx->pc = 0x2A59A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59A0u;
            // 0x2a59a4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A59B4u;
            goto label_2a59b4;
        }
    }
    ctx->pc = 0x2A59A8u;
    // 0x2a59a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a59a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a59ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A59ACu;
    {
        const bool branch_taken_0x2a59ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59ACu;
            // 0x2a59b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59ac) {
            ctx->pc = 0x2A59CCu;
            goto label_2a59cc;
        }
    }
    ctx->pc = 0x2A59B4u;
label_2a59b4:
    // 0x2a59b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a59b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a59b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a59b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a59bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a59bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a59c0: 0x0  nop
    ctx->pc = 0x2a59c0u;
    // NOP
    // 0x2a59c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a59c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a59c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a59c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a59cc:
    // 0x2a59cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a59ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a59d0: 0xe4400298  swc1        $f0, 0x298($v0)
    ctx->pc = 0x2a59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 664), bits); }
    // 0x2a59d4: 0xc44c0290  lwc1        $f12, 0x290($v0)
    ctx->pc = 0x2a59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a59d8: 0xc44d0294  lwc1        $f13, 0x294($v0)
    ctx->pc = 0x2a59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a59dc: 0xc44e029c  lwc1        $f14, 0x29C($v0)
    ctx->pc = 0x2a59dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a59e0: 0xc44f0298  lwc1        $f15, 0x298($v0)
    ctx->pc = 0x2a59e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a59e4: 0xc450019c  lwc1        $f16, 0x19C($v0)
    ctx->pc = 0x2a59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a59e8: 0xc45101a0  lwc1        $f17, 0x1A0($v0)
    ctx->pc = 0x2a59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a59ec: 0x804f468  j           func_13D1A0
    ctx->pc = 0x2A59ECu;
    ctx->pc = 0x2A59F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59ECu;
            // 0x2a59f0: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1A0u;
    if (runtime->hasFunction(0x13D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13D1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0013D1A0_0x13d1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A59F4u;
    // 0x2a59f4: 0x0  nop
    ctx->pc = 0x2a59f4u;
    // NOP
    // 0x2a59f8: 0x0  nop
    ctx->pc = 0x2a59f8u;
    // NOP
    // 0x2a59fc: 0x0  nop
    ctx->pc = 0x2a59fcu;
    // NOP
    // 0x2a5a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a10: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A5A10u;
    {
        const bool branch_taken_0x2a5a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5a10) {
            ctx->pc = 0x2A5A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A10u;
            // 0x2a5a14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5A50u;
            goto label_2a5a50;
        }
    }
    ctx->pc = 0x2A5A18u;
    // 0x2a5a18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a5a1c: 0x2442fb30  addiu       $v0, $v0, -0x4D0
    ctx->pc = 0x2a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x2a5a20: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5A20u;
    {
        const bool branch_taken_0x2a5a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A20u;
            // 0x2a5a24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a20) {
            ctx->pc = 0x2A5A34u;
            goto label_2a5a34;
        }
    }
    ctx->pc = 0x2A5A28u;
    // 0x2a5a28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a5a2c: 0x2442fb48  addiu       $v0, $v0, -0x4B8
    ctx->pc = 0x2a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966088));
    // 0x2a5a30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a5a34:
    // 0x2a5a34: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a5a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a5a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a5a3c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5A3Cu;
    {
        const bool branch_taken_0x2a5a3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a5a3c) {
            ctx->pc = 0x2A5A4Cu;
            goto label_2a5a4c;
        }
    }
    ctx->pc = 0x2A5A44u;
    // 0x2a5a44: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A5A44u;
    SET_GPR_U32(ctx, 31, 0x2A5A4Cu);
    ctx->pc = 0x2A5A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A44u;
            // 0x2a5a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A4Cu; }
        if (ctx->pc != 0x2A5A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A4Cu; }
        if (ctx->pc != 0x2A5A4Cu) { return; }
    }
    ctx->pc = 0x2A5A4Cu;
label_2a5a4c:
    // 0x2a5a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a5a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a50:
    // 0x2a5a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5a58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A58u;
            // 0x2a5a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5A60u;
}
