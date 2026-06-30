#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00434030
// Address: 0x434030 - 0x4343c0
void sub_00434030_0x434030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434030_0x434030");
#endif

    switch (ctx->pc) {
        case 0x4340bcu: goto label_4340bc;
        case 0x43413cu: goto label_43413c;
        case 0x434150u: goto label_434150;
        case 0x434168u: goto label_434168;
        case 0x4341d4u: goto label_4341d4;
        case 0x434228u: goto label_434228;
        case 0x434234u: goto label_434234;
        case 0x43423cu: goto label_43423c;
        case 0x434248u: goto label_434248;
        case 0x43427cu: goto label_43427c;
        case 0x43428cu: goto label_43428c;
        case 0x43429cu: goto label_43429c;
        case 0x4342a4u: goto label_4342a4;
        case 0x4342b0u: goto label_4342b0;
        case 0x4342b8u: goto label_4342b8;
        case 0x4342ccu: goto label_4342cc;
        case 0x4342d4u: goto label_4342d4;
        case 0x4342e0u: goto label_4342e0;
        case 0x4342e8u: goto label_4342e8;
        case 0x4342f0u: goto label_4342f0;
        case 0x434324u: goto label_434324;
        case 0x43432cu: goto label_43432c;
        case 0x434338u: goto label_434338;
        case 0x434340u: goto label_434340;
        case 0x434348u: goto label_434348;
        case 0x43437cu: goto label_43437c;
        case 0x434388u: goto label_434388;
        case 0x434394u: goto label_434394;
        case 0x4343a0u: goto label_4343a0;
        default: break;
    }

    ctx->pc = 0x434030u;

    // 0x434030: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x434030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x434034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x434034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x434038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x434038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43403c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x434040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x434040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x434044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x434044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434048: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x434048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x43404c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x43404cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x434050: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x434050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x434054: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x434054u;
    {
        const bool branch_taken_0x434054 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x434058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434054u;
            // 0x434058: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434054) {
            ctx->pc = 0x434068u;
            goto label_434068;
        }
    }
    ctx->pc = 0x43405Cu;
    // 0x43405c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43405cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x434060u;
    {
        const bool branch_taken_0x434060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434060u;
            // 0x434064: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434060) {
            ctx->pc = 0x434084u;
            goto label_434084;
        }
    }
    ctx->pc = 0x434068u;
label_434068:
    // 0x434068: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x434068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x43406c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x434070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x434074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434078: 0x0  nop
    ctx->pc = 0x434078u;
    // NOP
    // 0x43407c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x43407cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x434080: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x434080u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_434084:
    // 0x434084: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x434084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x434088: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x434088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x43408c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x43408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x434090: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x434090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x434094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x434094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x434098: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x434098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x43409c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x43409cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4340a0: 0x0  nop
    ctx->pc = 0x4340a0u;
    // NOP
    // 0x4340a4: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x4340a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x4340a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4340a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4340ac: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4340acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x4340b0: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x4340b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4340b4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4340B4u;
    SET_GPR_U32(ctx, 31, 0x4340BCu);
    ctx->pc = 0x4340B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4340B4u;
            // 0x4340b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4340BCu; }
        if (ctx->pc != 0x4340BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4340BCu; }
        if (ctx->pc != 0x4340BCu) { return; }
    }
    ctx->pc = 0x4340BCu;
label_4340bc:
    // 0x4340bc: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x4340bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4340c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4340c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4340c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4340c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4340c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4340c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4340cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4340ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4340d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4340d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4340d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4340d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4340d8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x4340d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4340dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4340dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4340e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4340e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4340e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4340e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4340e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4340e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4340ec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4340ECu;
    {
        const bool branch_taken_0x4340ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4340ec) {
            ctx->pc = 0x4340F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4340ECu;
            // 0x4340f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x434100u;
            goto label_434100;
        }
    }
    ctx->pc = 0x4340F4u;
    // 0x4340f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4340f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4340f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4340F8u;
    {
        const bool branch_taken_0x4340f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4340FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4340F8u;
            // 0x4340fc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340f8) {
            ctx->pc = 0x434118u;
            goto label_434118;
        }
    }
    ctx->pc = 0x434100u;
label_434100:
    // 0x434100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x434100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x434104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x434108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43410c: 0x0  nop
    ctx->pc = 0x43410cu;
    // NOP
    // 0x434110: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x434110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x434114: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x434114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_434118:
    // 0x434118: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x434118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x43411c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x43411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x434120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434124: 0x0  nop
    ctx->pc = 0x434124u;
    // NOP
    // 0x434128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x434128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x43412c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43412cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x434130: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x434130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x434134: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x434134u;
    SET_GPR_U32(ctx, 31, 0x43413Cu);
    ctx->pc = 0x434138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434134u;
            // 0x434138: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43413Cu; }
        if (ctx->pc != 0x43413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43413Cu; }
        if (ctx->pc != 0x43413Cu) { return; }
    }
    ctx->pc = 0x43413Cu;
label_43413c:
    // 0x43413c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43413cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x434140: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x434140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x434144: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x434144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x434148: 0xc04cca0  jal         func_133280
    ctx->pc = 0x434148u;
    SET_GPR_U32(ctx, 31, 0x434150u);
    ctx->pc = 0x43414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434148u;
            // 0x43414c: 0x24c6ce40  addiu       $a2, $a2, -0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434150u; }
        if (ctx->pc != 0x434150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434150u; }
        if (ctx->pc != 0x434150u) { return; }
    }
    ctx->pc = 0x434150u;
label_434150:
    // 0x434150: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x434150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x434154: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x434154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x434158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x434158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43415c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x43415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x434160: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x434160u;
    SET_GPR_U32(ctx, 31, 0x434168u);
    ctx->pc = 0x434164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434160u;
            // 0x434164: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434168u; }
        if (ctx->pc != 0x434168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434168u; }
        if (ctx->pc != 0x434168u) { return; }
    }
    ctx->pc = 0x434168u;
label_434168:
    // 0x434168: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x434168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x43416c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x43416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x434170: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x434170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x434174: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x434174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x434178: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x434178u;
    {
        const bool branch_taken_0x434178 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x43417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434178u;
            // 0x43417c: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434178) {
            ctx->pc = 0x43418Cu;
            goto label_43418c;
        }
    }
    ctx->pc = 0x434180u;
    // 0x434180: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x434180u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x434184u;
    {
        const bool branch_taken_0x434184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434184u;
            // 0x434188: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434184) {
            ctx->pc = 0x4341A8u;
            goto label_4341a8;
        }
    }
    ctx->pc = 0x43418Cu;
label_43418c:
    // 0x43418c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x43418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x434190: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x434190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x434194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x434198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43419c: 0x0  nop
    ctx->pc = 0x43419cu;
    // NOP
    // 0x4341a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4341a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4341a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4341a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4341a8:
    // 0x4341a8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x4341a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x4341ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4341acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4341b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x4341b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x4341b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4341b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4341b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4341b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4341bc: 0x0  nop
    ctx->pc = 0x4341bcu;
    // NOP
    // 0x4341c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4341c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4341c4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4341c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4341c8: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x4341c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x4341cc: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4341CCu;
    SET_GPR_U32(ctx, 31, 0x4341D4u);
    ctx->pc = 0x4341D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4341CCu;
            // 0x4341d0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4341D4u; }
        if (ctx->pc != 0x4341D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4341D4u; }
        if (ctx->pc != 0x4341D4u) { return; }
    }
    ctx->pc = 0x4341D4u;
label_4341d4:
    // 0x4341d4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4341d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4341d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4341d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4341dc: 0x1010  mfhi        $v0
    ctx->pc = 0x4341dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4341e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4341E0u;
    {
        const bool branch_taken_0x4341e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4341e0) {
            ctx->pc = 0x4341E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4341E0u;
            // 0x4341e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4341F4u;
            goto label_4341f4;
        }
    }
    ctx->pc = 0x4341E8u;
    // 0x4341e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4341e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4341ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4341ECu;
    {
        const bool branch_taken_0x4341ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4341F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4341ECu;
            // 0x4341f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341ec) {
            ctx->pc = 0x43420Cu;
            goto label_43420c;
        }
    }
    ctx->pc = 0x4341F4u;
label_4341f4:
    // 0x4341f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4341f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4341f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4341f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4341fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4341fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434200: 0x0  nop
    ctx->pc = 0x434200u;
    // NOP
    // 0x434204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x434204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x434208: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x434208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_43420c:
    // 0x43420c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x43420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x434210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434214: 0x0  nop
    ctx->pc = 0x434214u;
    // NOP
    // 0x434218: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x434218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x43421c: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x43421cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x434220: 0xc10d100  jal         func_434400
    ctx->pc = 0x434220u;
    SET_GPR_U32(ctx, 31, 0x434228u);
    ctx->pc = 0x434224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434220u;
            // 0x434224: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434228u; }
        if (ctx->pc != 0x434228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434228u; }
        if (ctx->pc != 0x434228u) { return; }
    }
    ctx->pc = 0x434228u;
label_434228:
    // 0x434228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43422c: 0xc0f8178  jal         func_3E05E0
    ctx->pc = 0x43422Cu;
    SET_GPR_U32(ctx, 31, 0x434234u);
    ctx->pc = 0x434230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43422Cu;
            // 0x434230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434234u; }
        if (ctx->pc != 0x434234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434234u; }
        if (ctx->pc != 0x434234u) { return; }
    }
    ctx->pc = 0x434234u;
label_434234:
    // 0x434234: 0xc0d1c14  jal         func_347050
    ctx->pc = 0x434234u;
    SET_GPR_U32(ctx, 31, 0x43423Cu);
    ctx->pc = 0x434238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434234u;
            // 0x434238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43423Cu; }
        if (ctx->pc != 0x43423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43423Cu; }
        if (ctx->pc != 0x43423Cu) { return; }
    }
    ctx->pc = 0x43423Cu;
label_43423c:
    // 0x43423c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434240: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x434240u;
    SET_GPR_U32(ctx, 31, 0x434248u);
    ctx->pc = 0x434244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434240u;
            // 0x434244: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434248u; }
        if (ctx->pc != 0x434248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434248u; }
        if (ctx->pc != 0x434248u) { return; }
    }
    ctx->pc = 0x434248u;
label_434248:
    // 0x434248: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x434248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x43424c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x43424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x434250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434254: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x434254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x434258: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x434258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x43425c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x43425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x434260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434264: 0x0  nop
    ctx->pc = 0x434264u;
    // NOP
    // 0x434268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x434268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x43426c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43426cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x434270: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x434270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x434274: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x434274u;
    SET_GPR_U32(ctx, 31, 0x43427Cu);
    ctx->pc = 0x434278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434274u;
            // 0x434278: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43427Cu; }
        if (ctx->pc != 0x43427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43427Cu; }
        if (ctx->pc != 0x43427Cu) { return; }
    }
    ctx->pc = 0x43427Cu;
label_43427c:
    // 0x43427c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x43427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x434280: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x434280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x434284: 0xc04cd60  jal         func_133580
    ctx->pc = 0x434284u;
    SET_GPR_U32(ctx, 31, 0x43428Cu);
    ctx->pc = 0x434288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434284u;
            // 0x434288: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43428Cu; }
        if (ctx->pc != 0x43428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43428Cu; }
        if (ctx->pc != 0x43428Cu) { return; }
    }
    ctx->pc = 0x43428Cu;
label_43428c:
    // 0x43428c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x434290: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x434290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x434294: 0xc04cca0  jal         func_133280
    ctx->pc = 0x434294u;
    SET_GPR_U32(ctx, 31, 0x43429Cu);
    ctx->pc = 0x434298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434294u;
            // 0x434298: 0x262600e0  addiu       $a2, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43429Cu; }
        if (ctx->pc != 0x43429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43429Cu; }
        if (ctx->pc != 0x43429Cu) { return; }
    }
    ctx->pc = 0x43429Cu;
label_43429c:
    // 0x43429c: 0xc10d0fc  jal         func_4343F0
    ctx->pc = 0x43429Cu;
    SET_GPR_U32(ctx, 31, 0x4342A4u);
    ctx->pc = 0x4343F0u;
    if (runtime->hasFunction(0x4343F0u)) {
        auto targetFn = runtime->lookupFunction(0x4343F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342A4u; }
        if (ctx->pc != 0x4342A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343F0_0x4343f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342A4u; }
        if (ctx->pc != 0x4342A4u) { return; }
    }
    ctx->pc = 0x4342A4u;
label_4342a4:
    // 0x4342a4: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x4342a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x4342a8: 0xc10d0f4  jal         func_4343D0
    ctx->pc = 0x4342A8u;
    SET_GPR_U32(ctx, 31, 0x4342B0u);
    ctx->pc = 0x4342ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342A8u;
            // 0x4342ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343D0u;
    if (runtime->hasFunction(0x4343D0u)) {
        auto targetFn = runtime->lookupFunction(0x4343D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342B0u; }
        if (ctx->pc != 0x4342B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343D0_0x4343d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342B0u; }
        if (ctx->pc != 0x4342B0u) { return; }
    }
    ctx->pc = 0x4342B0u;
label_4342b0:
    // 0x4342b0: 0xc0d1c10  jal         func_347040
    ctx->pc = 0x4342B0u;
    SET_GPR_U32(ctx, 31, 0x4342B8u);
    ctx->pc = 0x4342B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342B0u;
            // 0x4342b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342B8u; }
        if (ctx->pc != 0x4342B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342B8u; }
        if (ctx->pc != 0x4342B8u) { return; }
    }
    ctx->pc = 0x4342B8u;
label_4342b8:
    // 0x4342b8: 0xc62c00f4  lwc1        $f12, 0xF4($s1)
    ctx->pc = 0x4342b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4342bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4342c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4342c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4342c4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x4342C4u;
    SET_GPR_U32(ctx, 31, 0x4342CCu);
    ctx->pc = 0x4342C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342C4u;
            // 0x4342c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342CCu; }
        if (ctx->pc != 0x4342CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342CCu; }
        if (ctx->pc != 0x4342CCu) { return; }
    }
    ctx->pc = 0x4342CCu;
label_4342cc:
    // 0x4342cc: 0xc10d100  jal         func_434400
    ctx->pc = 0x4342CCu;
    SET_GPR_U32(ctx, 31, 0x4342D4u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342D4u; }
        if (ctx->pc != 0x4342D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342D4u; }
        if (ctx->pc != 0x4342D4u) { return; }
    }
    ctx->pc = 0x4342D4u;
label_4342d4:
    // 0x4342d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4342d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4342d8: 0xc0f8178  jal         func_3E05E0
    ctx->pc = 0x4342D8u;
    SET_GPR_U32(ctx, 31, 0x4342E0u);
    ctx->pc = 0x4342DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342D8u;
            // 0x4342dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342E0u; }
        if (ctx->pc != 0x4342E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342E0u; }
        if (ctx->pc != 0x4342E0u) { return; }
    }
    ctx->pc = 0x4342E0u;
label_4342e0:
    // 0x4342e0: 0xc10d0f0  jal         func_4343C0
    ctx->pc = 0x4342E0u;
    SET_GPR_U32(ctx, 31, 0x4342E8u);
    ctx->pc = 0x4342E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342E0u;
            // 0x4342e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342E8u; }
        if (ctx->pc != 0x4342E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342E8u; }
        if (ctx->pc != 0x4342E8u) { return; }
    }
    ctx->pc = 0x4342E8u;
label_4342e8:
    // 0x4342e8: 0xc0efc48  jal         func_3BF120
    ctx->pc = 0x4342E8u;
    SET_GPR_U32(ctx, 31, 0x4342F0u);
    ctx->pc = 0x4342ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4342E8u;
            // 0x4342ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342F0u; }
        if (ctx->pc != 0x4342F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4342F0u; }
        if (ctx->pc != 0x4342F0u) { return; }
    }
    ctx->pc = 0x4342F0u;
label_4342f0:
    // 0x4342f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4342f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4342f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4342f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4342f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4342f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4342fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4342fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434300: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x434304: 0xc62200f4  lwc1        $f2, 0xF4($s1)
    ctx->pc = 0x434304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x434308: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x434308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x43430c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43430cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434310: 0x0  nop
    ctx->pc = 0x434310u;
    // NOP
    // 0x434314: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x434318: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434318u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x43431c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x43431Cu;
    SET_GPR_U32(ctx, 31, 0x434324u);
    ctx->pc = 0x434320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43431Cu;
            // 0x434320: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434324u; }
        if (ctx->pc != 0x434324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434324u; }
        if (ctx->pc != 0x434324u) { return; }
    }
    ctx->pc = 0x434324u;
label_434324:
    // 0x434324: 0xc10d100  jal         func_434400
    ctx->pc = 0x434324u;
    SET_GPR_U32(ctx, 31, 0x43432Cu);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43432Cu; }
        if (ctx->pc != 0x43432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43432Cu; }
        if (ctx->pc != 0x43432Cu) { return; }
    }
    ctx->pc = 0x43432Cu;
label_43432c:
    // 0x43432c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434330: 0xc0f8178  jal         func_3E05E0
    ctx->pc = 0x434330u;
    SET_GPR_U32(ctx, 31, 0x434338u);
    ctx->pc = 0x434334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434330u;
            // 0x434334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434338u; }
        if (ctx->pc != 0x434338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434338u; }
        if (ctx->pc != 0x434338u) { return; }
    }
    ctx->pc = 0x434338u;
label_434338:
    // 0x434338: 0xc10d0f0  jal         func_4343C0
    ctx->pc = 0x434338u;
    SET_GPR_U32(ctx, 31, 0x434340u);
    ctx->pc = 0x43433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434338u;
            // 0x43433c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434340u; }
        if (ctx->pc != 0x434340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434340u; }
        if (ctx->pc != 0x434340u) { return; }
    }
    ctx->pc = 0x434340u;
label_434340:
    // 0x434340: 0xc0cefec  jal         func_33BFB0
    ctx->pc = 0x434340u;
    SET_GPR_U32(ctx, 31, 0x434348u);
    ctx->pc = 0x434344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434340u;
            // 0x434344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434348u; }
        if (ctx->pc != 0x434348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434348u; }
        if (ctx->pc != 0x434348u) { return; }
    }
    ctx->pc = 0x434348u;
label_434348:
    // 0x434348: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43434c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x434350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x434354: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43435c: 0xc62200f4  lwc1        $f2, 0xF4($s1)
    ctx->pc = 0x43435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x434360: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x434360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x434364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x434368: 0x0  nop
    ctx->pc = 0x434368u;
    // NOP
    // 0x43436c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x43436cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x434370: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434370u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x434374: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x434374u;
    SET_GPR_U32(ctx, 31, 0x43437Cu);
    ctx->pc = 0x434378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434374u;
            // 0x434378: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43437Cu; }
        if (ctx->pc != 0x43437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43437Cu; }
        if (ctx->pc != 0x43437Cu) { return; }
    }
    ctx->pc = 0x43437Cu;
label_43437c:
    // 0x43437c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434380: 0xc0f8e34  jal         func_3E38D0
    ctx->pc = 0x434380u;
    SET_GPR_U32(ctx, 31, 0x434388u);
    ctx->pc = 0x434384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434380u;
            // 0x434384: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434388u; }
        if (ctx->pc != 0x434388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434388u; }
        if (ctx->pc != 0x434388u) { return; }
    }
    ctx->pc = 0x434388u;
label_434388:
    // 0x434388: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x434388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x43438c: 0xc04c994  jal         func_132650
    ctx->pc = 0x43438Cu;
    SET_GPR_U32(ctx, 31, 0x434394u);
    ctx->pc = 0x434390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43438Cu;
            // 0x434390: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434394u; }
        if (ctx->pc != 0x434394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434394u; }
        if (ctx->pc != 0x434394u) { return; }
    }
    ctx->pc = 0x434394u;
label_434394:
    // 0x434394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434398: 0xc0e1b28  jal         func_386CA0
    ctx->pc = 0x434398u;
    SET_GPR_U32(ctx, 31, 0x4343A0u);
    ctx->pc = 0x43439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434398u;
            // 0x43439c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4343A0u; }
        if (ctx->pc != 0x4343A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4343A0u; }
        if (ctx->pc != 0x4343A0u) { return; }
    }
    ctx->pc = 0x4343A0u;
label_4343a0:
    // 0x4343a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4343a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4343a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4343a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4343a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4343a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4343ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4343ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4343B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4343ACu;
            // 0x4343b0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4343B4u;
    // 0x4343b4: 0x0  nop
    ctx->pc = 0x4343b4u;
    // NOP
    // 0x4343b8: 0x0  nop
    ctx->pc = 0x4343b8u;
    // NOP
    // 0x4343bc: 0x0  nop
    ctx->pc = 0x4343bcu;
    // NOP
}
