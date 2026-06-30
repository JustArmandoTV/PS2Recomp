#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162928
// Address: 0x162928 - 0x162bc0
void sub_00162928_0x162928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162928_0x162928");
#endif

    switch (ctx->pc) {
        case 0x162928u: goto label_162928;
        case 0x16292cu: goto label_16292c;
        case 0x162930u: goto label_162930;
        case 0x162934u: goto label_162934;
        case 0x162938u: goto label_162938;
        case 0x16293cu: goto label_16293c;
        case 0x162940u: goto label_162940;
        case 0x162944u: goto label_162944;
        case 0x162948u: goto label_162948;
        case 0x16294cu: goto label_16294c;
        case 0x162950u: goto label_162950;
        case 0x162954u: goto label_162954;
        case 0x162958u: goto label_162958;
        case 0x16295cu: goto label_16295c;
        case 0x162960u: goto label_162960;
        case 0x162964u: goto label_162964;
        case 0x162968u: goto label_162968;
        case 0x16296cu: goto label_16296c;
        case 0x162970u: goto label_162970;
        case 0x162974u: goto label_162974;
        case 0x162978u: goto label_162978;
        case 0x16297cu: goto label_16297c;
        case 0x162980u: goto label_162980;
        case 0x162984u: goto label_162984;
        case 0x162988u: goto label_162988;
        case 0x16298cu: goto label_16298c;
        case 0x162990u: goto label_162990;
        case 0x162994u: goto label_162994;
        case 0x162998u: goto label_162998;
        case 0x16299cu: goto label_16299c;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629a8u: goto label_1629a8;
        case 0x1629acu: goto label_1629ac;
        case 0x1629b0u: goto label_1629b0;
        case 0x1629b4u: goto label_1629b4;
        case 0x1629b8u: goto label_1629b8;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629c0u: goto label_1629c0;
        case 0x1629c4u: goto label_1629c4;
        case 0x1629c8u: goto label_1629c8;
        case 0x1629ccu: goto label_1629cc;
        case 0x1629d0u: goto label_1629d0;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629d8u: goto label_1629d8;
        case 0x1629dcu: goto label_1629dc;
        case 0x1629e0u: goto label_1629e0;
        case 0x1629e4u: goto label_1629e4;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f0u: goto label_1629f0;
        case 0x1629f4u: goto label_1629f4;
        case 0x1629f8u: goto label_1629f8;
        case 0x1629fcu: goto label_1629fc;
        case 0x162a00u: goto label_162a00;
        case 0x162a04u: goto label_162a04;
        case 0x162a08u: goto label_162a08;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a10u: goto label_162a10;
        case 0x162a14u: goto label_162a14;
        case 0x162a18u: goto label_162a18;
        case 0x162a1cu: goto label_162a1c;
        case 0x162a20u: goto label_162a20;
        case 0x162a24u: goto label_162a24;
        case 0x162a28u: goto label_162a28;
        case 0x162a2cu: goto label_162a2c;
        case 0x162a30u: goto label_162a30;
        case 0x162a34u: goto label_162a34;
        case 0x162a38u: goto label_162a38;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a40u: goto label_162a40;
        case 0x162a44u: goto label_162a44;
        case 0x162a48u: goto label_162a48;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a50u: goto label_162a50;
        case 0x162a54u: goto label_162a54;
        case 0x162a58u: goto label_162a58;
        case 0x162a5cu: goto label_162a5c;
        case 0x162a60u: goto label_162a60;
        case 0x162a64u: goto label_162a64;
        case 0x162a68u: goto label_162a68;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a70u: goto label_162a70;
        case 0x162a74u: goto label_162a74;
        case 0x162a78u: goto label_162a78;
        case 0x162a7cu: goto label_162a7c;
        case 0x162a80u: goto label_162a80;
        case 0x162a84u: goto label_162a84;
        case 0x162a88u: goto label_162a88;
        case 0x162a8cu: goto label_162a8c;
        case 0x162a90u: goto label_162a90;
        case 0x162a94u: goto label_162a94;
        case 0x162a98u: goto label_162a98;
        case 0x162a9cu: goto label_162a9c;
        case 0x162aa0u: goto label_162aa0;
        case 0x162aa4u: goto label_162aa4;
        case 0x162aa8u: goto label_162aa8;
        case 0x162aacu: goto label_162aac;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ab4u: goto label_162ab4;
        case 0x162ab8u: goto label_162ab8;
        case 0x162abcu: goto label_162abc;
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        default: break;
    }

    ctx->pc = 0x162928u;

label_162928:
    // 0x162928: 0x3e00008  jr          $ra
label_16292c:
    if (ctx->pc == 0x16292Cu) {
        ctx->pc = 0x16292Cu;
            // 0x16292c: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x162930u;
        goto label_162930;
    }
    ctx->pc = 0x162928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162928u;
            // 0x16292c: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162930u;
label_162930:
    // 0x162930: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_162934:
    // 0x162934: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x162934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_162938:
    // 0x162938: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x162938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_16293c:
    // 0x16293c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16293cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162940:
    // 0x162940: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x162940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_162944:
    // 0x162944: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x162944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_162948:
    // 0x162948: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x162948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_16294c:
    // 0x16294c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x16294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_162950:
    // 0x162950: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x162950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_162954:
    // 0x162954: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x162954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_162958:
    // 0x162958: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x162958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_16295c:
    // 0x16295c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x16295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_162960:
    // 0x162960: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x162960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_162964:
    // 0x162964: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x162964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162968:
    // 0x162968: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16296c:
    // 0x16296c: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x16296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162970:
    // 0x162970: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_162974:
    // 0x162974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x162974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_162978:
    // 0x162978: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16297c:
    // 0x16297c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16297cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_162980:
    // 0x162980: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
label_162984:
    if (ctx->pc == 0x162984u) {
        ctx->pc = 0x162984u;
            // 0x162984: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x162988u;
        goto label_162988;
    }
    ctx->pc = 0x162980u;
    {
        const bool branch_taken_0x162980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162980u;
            // 0x162984: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162980) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162988u;
label_162988:
    // 0x162988: 0x2697000c  addiu       $s7, $s4, 0xC
    ctx->pc = 0x162988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_16298c:
    // 0x16298c: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_162990:
    // 0x162990: 0xafb70028  sw          $s7, 0x28($sp)
    ctx->pc = 0x162990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 23));
label_162994:
    // 0x162994: 0x269e0004  addiu       $fp, $s4, 0x4
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_162998:
    // 0x162998: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x162998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_16299c:
    // 0x16299c: 0x0  nop
    ctx->pc = 0x16299cu;
    // NOP
label_1629a0:
    // 0x1629a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1629a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1629a4:
    // 0x1629a4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1629a8:
    // 0x1629a8: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1629ac:
    // 0x1629ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1629b0:
    // 0x1629b0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1629b4:
    // 0x1629b4: 0x40f809  jalr        $v0
label_1629b8:
    if (ctx->pc == 0x1629B8u) {
        ctx->pc = 0x1629B8u;
            // 0x1629b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1629BCu;
        goto label_1629bc;
    }
    ctx->pc = 0x1629B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1629BCu);
        ctx->pc = 0x1629B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629B4u;
            // 0x1629b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1629BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1629BCu; }
            if (ctx->pc != 0x1629BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1629BCu;
label_1629bc:
    // 0x1629bc: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_1629c0:
    if (ctx->pc == 0x1629C0u) {
        ctx->pc = 0x1629C0u;
            // 0x1629c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1629C4u;
        goto label_1629c4;
    }
    ctx->pc = 0x1629BCu;
    {
        const bool branch_taken_0x1629bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629bc) {
            ctx->pc = 0x1629C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1629BCu;
            // 0x1629c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1629C4u;
            goto label_1629c4;
        }
    }
    ctx->pc = 0x1629C4u;
label_1629c4:
    // 0x1629c4: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1629c8:
    // 0x1629c8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1629c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1629cc:
    // 0x1629cc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1629d0:
    // 0x1629d0: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1629d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1629d4:
    // 0x1629d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1629d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1629d8:
    // 0x1629d8: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x1629d8u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1629dc:
    // 0x1629dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1629dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1629e0:
    // 0x1629e0: 0x8012  mflo        $s0
    ctx->pc = 0x1629e0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_1629e4:
    // 0x1629e4: 0x40f809  jalr        $v0
label_1629e8:
    if (ctx->pc == 0x1629E8u) {
        ctx->pc = 0x1629E8u;
            // 0x1629e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1629ECu;
        goto label_1629ec;
    }
    ctx->pc = 0x1629E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1629ECu);
        ctx->pc = 0x1629E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629E4u;
            // 0x1629e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1629ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1629ECu; }
            if (ctx->pc != 0x1629ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1629ECu;
label_1629ec:
    // 0x1629ec: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1629ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1629f0:
    // 0x1629f0: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1629f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1629f4:
    // 0x1629f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1629f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1629f8:
    // 0x1629f8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1629f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1629fc:
    // 0x1629fc: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1629fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_162a00:
    // 0x162a00: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x162a00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_162a04:
    // 0x162a04: 0x58600057  blezl       $v1, . + 4 + (0x57 << 2)
label_162a08:
    if (ctx->pc == 0x162A08u) {
        ctx->pc = 0x162A08u;
            // 0x162a08: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x162A0Cu;
        goto label_162a0c;
    }
    ctx->pc = 0x162A04u;
    {
        const bool branch_taken_0x162a04 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x162a04) {
            ctx->pc = 0x162A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A04u;
            // 0x162a08: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162B64u;
            goto label_162b64;
        }
    }
    ctx->pc = 0x162A0Cu;
label_162a0c:
    // 0x162a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x162a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_162a10:
    // 0x162a10: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x162a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162a14:
    // 0x162a14: 0x8fb5002c  lw          $s5, 0x2C($sp)
    ctx->pc = 0x162a14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_162a18:
    // 0x162a18: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_162a1c:
    // 0x162a1c: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x162a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_162a20:
    // 0x162a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a24:
    // 0x162a24: 0x1a400025  blez        $s2, . + 4 + (0x25 << 2)
label_162a28:
    if (ctx->pc == 0x162A28u) {
        ctx->pc = 0x162A28u;
            // 0x162a28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162A2Cu;
        goto label_162a2c;
    }
    ctx->pc = 0x162A24u;
    {
        const bool branch_taken_0x162a24 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x162A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A24u;
            // 0x162a28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a24) {
            ctx->pc = 0x162ABCu;
            goto label_162abc;
        }
    }
    ctx->pc = 0x162A2Cu;
label_162a2c:
    // 0x162a2c: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x162a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_162a30:
    // 0x162a30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162a34:
    // 0x162a34: 0x0  nop
    ctx->pc = 0x162a34u;
    // NOP
label_162a38:
    // 0x162a38: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x162a38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_162a3c:
    // 0x162a3c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x162a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_162a40:
    // 0x162a40: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_162a44:
    // 0x162a44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_162a48:
    // 0x162a48: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x162a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_162a4c:
    // 0x162a4c: 0x40f809  jalr        $v0
label_162a50:
    if (ctx->pc == 0x162A50u) {
        ctx->pc = 0x162A50u;
            // 0x162a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x162A54u;
        goto label_162a54;
    }
    ctx->pc = 0x162A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162A54u);
        ctx->pc = 0x162A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A4Cu;
            // 0x162a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162A54u; }
            if (ctx->pc != 0x162A54u) { return; }
        }
        }
    }
    ctx->pc = 0x162A54u;
label_162a54:
    // 0x162a54: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x162a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_162a58:
    // 0x162a58: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_162a5c:
    // 0x162a5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162a60:
    // 0x162a60: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x162a60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
label_162a64:
    // 0x162a64: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
label_162a68:
    if (ctx->pc == 0x162A68u) {
        ctx->pc = 0x162A68u;
            // 0x162a68: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162A6Cu;
        goto label_162a6c;
    }
    ctx->pc = 0x162A64u;
    {
        const bool branch_taken_0x162a64 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x162A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A64u;
            // 0x162a68: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a64) {
            ctx->pc = 0x162A94u;
            goto label_162a94;
        }
    }
    ctx->pc = 0x162A6Cu;
label_162a6c:
    // 0x162a6c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x162a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_162a70:
    // 0x162a70: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_162a74:
    // 0x162a74: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_162a78:
    // 0x162a78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_162a7c:
    // 0x162a7c: 0x42823  negu        $a1, $a0
    ctx->pc = 0x162a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_162a80:
    // 0x162a80: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x162a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_162a84:
    // 0x162a84: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x162a84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_162a88:
    // 0x162a88: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x162a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_162a8c:
    // 0x162a8c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_162a90:
    if (ctx->pc == 0x162A90u) {
        ctx->pc = 0x162A90u;
            // 0x162a90: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->pc = 0x162A94u;
        goto label_162a94;
    }
    ctx->pc = 0x162A8Cu;
    {
        const bool branch_taken_0x162a8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A8Cu;
            // 0x162a90: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a8c) {
            ctx->pc = 0x162A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162a70;
        }
    }
    ctx->pc = 0x162A94u;
label_162a94:
    // 0x162a94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x162a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162a98:
    // 0x162a98: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_162a9c:
    // 0x162a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162aa0:
    // 0x162aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x162aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_162aa4:
    // 0x162aa4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x162aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_162aa8:
    // 0x162aa8: 0x40f809  jalr        $v0
label_162aac:
    if (ctx->pc == 0x162AACu) {
        ctx->pc = 0x162AACu;
            // 0x162aac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162AB0u;
        goto label_162ab0;
    }
    ctx->pc = 0x162AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162AB0u);
        ctx->pc = 0x162AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AA8u;
            // 0x162aac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162AB0u; }
            if (ctx->pc != 0x162AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x162AB0u;
label_162ab0:
    // 0x162ab0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x162ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_162ab4:
    // 0x162ab4: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
label_162ab8:
    if (ctx->pc == 0x162AB8u) {
        ctx->pc = 0x162AB8u;
            // 0x162ab8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x162ABCu;
        goto label_162abc;
    }
    ctx->pc = 0x162AB4u;
    {
        const bool branch_taken_0x162ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ab4) {
            ctx->pc = 0x162AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162AB4u;
            // 0x162ab8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162a38;
        }
    }
    ctx->pc = 0x162ABCu;
label_162abc:
    // 0x162abc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x162abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_162ac0:
    // 0x162ac0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x162ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_162ac4:
    // 0x162ac4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x162ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162ac8:
    // 0x162ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162acc:
    // 0x162acc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x162accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_162ad0:
    // 0x162ad0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_162ad4:
    // 0x162ad4: 0x40f809  jalr        $v0
label_162ad8:
    if (ctx->pc == 0x162AD8u) {
        ctx->pc = 0x162AD8u;
            // 0x162ad8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x162ADCu;
        goto label_162adc;
    }
    ctx->pc = 0x162AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162ADCu);
        ctx->pc = 0x162AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AD4u;
            // 0x162ad8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162ADCu; }
            if (ctx->pc != 0x162ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x162ADCu;
label_162adc:
    // 0x162adc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x162adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_162ae0:
    // 0x162ae0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_162ae4:
    if (ctx->pc == 0x162AE4u) {
        ctx->pc = 0x162AE4u;
            // 0x162ae4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x162AE8u;
        goto label_162ae8;
    }
    ctx->pc = 0x162AE0u;
    {
        const bool branch_taken_0x162ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AE0u;
            // 0x162ae4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ae0) {
            ctx->pc = 0x162B08u;
            goto label_162b08;
        }
    }
    ctx->pc = 0x162AE8u;
label_162ae8:
    // 0x162ae8: 0x0  nop
    ctx->pc = 0x162ae8u;
    // NOP
label_162aec:
    // 0x162aec: 0x0  nop
    ctx->pc = 0x162aecu;
    // NOP
label_162af0:
    // 0x162af0: 0x0  nop
    ctx->pc = 0x162af0u;
    // NOP
label_162af4:
    // 0x162af4: 0x0  nop
    ctx->pc = 0x162af4u;
    // NOP
label_162af8:
    // 0x162af8: 0x0  nop
    ctx->pc = 0x162af8u;
    // NOP
label_162afc:
    // 0x162afc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_162b00:
    if (ctx->pc == 0x162B00u) {
        ctx->pc = 0x162B04u;
        goto label_162b04;
    }
    ctx->pc = 0x162AFCu;
    {
        const bool branch_taken_0x162afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162afc) {
            ctx->pc = 0x162AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162ae8;
        }
    }
    ctx->pc = 0x162B04u;
label_162b04:
    // 0x162b04: 0x0  nop
    ctx->pc = 0x162b04u;
    // NOP
label_162b08:
    // 0x162b08: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_162b0c:
    // 0x162b0c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x162b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_162b10:
    // 0x162b10: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x162b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162b14:
    // 0x162b14: 0xacf30000  sw          $s3, 0x0($a3)
    ctx->pc = 0x162b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
label_162b18:
    // 0x162b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162b1c:
    // 0x162b1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162b20:
    // 0x162b20: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_162b24:
    // 0x162b24: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_162b28:
    // 0x162b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_162b2c:
    // 0x162b2c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x162b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_162b30:
    // 0x162b30: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_162b34:
    // 0x162b34: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x162b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_162b38:
    // 0x162b38: 0xacf2000c  sw          $s2, 0xC($a3)
    ctx->pc = 0x162b38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 18));
label_162b3c:
    // 0x162b3c: 0x100f809  jalr        $t0
label_162b40:
    if (ctx->pc == 0x162B40u) {
        ctx->pc = 0x162B40u;
            // 0x162b40: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x162B44u;
        goto label_162b44;
    }
    ctx->pc = 0x162B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x162B44u);
        ctx->pc = 0x162B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B3Cu;
            // 0x162b40: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162B44u; }
            if (ctx->pc != 0x162B44u) { return; }
        }
        }
    }
    ctx->pc = 0x162B44u;
label_162b44:
    // 0x162b44: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_162b48:
    // 0x162b48: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x162b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_162b4c:
    // 0x162b4c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x162b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_162b50:
    // 0x162b50: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x162b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_162b54:
    // 0x162b54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_162b58:
    // 0x162b58: 0x16c0ffb1  bnez        $s6, . + 4 + (-0x4F << 2)
label_162b5c:
    if (ctx->pc == 0x162B5Cu) {
        ctx->pc = 0x162B5Cu;
            // 0x162b5c: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x162B60u;
        goto label_162b60;
    }
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x162B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B58u;
            // 0x162b5c: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162a20;
        }
    }
    ctx->pc = 0x162B60u;
label_162b60:
    // 0x162b60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_162b64:
    // 0x162b64: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_162b68:
    // 0x162b68: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x162b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_162b6c:
    // 0x162b6c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x162b6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_162b70:
    // 0x162b70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_162b74:
    // 0x162b74: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x162b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_162b78:
    // 0x162b78: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x162b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162b7c:
    // 0x162b7c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x162b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_162b80:
    // 0x162b80: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x162b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_162b84:
    // 0x162b84: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_162b88:
    if (ctx->pc == 0x162B88u) {
        ctx->pc = 0x162B88u;
            // 0x162b88: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x162B8Cu;
        goto label_162b8c;
    }
    ctx->pc = 0x162B84u;
    {
        const bool branch_taken_0x162b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B84u;
            // 0x162b88: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b84) {
            ctx->pc = 0x1629A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1629a0;
        }
    }
    ctx->pc = 0x162B8Cu;
label_162b8c:
    // 0x162b8c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x162b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162b90:
    // 0x162b90: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x162b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_162b94:
    // 0x162b94: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x162b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_162b98:
    // 0x162b98: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x162b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_162b9c:
    // 0x162b9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x162b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_162ba0:
    // 0x162ba0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x162ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_162ba4:
    // 0x162ba4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x162ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_162ba8:
    // 0x162ba8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x162ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_162bac:
    // 0x162bac: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x162bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_162bb0:
    // 0x162bb0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x162bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_162bb4:
    // 0x162bb4: 0x3e00008  jr          $ra
label_162bb8:
    if (ctx->pc == 0x162BB8u) {
        ctx->pc = 0x162BB8u;
            // 0x162bb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x162BBCu;
        goto label_162bbc;
    }
    ctx->pc = 0x162BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BB4u;
            // 0x162bb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162BBCu;
label_162bbc:
    // 0x162bbc: 0x0  nop
    ctx->pc = 0x162bbcu;
    // NOP
}
